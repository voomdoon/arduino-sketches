//piezo-buzzer demo

// ++++++++++ config ++++++++++
// +++++ pin config +++++
const byte buzzerPin = 2;
// ----- pin config -----
// ---------- config ----------

void setup() {
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  Serial.println("loop");

  tone(buzzerPin, 4000);

  delay(1000);
  
  noTone(buzzerPin);
  
  delay(1000);
}
