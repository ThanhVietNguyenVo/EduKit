#include "SENSOR.h"

SENSOR Light1(A3);
SENSOR Light2(A4);

void setup() {
  Serial.begin(9600);

}

void loop() {
  int cuongdosang1 = Light1.light();
  Serial.print("Cam bien 1: ");
  Serial.println(cuongdosang1);
  int cuongdosang2 = Light2.light();
  Serial.print("Cam bien 2: ");
  Serial.println(cuongdosang2);
  delay(500);

}
