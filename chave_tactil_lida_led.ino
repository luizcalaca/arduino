void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  int botao;
  botao = digitalRead(2);
  Serial.println(botao);
  
  if(botao == 1)
    digitalWrite(13,1);
  else
    digitalWrite(13,0);

  delay(500);
}
