void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
//verde 12
//amarelo 13
//vermelho  11
void loop() {
  digitalWrite(12, HIGH);   
  delay(5000);
  digitalWrite(12, LOW);
    
  digitalWrite(13, HIGH);   
  delay(2000);
  digitalWrite(13, LOW);
                          
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);
}
