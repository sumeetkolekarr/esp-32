// Writing on a file
#include "FS.h"
#include "SPIFFS.h"

void setup() {
  Serial.begin(9600);
  if(!SPIFFS.begin(true)){
    Serial.println("An Error has occurred while mounting SPIFFS");
    return;
  }

  File file = SPIFFS.open("/test.txt", FILE_WRITE);
  if(!file){
    Serial.println("Failed to open file for writing");
    return;
  }
  file.println("Hello, SPIFFS!");
  file.close();
  Serial.println("File written successfully");
}

void loop() {
  // Empty loop
}

