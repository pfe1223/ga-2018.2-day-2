/*
  This example code is based on the tutorial below.
  It has been modified to use a potentiometer
  to control the fading of the LED.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 9;          // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int pot = A0;          // analog pin the potentiometer is attached to
int potVal = 0;      // value from the potentiometer

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the potentiometer
  potVal = analogRead(pot);

  // convert potentiometer reading from 0 - 1024 to 0 - 255
  brightness = map(potVal, 0, 1024, 0, 255);
  
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
