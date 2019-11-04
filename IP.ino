#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  delay(3000);
  WiFi.disconnect();
  Serial.println("Start");
  WiFi.begin("my-net", "dddd");
  while ((!(WiFi.status() == WL_CONNECTED))) {
    delay(300);
    Serial.print("..");

  }
  Serial.println("okay, Now  am connected !");
  Serial.println("Your IP is:");
  Serial.println((WiFi.localIP().toString()));
  Serial.println("Your gateway is:");
  Serial.println((WiFi.gatewayIP().toString().c_str()));
  Serial.println("Your host name is:");
  Serial.println((WiFi.hostname()));

}


void loop()
{


}
