// Pin connected to the LED
const int ledPin = 13;

void setup() {
  // Initialize the LED pin as an output
  pinMode(D2, OUTPUT);
  digitalWrite(D2, LOW);
}

void loop() {
  digitalWrite(D2, HIGH);
  delay(1000);
  digitalWrite(D2, LOW);
  delay(1000);
  
}
