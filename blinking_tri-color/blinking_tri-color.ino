//Pin variables
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

//Color variables
int red = 255;
int green = 0;
int blue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
    //make the LED blink
    red = 255; //turn on the red
    // remember, use 255 minus the color value with this LED
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);
  
    red = 0; //turn off the red,
    // remember, use 255 minus the color value with this LED
    analogWrite(redPin, 255 - red);
    analogWrite(greenPin, 255 - green);
    analogWrite(bluePin, 255 - blue);
    delay(500);

}
