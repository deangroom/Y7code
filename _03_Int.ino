int led = 12;             // tell Arduino that pin 12 is going to be called “led” for the following sketch
void setup() {
pinMode(led, OUTPUT);     // initialize digital pin 12 as an output.
}
void loop() {             // the loop function runs over and over again forever
digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(1000);              // wait for a second
digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
delay(1000);              // wait for a second
}

