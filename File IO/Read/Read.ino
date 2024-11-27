// Reading from the file
#include "FS.h"
#include "SPIFFS.h"

void setup() {
  Serial.begin(9600);
  if(!SPIFFS.begin(true)){
    Serial.println("An Error has occurred while mounting SPIFFS");
    return;
  }

  File file = SPIFFS.open("/test.txt");
  if(!file){
    Serial.println("Failed to open file for reading");
    return;
  }

  while(file.available()){
    Serial.write(file.read());
  }
  file.close();
}

void loop() {
  // Empty loop
}
