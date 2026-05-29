int gasPin = A0;
int led = 7;
int buzzer = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasPin);

  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  if (gasValue > 400) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("Gas Detected!");
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    Serial.println("Safe");
  }

  Serial.println("----------------");
  delay(1000);
}
