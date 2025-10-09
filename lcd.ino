const int waterSensorPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("Water Level Sensor - Ready");
}

void loop() {
  int sensorValue = analogRead(waterSensorPin);
  Serial.print("Raw Sensor Value: ");
  Serial.print(sensorValue);


  int waterLevelPercent = map(sensorValue, 0, 600, 0, 100);

  Serial.print("  |  Water Level: ");
  Serial.print(waterLevelPercent);
  Serial.println("%");

  delay(500);
}