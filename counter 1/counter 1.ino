//ID 54323

const byte BTNPIN = A0;
int counter = 0;

void setup() {
 //make this pin an input pin
pinMode(BTNPIN, INPUT);
 //set up serial ready for error messages
Serial.begin(9600);
}

void loop() {
 //if statement to check if button is clicked 
 if(digitalRead(BTNPIN) == HIGH){
 //if it is update counter by 1 
 counter ++;
  

}
