#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft;

void setup() {
    Serial.begin(9600);
    delay(100);
    Serial.printf("Running Red Blue Green\n");

    // setup display
    tft.init();
    tft.invertDisplay(true); // Where i is true or false
}

void loop() {
    tft.fillScreen(TFT_RED);
    delay(100);
    tft.fillScreen(TFT_BLUE);
    delay(100);
    tft.fillScreen(TFT_GREEN);
    delay(100);
}
