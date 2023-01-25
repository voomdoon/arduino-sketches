// ++++++++++ config ++++++++++
int SENSOR_PIN = 20;
// ---------- config ----------

int currentState = LOW;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int input = digitalRead(SENSOR_PIN);
  
  if(input == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);

    if(currentState == LOW) {
      Serial.println("Motion detected!");
      currentState = HIGH;
    }
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  
    if(currentState == HIGH) {
      Serial.println("Motion stopped!");
      currentState = LOW;
    }
  }
}
