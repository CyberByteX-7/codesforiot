#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if readings failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Sensor Error!");
    return;
  }

  // Print humidity & temperature
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  |  Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");

  // Humidity condition checks
  if (humidity < 30) {
    Serial.println("Dry (Low Humidity)");
  } else if (humidity <= 60) {
    Serial.println("Normal (Comfortable)");
  } else {
    Serial.println("High Humidity");
  }
}