//piezo-buzzer with frequency control using buttons

// ++++++++++ config ++++++++++
// +++++ pin config +++++
const byte buzzerPin = 2;
const byte downButtonPin = 3;
const byte upButtonPin = 4;
// ----- pin config -----
// ---------- config ----------

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(upButtonPin, INPUT);
  pinMode(downButtonPin, INPUT);

  Serial.begin(9600);
}

int frequency = 4000;

void loop() {
  Serial.println("loop");

  int upButtonState = digitalRead(upButtonPin);
  int downButtonState = digitalRead(downButtonPin);
  
  Serial.print("states: -");
  Serial.print(downButtonState);
  Serial.print(" +");
  Serial.print(upButtonState);
  Serial.print(" => ");
  Serial.println(frequency);

  if(upButtonState == HIGH) {
    frequency += 10;
  } else if(downButtonState == HIGH) {
    frequency -= 10;
  }

  if(frequency < 0) {
    frequency = 0;
  }

  tone(buzzerPin, frequency);
}
