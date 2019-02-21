void setup() {          // the setup function runs once when you press reset or power the board
pinMode(12, OUTPUT);    // initialize digital pin 12 as an output.
pinMode(11, OUTPUT);    // initialize digital pin 11 as an output.
pinMode(10, OUTPUT);    // initialize digital pin 10 as an output.
pinMode(9, OUTPUT);     // initialize digital pin 9 as an output.
}
void loop() {           // the loop function runs over and over again forever
digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
digitalWrite(11, HIGH); // turn the LED on (HIGH is the voltage level)
digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
digitalWrite(9, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(1000);            // wait for a second
digitalWrite(12, LOW);  // turn the LED off by making the voltage LOW
digitalWrite(11, LOW);  // turn the LED off by making the voltage LOW
digitalWrite(10, LOW);  // turn the LED off by making the voltage LOW
digitalWrite(9, LOW);   // turn the LED off by making the voltage LOW
delay(1000);            // wait for a second
}

