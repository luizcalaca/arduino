void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
    analogWrite(8,0);
    delay(1000);
    analogWrite(8,20);
    delay(1000);
    analogWrite(8,50);
    delay(1000);
    analogWrite(8,80);
    delay(1000);
    analogWrite(8,110);
    delay(1000);
    analogWrite(8,150);
    delay(1000);
    analogWrite(8,180);
    delay(1000);
    analogWrite(8,200);
    delay(1000);
    analogWrite(8,230);
    delay(1000);
    analogWrite(8,255);
}
