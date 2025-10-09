#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

int red_frequency = 0;
int green_frequency = 0;
int blue_frequency = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  Serial.begin(9600);
  Serial.println("Color Sensor Ready");
}

void loop() {
  
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  red_frequency = pulseIn(sensorOut, LOW);

  
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  green_frequency = pulseIn(sensorOut, LOW);

  
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  blue_frequency = pulseIn(sensorOut, LOW);

  
  Serial.print("R = ");
  Serial.print(red_frequency);
  Serial.print("  |  G = ");
  Serial.print(green_frequency);
  Serial.print("  |  B = ");
  Serial.println(blue_frequency);

  delay(1000);
}