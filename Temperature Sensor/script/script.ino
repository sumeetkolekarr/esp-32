#ifdef __cplusplus
extern "C" {
  #endif
  uint8_t temperature_sens_read();
  #ifdef __cplusplus
}
#endif
uint8_t temperature_sens_read();

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Temperature of the Internal Sensor");
  Serial.println((temperature_sens_read()- 32)/1.8);
  delay(1000);

}