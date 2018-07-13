const int led = 10;   //led - pino digital 10.
const int botao = 8; //botão - pino digital 8.
 
//0: LOW / 1:HIGH
int modoBotao = 0;
 
void setup() {
  pinMode(led,OUTPUT);  
  pinMode(botao,INPUT);
}
 
void loop() {  
modoBotao = digitalRead(botao);          

  if (modoBotao == HIGH) {
    digitalWrite(led,HIGH); //O botão está pressionado, então, acionará o led.
  } else {
    digitalWrite(led,LOW);  //O botão não está pressionado, então, desligará o led.    
  }       
}
