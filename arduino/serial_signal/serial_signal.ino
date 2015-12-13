//Serial Communication
//Simple Serial Broadcaster

const int ledPin = 13;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  NoDelayBlink();
}

//CUSTOM FUNCTIONS
void NoDelayBlink() {
  
  unsigned long currentMillis = millis();
  
  if(currentMillis - previousMillis >= interval) {
    //save the last led blink time
    previousMillis = currentMillis;
    
    //switch the led state
    if (ledState == LOW) {
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}
