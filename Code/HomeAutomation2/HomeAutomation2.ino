int pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600); // baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String receivedData = Serial.readStringUntil("\n"); // read the incoming string
    Serial.print("Data received: ");
    Serial.println(receivedData);
    if (receivedData == "1"){
      digitalWrite(pin, HIGH);
    }
    else if(receivedData == "0"){
      digitalWrite(pin, LOW);
    }
  }
  
}
