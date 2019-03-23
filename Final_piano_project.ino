#include "pitches.h"

//Pick pins for the Buzzer 
pinMode(3,OUTPUT)
pinMode(4,OUTPUT)
//pick pins for the Piano Buttons
pinMode(2,OUTPUT)
pinMode(3,OUTPUT)
pinMode(4,OUTPUT)

void setup()
{
  Serial.begin(9600);
  //Initialize Buttons
}


// notes in the melody:
int melody[] = {
//use preset pitches to make a song




};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  
//set duration of notes

};


void loop()
{
  //while Button is pressed, play set tone
  //do this for all buttons
  //else play no tone

}
