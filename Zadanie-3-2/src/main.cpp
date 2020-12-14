#include <Arduino.h>
unit8_t i=0;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Witaj programisto!")/;/ put your setup code here, to run once:
}

void loop() {
  Serial.println(i);
  delay(2000);
  // put your main code here, to run repeatedly:
}