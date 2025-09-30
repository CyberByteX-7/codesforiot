const int irSensorPin = 2;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);
  if (sensorValue == LOW) {
    Serial.println("Object detected");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("No object in range");
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}