#include <main.h>

RED redWiFi;
Parser parser((byte*)"", 0);
TFT_eSPI tft = TFT_eSPI(TFT_WIDTH, TFT_HEIGHT); /* TFT instance */
CST816D touch(I2C_SDA, I2C_SCL, TP_RST, TP_INT);

DatosSensoresPC datosCPU;
DatosSensoresPC datosGPU;
DatosHora datosTime;


#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif
//---------------------------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------------------------------

void setup()
{
  Serial.begin(9600); /* prepare for possible serial debug */
  delay(2000);
  Serial.setTimeout(10);  

  String LVGL_Arduino = "Hello Arduino! ";
  LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

  #if ENABLE_DEBUG_MAIN
    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );
  #endif

  touch.begin();
  lv_init();

  #if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
  #endif

  tft.begin();          /* TFT init */
  tft.setRotation( 0 ); /* Landscape orientation, flipped */

//-------------------------------------------------------
  lv_disp_draw_buf_init( &draw_buf, buf, NULL, TFT_WIDTH * TFT_HEIGHT / 10 );

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init( &disp_drv );
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = TFT_WIDTH;
  disp_drv.ver_res = TFT_HEIGHT;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register( &disp_drv );

  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init( &indev_drv );
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register( &indev_drv );

  ui_init();
  #if ENABLE_DEBUG_MAIN
    Serial.println( "Setup done" );
  #endif
//-------------------------------------------------------

  bool ConexionWiFi = false;

  datosTime.Lday   = "";
  datosTime.Ltime  = "";
  datosCPU.Fan1    = -1;
  datosCPU.Fan2    = -1;
  datosCPU.Load    = -1;
  datosCPU.Power   = -1;
  datosCPU.Temperature = -1;
  datosGPU.Fan1    = -1;
  datosGPU.Fan2    = -1;
  datosGPU.Load    = -1;
  datosGPU.Power   = -1;
  datosGPU.Temperature = -1;

  ConexionWiFi = redWiFi.ConexionWiFi();
  delay(1000);
  redWiFi.sincronizarRTCInternet();
  redWiFi.actualizarRTC(&datosTime);

  estilos();
  lv_obj_add_style(ui_PanelOjos, &style_01, 0);
  lv_obj_add_style(ui_PanelBoca, &style_01, 0);
  lv_obj_invalidate(ui_PanelOjos);
  lv_obj_invalidate(ui_PanelBoca);

  previousMillisClock = millis();  
  previousMillisUpdateClock = millis();    
}

void loop()
{
  unsigned long currentMillis = millis();   
  bool changedataTime   = false;
  bool changedataSerial = false;  

  if (Serial.available())
  {
    lecturaPuertoSerial();
    changedataSerial = true;
  }  

  if ((unsigned long)(currentMillis - previousMillisUpdateClock) >= intervalUpdateClock)
  {
    redWiFi.sincronizarRTCInternet();  
    previousMillisUpdateClock = millis();
  }

 if ((unsigned long)(currentMillis - previousMillisClock) >= intervalClock)
  {
    redWiFi.actualizarRTC(&datosTime);
    if (ENABLE_DEBUG_MAIN) Serial.printf("Dia : %s", datosTime.Lday.c_str());
    if (ENABLE_DEBUG_MAIN) Serial.printf("  --  Hora : %s\n", datosTime.Ltime.c_str());
    changedataTime = true;
    previousMillisClock = millis();
  }

  if (changedataTime)
  {
    // Pintar reloj 
    changedataTime = false;
  }

  if (changedataSerial)
  {
    lv_arc_set_value(ui_ArcTemp, int(datosCPU.Temperature));
    sprintf(bufftemp, "%3.1f", datosCPU.Temperature);
    _ui_label_set_property(ui_LabelTemp, 0, bufftemp);

    //500 - 1800
    lv_arc_set_value(ui_ArcVent1, int(datosCPU.Fan1));
    sprintf(bufftemp, "%4d", int(datosCPU.Fan1));
    _ui_label_set_property(ui_LabelVent1, 0, bufftemp);

    //450 - 1850
    lv_arc_set_value(ui_ArcVent2, int(datosCPU.Fan2));
    sprintf(bufftemp, "%4d", int(datosCPU.Fan2));
    _ui_label_set_property(ui_LabelVent2, 0, bufftemp);

    sprintf(bufftemp, "%3.1f", datosCPU.Load);
    lv_label_set_text(ui_LabelCPULoad, bufftemp);
  
    if (int(datosCPU.Load) <= 30)
      lv_style_set_bg_color(&style_01, lv_color_hex(0x00DFFF));
    if (int(datosCPU.Load) > 30 && int(datosCPU.Load) < 70)
      lv_style_set_bg_color(&style_01, lv_color_hex(0x01FF28));
    if (int(datosCPU.Load) >= 70)
      lv_style_set_bg_color(&style_01, lv_color_hex(0xFF2F01));
    lv_obj_invalidate(ui_PanelOjos);
    lv_obj_invalidate(ui_PanelBoca);
  
    changedataSerial = false;    
  }

  lv_timer_handler(); /* let the GUI do its work */
  delay(5);  
}
//---------------------------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------------------------------
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
  /* Display flushing */

  uint32_t w = ( area->x2 - area->x1 + 1 );
  uint32_t h = ( area->y2 - area->y1 + 1 );

  tft.startWrite();
  tft.setAddrWindow( area->x1, area->y1, w, h );
  tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
  tft.endWrite();

  lv_disp_flush_ready( disp );
}

