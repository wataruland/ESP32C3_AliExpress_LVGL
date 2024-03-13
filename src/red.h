#ifndef _RED_H_
#define _RED_H_
//#define ENABLE_DEBUG_RED true

#include <WiFi.h>
#include <ESP32Time.h>
#include "config.h"

class RED
{
    public:
        RED();
        ~RED();
        bool ConexionWiFi(int = 20);
        void sincronizarRTCInternet(void);
        void actualizarRTC(DatosHora*);

        String infoWiFi_ssid;
        String infoWiFi_tipo;
        bool infoWiFi_conn;
    protected:
    private:
        const char* ssid       = "TPLINK88";
        const char* password   = "wataru88kimagure";
        const char* ntpServer1 = "pool.ntp.org";
        const char* ntpServer2 = "time.nist.gov";
        const long  gmtOffset_sec = 3600;
        const int   daylightOffset_sec = 3600;
        const char* time_zone = "CET-1CEST,M3.5.0,M10.5.0/3";  // TimeZone rule for Europe/Rome including daylight adjustment rules (optional)
        bool _conexion_activa;
        ESP32Time rtc;
};
#endif