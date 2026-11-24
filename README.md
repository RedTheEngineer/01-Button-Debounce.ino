# Arduino Button Debounce

## OverView 
 This project handels button debouncing using a Arduino UNO R4 WIFI. The Arduino reads the state of a push button using its internal pull-up resistor and detects changes between HIGH nad LOW. A 50-Millisecond debounce interval helps prevent unwanted multiple inputs caused by mechanical switch bouncing. Once a button press is confirmed, the Arduino toggles and LED ON or OFF. 

 ## Components Used 
 Arduino UNO R4 WiFi
 Breadboard
 LED
 Pushbutton
 220 Ohm resistor 
 Jumper wires 

 ## Circuit Connections
 Digital Pin 8 -> 220 Ohm Resistor
 220 Ohm Resistor -> LED
 LED -> GND
 Pushbutton ->  Pin 2
 Ground Connections

 ## How It Works 
 
Reading the button: The Arduino continuously reads digital pin 2 using digitalRead(). When released, the button reads HIGH. When pressed, it reads LOW.

Detecting a change: The program compares the current button reading with lastReading. If they differ, it records the time using millis().

Debouncing: The program waits until the signal has remained unchanged for 50 milliseconds. This helps filter out rapid electrical changes caused by mechanical switch bouncing.

Controlling the LED: Once a press is confirmed, the Arduino toggles ledState and updates digital pin 8 using digitalWrite().

## What I Learned 
Digital Inputs : I learned about Digital Inputs and Outputs and how the Arduino reads button signals and controls and LED. 
Internal Pull-up Resistors : How pull up resistors work and why an unpressed button reads HIGH.
Debouncing : Understadning why mechanical buttons produce unstable signals.
Millis() : Understaning the difference between a delay() and millis() to track time elapsed withouht stopping a program. 
Minor Issues: I had a hard time undersatning the loop of my code for a while not understanding the button is read as HIGH when button is not pressed, and understanding why the button does not turn off and on if button is held.

## Future Improvments 
Add a second button to controll another LED.
Use multiple LEDs to create different lighting patterns.
Add a long-press feature to distinguish between short and long button presses.
Expierment with new debouce values and see how that changes and effects the button resonsivness.