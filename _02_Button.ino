int buttonPin = 7;          // the number of the pushbutton pin
int ledPin =  12;           // the number of the LED pin
int buttonState = 0;        // variable for reading the pushbutton status
void setup() {  
pinMode(ledPin, OUTPUT);    // initialise the ledPin as an output:
pinMode(buttonPin, INPUT);  // initialise the buttonPin as an input:
}
void loop() {
buttonState = digitalRead(buttonPin);   // read the state of the pushbutton value:
if (buttonState == HIGH) {        // check if the pushbutton is pressed.
digitalWrite(ledPin, HIGH);       // turn LED on if the buttonState is HIGH:
} else {
digitalWrite(ledPin, LOW);        // turn LED off if the buttonState is LOW:
}
}

