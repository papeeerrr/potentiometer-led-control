const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = 5;
const int potPin = A0;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(potPin);
  Serial.println(adcValue);

  // Turn all LEDs OFF first
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  if (adcValue == 0) {
    // All LEDs OFF
  }
  else if (adcValue < 170) {
    digitalWrite(ledPins[0], HIGH);
  }
  else if (adcValue < 340) {
    digitalWrite(ledPins[1], HIGH);
  }
  else if (adcValue < 510) {
    digitalWrite(ledPins[2], HIGH);
  }
  else if (adcValue < 680) {
    digitalWrite(ledPins[3], HIGH);
  }
  else if (adcValue < 850) {
    // 5th LED ON alone
    digitalWrite(ledPins[4], HIGH);
  }
  else {
    // Maximum value: all LEDs ON
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
  }

  delay(50);
}
