void setup() {
  pinMode(15, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(15));
  if(digitalRead(15) == 1){
    digitalWrite(2, HIGH);
    delay(100);
  } else {
    digitalWrite(2, LOW);
    delay(100);
  }
  delay(100);
}
