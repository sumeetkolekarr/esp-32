int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode(15, INPUT);
}

void loop() {
  int touchValue = touchRead(15);
  if (touchValue < 10) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPin, HIGH);
      delay(500);

      digitalWrite(ledPin, LOW);
      delay(500);
    }
  }
  Serial.println(touchValue);
  delay(1000);
}
