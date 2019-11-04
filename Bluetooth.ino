#include "SoftwareSerial.h"
int Blu_Data;
SoftwareSerial HC05(0, 1); // RX, TX
void setup() {
  HC05.begin(9600);
}
void loop() {
  if (HC05.available()) {
    Blu_Data = HC05.read();
    Serial.println(Blu_Data);
  }
}
