#include <IRremote.h>  
  
int PIN_INFRA = 11;  
float armazenavalor;  
int motor = 5;  
  
IRrecv irrecv(PIN_INFRA);  
decode_results results;  
  
void setup(){  
  pinMode(motor, OUTPUT);   
  Serial.begin(9600);  
  irrecv.enableIRIn(); 
}  
   
void loop(){
  if (irrecv.decode(&results)){  
    Serial.print("Valor lido : ");  
    Serial.println(results.value, HEX);  
    armazenavalor = (results.value);  
    
    if (armazenavalor == 0xFF18E7){  
      digitalWrite(motor, HIGH);  
    }
    if (armazenavalor == 0xFF4AB5){  
      digitalWrite(motor, LOW);
    }  

  irrecv.resume(); //read the next value 
  }  
}
