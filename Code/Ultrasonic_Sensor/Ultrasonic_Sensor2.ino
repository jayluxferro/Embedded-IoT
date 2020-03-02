/*
 * Ultrasonic Sensor
 */

// define our pins
int trig = 12, echo = 13, vcc = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(vcc, OUTPUT);

  // supply power to the sensor
  digitalWrite(vcc, HIGH);

  // serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // trigger the waves
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // duration of the waves (flight)
  long duration = pulseIn(echo, HIGH);

  // distance
  long distance = m2cm(duration);

  Serial.print(distance);  // e.g. 3 cm
  Serial.println(" cm");
  delay(100);
}

long m2cm(long microseconds)
{
  return microseconds / 29 / 2;
}
