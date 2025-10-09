const int proximitySensorPin = 7;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(proximitySensorPin, INPUT);
  Serial.begin(9600);
  Serial.println("Proximity Sensor Ready. Monitoring...");
}

void loop() {
  int sensorState = digitalRead(proximitySensorPin);

  if (sensorState == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("--> Object Detected! <--");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Clear");
  }
  
  delay(300);
}