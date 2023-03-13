//23394
#include<Servo.h>
#include<LibPrintf.h>

const byte SERVOPIN = 5;
const byte CHOICEBTN = 1;
const byte STARTBTN= 2;
const byte LED1 = A0;
const byte LED2 = A1;
const byte LED3 = A2;
const byte LED4 = A3;

Servo lock;
const byte UNLOCK = 90;
const byte LOCK = 0;
const byte KEY = 3;

byte ledChoice = 1;
bool gameOn = false;

void setup() {
  pinMode(CHOICEBTN, INPUT);
  pinMode(STARTBTN, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT)

  lock.attacke(SERVOPIN)
  lock.write(LOCK);

  Serial.begin(9600)
}

void loop() {
  if(digitalRead(STARTBTN)  == HIGH) {
   gameOn = !gameOn;
   printf.("game is set to %b", gameOn)
   delay(250);
  }
  
 if(gameOn) {
   blink(400)
   printf("ledChoise is %i and KEY is %i", ledChoise, KEY)
   if(ledChoise == KEY && digitalRead(CHOISEBTN)  == HIGH){
     lock.write(UNLOCK);
   }
 }   
}

void blink(int length) {
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, LOW);
  ledChoise++;
 switch(ledChoise){
   case 1:
     digitalWrite(LED1, High)
     break;
   case 2:
     digitalWrite(LED2, High)
     break;
   case 3:
     digitalWrite(LED3, High)
     break; 
   case 4:
     digitalWrite(LED4, High)
     ledChoise = 0;
     break; 

  }
  

   delay(length);

}
