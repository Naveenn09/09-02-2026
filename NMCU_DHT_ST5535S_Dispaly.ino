#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>


#define TFT_CS   D8      
#define TFT_DC   D4      
#define TFT_RST  D3      

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

#define DHTPIN   D2     
#define DHTTYPE  DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  delay(2000);

  tft.initR(INITR_BLACKTAB);   
  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);

  tft.setTextColor(ST77XX_CYAN);
  tft.setTextSize(2);


  dht.begin();
}

void loop() {
  delay(2500);   // DHT11 needs slow polling

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  tft.fillRect(0, 40, 160, 80, ST77XX_BLACK);

  if (isnan(humidity) || isnan(temperature)) {
    tft.setTextColor(ST77XX_RED);
    tft.setTextSize(2);
    tft.setCursor(10, 60);
    tft.println("Sensor Error");
    return;
  }
  // Display Temperature
  tft.setTextColor(ST77XX_GREEN);
  tft.setTextSize(2);
  tft.setCursor(10, 50);
  tft.print("Temp:");
  tft.print(temperature);
  tft.println(" C");

  tft.setCursor(10, 80);
  tft.print("Hum:");
  tft.print(humidity);
  tft.println(" %");


  Serial.print("Temp:");
  Serial.print(temperature);
  Serial.print("C  |  Humidity:");
  Serial.print(humidity);
  Serial.println("%");
}
