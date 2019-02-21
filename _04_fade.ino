int led = 11;                             // the pin the LED is attached to (must be a PWM output indicated on board by the ~ symbol). 
int brightness = 0;                       // how bright the LED is 
int fadeAmount = 5;                       // how many points to fade the LED by
                                          // the setup routine runs once when you press reset:
void setup() {
pinMode(led, OUTPUT);                     // declare pin led to be an output:
}

void loop() {                                   // the loop routine runs over and over again forever:
analogWrite(led, brightness);                   // set the brightness of pin 9: 
brightness = brightness + fadeAmount;           // change the brightness for next time through the loop:
if (brightness <= 0 || brightness >= 255) {     // reverse the direction of the fading at the ends of the fade:
fadeAmount = -fadeAmount; }
delay(30);                                      // wait for 30 milliseconds to see the dimming effect
}


