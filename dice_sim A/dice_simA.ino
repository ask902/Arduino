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
  // initialize random seed by noise from analog pin 0 (should be unconnected)
  randomSeed(analogRead(0));
  digitalWrite(7, HIGH);
}

void loop() {
  // if button is pressed - throw the dice
  pressed;
  pressed = digitalRead(7);
  if (pressed == LOW) {
    // remove previous number to LOW
    for (int i = 0; i < 6; i++) {
      digitalWrite(array[i], LOW);
    }

    int randomNum = random(1, 7);
    // get a random number in the range [1,6]
    if (randomNum >= 1) {
      //write IF statements to light up the lights
      digitalWrite(first, HIGH);
    } if (randomNum >= 2) {
      digitalWrite(second, HIGH);
    }
    if (randomNum >= 3) {
      digitalWrite(third, HIGH);
    }
    if (randomNum >= 4) {
      digitalWrite(fourth, HIGH);
    }
    if (randomNum >= 5) {
      digitalWrite(fifth, HIGH);
    } if (randomNum == 6) {
      digitalWrite(sixth, HIGH);
    }

  }
}


