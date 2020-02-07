
#include <IRremote.h>  
  
int PIN_INFRA = 6;  
float armazenavalor;  

//motor_A
int IN1 = 2 ;
int IN2 = 3 ;
 
//motor_B
int IN3 = 4 ;
int IN4 = 5 ; 
  
IRrecv irrecv(PIN_INFRA);  
decode_results results;  
  
void setup(){  
  //pinMode(motor, OUTPUT);   
  Serial.begin(9600);  
  irrecv.enableIRIn();
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}  
   
void loop(){
  if (irrecv.decode(&results)){  
    Serial.print("Valor lido : ");  
    Serial.println(results.value, HEX);  
    armazenavalor = (results.value);  
    
    if (armazenavalor == 0xFF18E7){ //para frente
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);  
      delay(1000);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,HIGH); 
    }
    if (armazenavalor == 0xFF4AB5){  //para trás
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      delay(1000);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,HIGH); 
    }
    if (armazenavalor == 0xFF5AA5){  //para direita
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      delay(1000);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,HIGH); 
    }  

    irrecv.resume(); //read the next value 
  }  
}
