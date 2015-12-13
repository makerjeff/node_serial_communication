//Serial Communication
//Simple Serial Broadcaster

const int ledPin = 13;
int analogValue = 0;
int brightness = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  //pour a bowl of serial
  Serial.println("initialized!");
  Serial.flush();

}

void loop() {
  RandomSerial();
  delay(1000);
}

void RandomSerial() {
  int rand0 = random(0, 255);
  int rand1 = random(0, 255);
  int rand2 = random(0, 255);
  
  Serial.print(rand0);
  Serial.print(", ");
  Serial.print(rand1);
  Serial.print(", ");
  Serial.print(rand2);
  Serial.print("\r\n");

}

