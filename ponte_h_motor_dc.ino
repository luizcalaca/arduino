int IN1 = 5;
int IN2 = 4;
  
void setup()
{
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
}
  
void loop()
{
 //Girar o Motor A no sentido horario
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);
 //Parar o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);
 
 //Girar o Motor A no sentido anti-horario
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 delay(2000);
 //Parar o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);

}
