#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin("espp","esp1234567");

  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);  
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

// the loop function runs over and over again forever
void loop() {
}
