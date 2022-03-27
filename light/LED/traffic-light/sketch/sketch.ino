//traffic-light demo using sequence of Germany (red -> red+yellow -> green -> yellow -> red)

// ++++++++++ config ++++++++++
// +++++ pin config +++++
const byte greenLedPin = 2;
const byte yellowLedPin = 3;
const byte redLedPin = 4;
// ----- pin config -----
// ---------- config ----------

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  Serial.println("loop");

  //red
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);

  delay(10000);

  //red and yellow
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);

  delay(2000);

  //green
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);

  delay(10000);

  //yellow
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);

  delay(2000);
}
