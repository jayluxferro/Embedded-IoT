int pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600); // baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH);
  Serial.println("I'm on");
  delay(10000);
  

  digitalWrite(pin, LOW);
  Serial.println("I'm off");
  delay(10000);
  
}
