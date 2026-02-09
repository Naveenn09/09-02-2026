#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include "logo.h"

#define TFT_CS   D8
#define TFT_DC   D4
#define TFT_RST  D3

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);

  // Draw bird logo at center
  tft.drawRGBBitmap(48, 64, epd_bitmap_img, 32, 32);
}

void loop() {
}
