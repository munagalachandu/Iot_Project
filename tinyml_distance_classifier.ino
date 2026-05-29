#define TRIG 12
#define ECHO 5

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

float getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);

  return duration * 0.034 / 2.0;
}

void loop() {

  float distance = getDistance();

  float veryCloseScore = max(0.0, (15.0 - distance) / 15.0);
  float nearScore      = max(0.0, 1.0 - abs(distance - 25.0) / 15.0);
  float farScore       = min(1.0, distance / 40.0);

  String prediction;
  float confidence;

  if (veryCloseScore >= nearScore &&
      veryCloseScore >= farScore) {

    prediction = "VERY CLOSE";
    confidence = veryCloseScore;
  }
  else if (nearScore >= farScore) {

    prediction = "NEAR";
    confidence = nearScore;
  }
  else {

    prediction = "FAR";
    confidence = farScore;
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Serial.print("Prediction: ");
  Serial.println(prediction);

  Serial.print("Confidence: ");
  Serial.print(confidence * 100);
  Serial.println("%");

  Serial.println("----------------------");

  delay(1000);
}
