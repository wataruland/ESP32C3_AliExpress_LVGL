// See SetupX_Template.h for all options available
#define USER_SETUP_ID 400

#define GC9A01_DRIVER
#define TFT_WIDTH  240 // ST7789 240 x 240 and 240 x 320
#define TFT_HEIGHT 240 // GC9A01 240 x 240

// If a backlight control signal is available then define the TFT_BL pin in Section 2
// below. The backlight will be turned ON when tft.begin() is called, but the library
// needs to know if the LEDs are ON with the pin HIGH or LOW. If the LEDs are to be
// driven with a PWM signal or turned OFF/ON then this must be handled by the user
// sketch. e.g. with digitalWrite(TFT_BL, LOW);
// #define TFT_BL   32            // LED back-light control pin
// #define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)
// We must use hardware SPI, a minimum of 3 GPIO pins is needed.
// Typical setup for ESP8266 NodeMCU ESP-12 is :

#define TFT_MOSI PIN_D7	 // In some display driver board, it might be written as "SDA" and so on.
#define TFT_SCLK PIN_D5
#define TFT_CS   PIN_D8  // Chip select control pin
#define TFT_DC   PIN_D4	 // Data Command control pin
#define TFT_RST  -1  	 // Reset pin (could connect to Arduino RESET pin)
//#define TFT_BL   PIN_D0	 // LED back-light PIN_D0
//#define TFT_BACKLIGHT_ON HIGH


#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT


//#define SPI_FREQUENCY  80000000
#define SPI_FREQUENCY  40000000

// Optional reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY  20000000
