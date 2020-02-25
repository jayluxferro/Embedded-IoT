int red = 2, yellow = 3, green = 4, dlay=100;

void setup() {
  // pinMode specifies whether the pin is OUTPUT or INPUT
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // first part
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(dlay);

  // second part
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(dlay);

  // third part
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(dlay);
}
