#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    60
#define BRIGHTNESS  16
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  FastLED.clear();
  for (int led = 0; led < NUM_LEDS; led++) {
    leds[led] = CRGB::White;
  }
  FastLED.show();
}
