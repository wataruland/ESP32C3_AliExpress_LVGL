// See SetupX_Template.h for all options available
#define USER_SETUP_ID 401

#define GC9A01_DRIVER
#define TFT_WIDTH  240 // ST7789 240 x 240 and 240 x 320
#define TFT_HEIGHT 240 // GC9A01 240 x 240

#define TFT_MISO 8
#define TFT_MOSI 7
#define TFT_SCLK 10
#define TFT_CS   1     // Chip select control pin
#define TFT_DC   3     // Data Command control pin
#define TFT_RST  4     // Reset pin (could connect to RST pin)
//#define TFT_RST  -1  // Set TFT_RST to -1 if display RESET is connected to ESP32 board RST
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
#define SPI_FREQUENCY  80000000

#define SPI_READ_FREQUENCY  5000000

//#define SPI_TOUCH_FREQUENCY  2500000

// #define SUPPORT_TRANSACTIONS