
/*
 Arduino Dice :)
 This example shows how to simulate throwing a dice with 6 LEDs
 By Esther van der Stappen
 */

// 6 consecutive digital pins for the LEDs

int first = 13;
int second = 12;
int third = 11;
int fourth = 10;
int fifth = 9;
int sixth = 8;
int array[] = {first, second, third, fourth, fifth, sixth};
// pin for the button switch
int button;
// value to check state of button switch
int pressed;

void setup() {
  // set all LED pins to OUTPUT
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  // set buttin pin to INPUT
  pinMode(7, INPUT);
 
  digitalWrite(7, HIGH);
 
}

void loop() {
  int led = 0;
  while (true){
  // if button is pressed - throw the dice
  int pressed;
  pressed = digitalRead(7);
  if (pressed == HIGH){
  digitalWrite(array[led], HIGH);
  delay(30);
  digitalWrite(array[led], LOW);
  delay(30);
  led++;   
  if(led >6){led = 0;}
  }
  else if (pressed == LOW){
  digitalWrite(array[led], HIGH);
  delay(1000);
}
  
}}

