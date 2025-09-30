const int smokePin = A0;
const int redPin = 9;
const int greenPin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int smokeLevel = analogRead(smokePin);
  Serial.println(smokeLevel);

  if (smokeLevel > 80) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  delay(100);
}