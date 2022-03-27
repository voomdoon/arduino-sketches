//piezo-buzzer example beep sequences for accept and deny

// ++++++++++ config ++++++++++
// +++++ pin config +++++
const byte buzzerPin = 2;
const byte denyButtonPin = 3;
const byte acceptButtonPin = 4;
// ----- pin config -----
// ---------- config ----------

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(denyButtonPin, INPUT);
  pinMode(acceptButtonPin, INPUT);

  Serial.begin(9600);
}

int frequency = 4000;

void loop() {
  Serial.println("loop");

  int denyButtonState = digitalRead(denyButtonPin);
  int acceptButtonState = digitalRead(acceptButtonPin);
  
  Serial.print("deny: ");
  Serial.print(denyButtonState);
  Serial.print(" accept: ");
  Serial.print(acceptButtonState);
  Serial.print(" => ");
  Serial.println(frequency);

  if(acceptButtonState == HIGH) {
    toneAccept(buzzerPin);
  }

  if(denyButtonState == HIGH) {
    toneDeny(buzzerPin);
  }
}

void toneDeny(byte buzzerPin) {
  tone(buzzerPin, 200);delay( 50 * 3);
  noTone(buzzerPin);
}

void toneAccept(byte buzzerPin) {
    tone(buzzerPin, 2000);
    delay(50);
    noTone(buzzerPin);
    delay(50);
    tone(buzzerPin, 2000);
    delay(50);
    noTone(buzzerPin);
}