void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
  /*Read the touchpad*/  
  
  FingerNum = touch.getTouch(&touchX, &touchY, &gesture);
  bool touched = true;

  if( !FingerNum )
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;

    #if ENABLE_DEBUG_MAIN
      Serial.print( "Data x " );
      Serial.println( touchX );
      Serial.print( "Data y " );
      Serial.println( touchY );
      Serial.printf("X:%d,Y:%d,gesture:%x\n", touchX, touchY, gesture);
    #endif
  }
}

void lecturaPuertoSerial(void)
{
  String reader = Serial.readStringUntil('\n');
  String data;
  int i;

  if (reader.length() > 0 && reader.substring(0,3) == "CPU")
  {
    i = 0;
    reader = reader.substring(4);
    //if (ENABLE_DEBUG_MAIN) Serial.println(reader);
    parser.Init(reader);
    while (parser.Search('#') == true)
    {
      data = "";
      data = parser.Read_String('#');
      switch (i)
      {
        case 0: // CPU Temp
                datosCPU.Temperature = data.toFloat();
                break;
        case 1: // FAN1
                datosCPU.Fan1 = data.toInt();
                break;
        case 2: // FAN2
                datosCPU.Fan2 = data.toInt();
                break;
        case 3: // Load
                datosCPU.Load = data.toFloat();
                break;
        case 4: // Power
                datosCPU.Power = data.toFloat();
                break;
      }
      parser.SkipWhile('#');    
      i++;
    }
    parser.Reset();  
    reader = "";
  }  

  if (reader.length() > 0 && reader.substring(0,3) == "GPU")
  {
    i = 0;
    reader = reader.substring(4);
    //if (ENABLE_DEBUG_MAIN) Serial.println(reader);
    parser.Init(reader);
    while (parser.Search('#') == true)
    {
      data = "";
      data = parser.Read_String('#');
      switch (i)
      {
        case 0: // CPU Temp
                datosGPU.Temperature = data.toFloat();
                break;
        case 1: // FAN1
                datosGPU.Fan1 = data.toInt();
                break;
        case 2: // FAN2
                datosGPU.Fan2 = data.toInt();
                break;
        case 3: // Load
                datosGPU.Load = data.toFloat();
                break;
        case 4: // Power
                datosGPU.Power = data.toFloat();
                break;
      }
      parser.SkipWhile('#');    
      i++;
    }
    parser.Reset();   
    reader = ""; 
  }    
}

void estilos(void)
{
    lv_style_init(&style_01);
    lv_style_set_bg_color(&style_01, lv_color_hex(0x0000FF));
    lv_style_set_bg_opa(&style_01, LV_OPA_100);
}