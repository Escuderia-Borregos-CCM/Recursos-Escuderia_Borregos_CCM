#include <Arduino.h>
#include "LCDManager.h"
#include "UltrasonicManager.h"

/* Sensor Ultrasonico */
#define TRIG_PIN 5
#define ECHO_PIN 18

#define LCD_ADRESS 0x27

UltrasonicManager sensor(TRIG_PIN, ECHO_PIN);
LCDManager lcd(LCD_ADRESS, 16, 2);

void setup() {
  Serial.begin(115200);
  sensor.begin();
  lcd.begin();

  lcd.printLine(0, "Mota inicializada");

};

void loop() {
  float distance = sensor.getDistanceCM();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  lcd.printLine(1, "Dist"+ String(distance,1) + " cm");

  delay(1000);
}
