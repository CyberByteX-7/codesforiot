const int trigPin = 7;
const int echoPin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration;
  float distance_cm, distance_in;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance_cm = duration * 0.034 / 2;
  distance_in = distance_cm / 2.54;

  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.print(" cm");
  Serial.print(" | ");
  Serial.print(distance_in);
  Serial.println(" inches");

  delay(1000);
}

