#include <WiFi.h> 

void setup() {
  Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);
  Serial.println("Program Start");
  // WiFi.begin("IoT");
  WiFi.begin("Jaigurudev", "JGD@555+");

  while((!(WiFi.status() == WL_CONNECTED))){
    Serial.print('...');
    delay(300);
  }
  Serial.println("I am Connected");
  Serial.println("Your IP is: ");
  Serial.println((WiFi.localIP()));


}

void loop() {
  // put your main code here, to run repeatedly:

}
