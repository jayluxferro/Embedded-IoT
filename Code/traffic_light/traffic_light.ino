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
  trigger_light(HIGH, LOW, LOW, 10000);

  // second part
   trigger_light(HIGH, LOW, HIGH, 5000);

  // third part
   trigger_light(LOW, HIGH, LOW, 1000);
}

void trigger_light(int p1, int p2, int p3, int p4){
  digitalWrite(red, p1);
  digitalWrite(yellow, p2);
  digitalWrite(green, p3);
  delay(p4);
}
