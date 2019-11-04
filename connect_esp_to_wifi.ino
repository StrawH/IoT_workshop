#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  delay(3000);
  WiFi.disconnect();
  Serial.println("Start");
  WiFi.begin("network name", "passowrd");
  while (!(WiFi.status() == WL_CONNECTED))
  {
    delay(300);
    Serial.print("..");

  }
  Serial.println("okay, Now  am connected !");

}


void loop()
{


}
