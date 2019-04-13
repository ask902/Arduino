int first = 13;
int second = 12;
int third = 11;
int fourth = 10;
int fifth = 9;
int sixth = 8;
int array[] = {first, second, third, fourth, fifth, sixth};
double c4 = 261.63;
double d4 = 293.66;
double e4 = 329.63; 
double f4 = 349.23;
double g4 = 392.00;
double a4 = 440.00;
double b4 = 493.88;
double notes4[] = {c4, d4, e4, f4, g4, b4}; 
 
  double c5 = 523.25;
double d5 = 587.33;
double e5 = 659.25; 
double f5 = 698.46;
double g5 = 783.99;
double a5 = 880.00;
double b5 = 987.77;
double notes5[] = {c5, d5, e5, f5, g5, a5, b5};

  int dw = 3000;
  int w = 2000;
  int dh = 1500;
  int h = 1000;
  int dq = 750;
  int q = 500;
  int de = 375;
  int e = 250;
  int ds = 187.5;
  int s = 125;
  int notelengths[] = {dw, w, dh, h, dq, q, de, e, ds, s};
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
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  // set buttin pin to INPUT
  pinMode(7, INPUT);

 
   tone(4, c4); digitalWrite(7, HIGH);
  delay(dq);
  noTone(4);
    tone(3, c5);
  delay(e);
  noTone(3);
};
void loop(){


}
