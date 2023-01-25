// ++++++++++ config ++++++++++
int SENSOR_PIN_MIN = 19;
int LED_PIN_MIN = 4;
int COUNT = 3;
// ---------- config ----------

int currentState = LOW;

void setup() {
  Serial.begin(9600);

  for(int i = 0; i < COUNT; i++) {
    pinMode(SENSOR_PIN_MIN + i, INPUT);
    pinMode(LED_PIN_MIN + i, OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < COUNT; i++) {
    int input = digitalRead(SENSOR_PIN_MIN + i);
    digitalWrite(LED_PIN_MIN + i, input);
    Serial.print(i);
    Serial.print(" ");
    Serial.println(input);
  }
}
