#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include <lvgl.h>
#include "CST816D.h"
#include <TFT_eSPI.h>
#include "ParserLib.h"
#include <ui.h>
#include "red.h"
#include "config.h"

#define ENABLE_DEBUG_MAIN false

void setup(void);
void loop(void);
void my_disp_flush( lv_disp_drv_t *, const lv_area_t *, lv_color_t *);
void my_touchpad_read( lv_indev_drv_t *, lv_indev_data_t *);
void lecturaPuertoSerial(void);
void estilos(void);
int active_screen(void);
void cpu_screen(void);
void gpu_screen(void);
void time_screen(void);


static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[TFT_WIDTH * TFT_HEIGHT / 10 ];

bool FingerNum;
uint8_t gesture;
uint16_t touchX, touchY;
unsigned long previousMillisClock;
unsigned long previousMillisUpdateClock;

static char bufftemp[16];  
lv_style_t style_01;

#endif