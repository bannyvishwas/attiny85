void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);  
  delay(3000);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
}
