
const int ledPin = 8; // set pin mode 8
const int buttonPin = 2; //set button pin to 2 

int lastButtonState = HIGH;
bool ledState = false;

unsigned long currentTime =0;
unsigned long previousTime = 0;
unsigned long waitTime = 50;

int lastReading = HIGH;
int stableButtonState= HIGH;


void setup() {
  pinMode(ledPin, OUTPUT); // sets the 8 pin to output
  pinMode(buttonPin, INPUT_PULLUP);  // sets pin 2 to a interal pullup
}

void loop() {
  currentTime = millis();
  int buttonState = digitalRead(buttonPin);


    if (buttonState != lastReading) { //checks to see if our button state is differnt from last reading 
    previousTime = currentTime;
    lastReading = buttonState;
  }

 if(currentTime - previousTime >= waitTime){ // checks to see if alloted time has passed

    if( stableButtonState != lastReading){
      stableButtonState = lastReading;


       if (stableButtonState == LOW && lastButtonState == HIGH) { // checks to confirm button has been pressed and turns LED on or off
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
}
    
    
  lastButtonState = stableButtonState;
    }

    


 }


}
