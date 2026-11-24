const int LDR_PIN = A0;
const int LED_PIN = 9;

const int THRESHOLD = 500;

unsigned long previousMillis = 0;
const unsigned long interval = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    int sensorValue = analogRead(LDR_PIN);

    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);

    if (sensorValue < THRESHOLD) {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("Dark - LED ON");
    } 
    else {
      digitalWrite(LED_PIN, LOW);
      Serial.println("Bright - LED OFF");
    }
  }
}
