void setup() {
 Serial.begin(9600); //inicia a comunicação com o computador
 pinMode(13,OUTPUT);
}

void loop() {
  int luz = analogRead(5); //faz a leitura da luminosidade por meio da porta analógica A5
  Serial.println(luz); //enviar o valor da luminosidade, por meio da porta serial, para o computador
  if( luz == 1023)
    digitalWrite(13,HIGH);
  else
    digitalWrite(13,LOW);
  delay(500);
}
