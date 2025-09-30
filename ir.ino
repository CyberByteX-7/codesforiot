const int moisturePin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor_analog = analogRead(moisturePin);
  float moisture_per = 100 - ((sensor_analog / 1023.0) * 100);
  
  Serial.print(sensor_analog);
  Serial.print(" | Moisture Percentage: ");
  Serial.print(moisture_per);
  Serial.println(" %");
  delay(1000);
}