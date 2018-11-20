#include <Servo.h>


Servo servo;
char resp;
void setup() {
  // put your setup code here, to run once:
servo.attach(8);
pinMode (13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){  //verifica se a comunicação
    resp = Serial.read(); //pega o valor se houver no serial
    
    
  if(resp == 'A'){
    servo.write(90);
    delay(10);
     digitalWrite(13, HIGH);  
  }
  
  if(resp == 'F'){
    servo.write(-90);
    delay(15);   
    digitalWrite(13, LOW); 
  }
}
}
