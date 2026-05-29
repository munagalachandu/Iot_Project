int ldr = 34;
int led = 2;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int light = analogRead(ldr);

  Serial.print("Light: ");
  Serial.println(light);

  if (light < 2000) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(500);
}
