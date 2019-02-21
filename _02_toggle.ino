int buttonPin = 7;           // the number of the pushbutton pin
int ledState = 0;
int ledPin =  12;            // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status
void setup() {  
pinMode(ledPin, OUTPUT);     // initialise the ledPin as an output:
pinMode(buttonPin, INPUT);   // initialise the buttonPin as an input:
}
void loop() {
digitalWrite (ledPin,ledState);         //Set the LED to the value of ledState  
buttonState = digitalRead(buttonPin);   // read the state of the pushbutton value:

if (ledState==1)                        //Check if LED is on
{
    if (buttonState == 1)               // check if the pushbutton is pressed.
    {ledState=0;                        //if LED is on and button is pushed, set ledState to off
     delay (400); }                     //Wait for button to stop bouncing
}else{                                  //if LED is off
  if (buttonState ==1)                  // check if the pushbutton is pressed.
    {ledState =1;                       //if LED is on and button is pushed, set ledState to on
     delay (400); }                     //Wait for button to stop bouncing
     }
}



