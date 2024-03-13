#pragma once

//--------------------------------------------------------------------------------//
#define TFT_WIDTH  240
#define TFT_HEIGHT 240
//--------------------------------------------------------------------------------//        
#define I2C_SDA 4
#define I2C_SCL 5
#define TP_INT 0
#define TP_RST 1
//--------------------------------------------------------------------------------//        

//--------------------------------------------------------------------------------//
#define intervalClock  1000                // Cada 1 seg
#define intervalUpdateClock (3600000 * 6)  // Cada 6 horas

typedef struct 
{
  float temp;
  float humedad;
  float presion; 
  float altura;
} DatosSensor;

typedef struct 
{
  String hora;
  String minutos;
  String segundos;  
  String Ltime;
  String Lday;
  String LLday;  
} DatosHora;

typedef struct
{
   float Temperature;
   int Fan1;
   int Fan2;
   float Load;
   float Power;
} DatosSensoresPC;