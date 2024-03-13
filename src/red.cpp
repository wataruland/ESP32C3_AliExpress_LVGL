#include "red.h"

RED::RED()
{
}

RED::~RED()
{
}

bool RED::ConexionWiFi(int num_intentos)
{
  //connect to WiFi
  int contador_intentos = 0;
  bool conexion = true;

  //if (ENABLE_DEBUG_RED) Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
    conexion = !conexion;
    contador_intentos++; 
    //if (ENABLE_DEBUG_RED) Serial.print(".");    
    if (contador_intentos > num_intentos)
    {
      //if (ENABLE_DEBUG_RED) Serial.println(" CONNECTED FAIL ");
      _conexion_activa = false;
      infoWiFi_conn = _conexion_activa;
      infoWiFi_ssid = "sin conexion";
      infoWiFi_tipo = "sin conexion";
      return _conexion_activa;
    }
    delay(500);
  }
  //if (ENABLE_DEBUG_RED) Serial.println(" CONNECTED ");
  _conexion_activa = true;
  infoWiFi_conn = _conexion_activa;
  infoWiFi_ssid = ssid;
  infoWiFi_tipo = "2.4 Mhz";
  return _conexion_activa;
}

void RED::actualizarRTC(DatosHora* datos)
{
  char timeStringBuff[35];
  char dayStringBuff[35];
  char fechaStringBuff[35];
  struct tm timeinfo;

  timeinfo = rtc.getTimeStruct();  

  strftime(timeStringBuff, sizeof(timeStringBuff), "%H:%M:%S", &timeinfo);  
  strftime(dayStringBuff, sizeof(dayStringBuff), "%m/%d/%Y", &timeinfo);  
  strftime(fechaStringBuff, sizeof(fechaStringBuff), "%A, %B %d %Y", &timeinfo);  
  /*
  if (ENABLE_DEBUG_RED)
  {
    Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
    Serial.println(fechaStringBuff);
    Serial.println(timeStringBuff);
    Serial.println(dayStringBuff);
  }
  */
  datos->Ltime    = timeStringBuff;
  datos->Lday     = dayStringBuff;
  datos->LLday    = fechaStringBuff;
  datos->hora     = datos->Ltime.substring(0,2);
  datos->minutos  = datos->Ltime.substring(3,5);
  datos->segundos = datos->Ltime.substring(6);   
}

void RED::sincronizarRTCInternet(void)
{
  struct tm timeinfo;
  
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer1, ntpServer2);
  configTzTime(time_zone, ntpServer1, ntpServer2);  
  if(getLocalTime(&timeinfo)) rtc.setTimeStruct(timeinfo);
}