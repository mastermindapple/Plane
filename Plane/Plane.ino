int t;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(analogRead(10));
  analogWrite(10, 490);
  t = millis();
  if(t % 1000 == 0){
    digitalWrite(10, HIGH);
    Serial.println(analogRead(10));
    delay(1000);
  }
  else{
    digitalWrite(10, LOW);
    Serial.println(analogRead(10));
  }
}
