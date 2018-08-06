void setup() {
  Serial.begin(9600)
  pinMode(13, OUTPUT);
}

void loop() {
   if(Serial.available() > 0){
    char c = Serial.read();
    if(c == 13){
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
    }
   }
}
