const int pirPin = 4;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(pirPin);
  if (sensorValue == HIGH) {
    Serial.println("Motion detected");
  } else {
    Serial.println("No motion");
  }
  delay(500);
}