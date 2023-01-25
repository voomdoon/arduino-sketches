//Serail.print

void setup() {
  Serial.begin(9600);
}

byte b = 123;
long l = 123;

void loop() {
  Serial.println("loop");

  Serial.println("byte: " + String(b));

  Serial.println("long: " + String(l));
}
