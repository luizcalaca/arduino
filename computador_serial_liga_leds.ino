void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int x = Serial.available();
  if(x > 0){
    char c = Serial.read();

    if(c == '1') digitalWrite(13,1);
    if(c == '2') digitalWrite(12,1);
    if(c == '3') digitalWrite(11,1);

    if(c == 'A') digitalWrite(13,0);
    if(c == 'B') digitalWrite(12,0);
    if(c == 'C') digitalWrite(11,0);
  }

  delay(500);
}
