#include <Servo.h> 
Servo myservo;      
char serial_data;    

void setup() {
 Serial.begin(9600);
 myservo.attach(9);
 myservo.write(95);
 delay(500);
 myservo.write(155);
 delay(500);
 myservo.write(35);
 delay(500);
 myservo.write(95);
}

void loop() {
  if(Serial.available()>0)
  {
    serial_data=Serial.read();
   if (serial_data == 'O')
   {
     myservo.write(155);
     
   }
   else if (serial_data == 'G')
   {
     myservo.write(35);
     
   }
   else if (serial_data == 'N')
   {
     myservo.write(95);
   }
  } 
}  
  

