# Potentiometer-LED-Control


**Description**
A microcontroller-based system that uses a potentiometer as an analog input to control the activation of multiple LEDs. The system demonstrates ADC reading, threshold-based decision logic, and digital output control.

**Objective**
To design and implement an embedded system that translates an analog signal into discrete output states using a microcontroller.

**Hardware Components**

* Arduino Uno
* Potentiometer
* 5 LEDs
* 220Ω resistors
* Breadboard and jumper wires

**System Behavior**

* Minimum potentiometer value: all LEDs OFF
* Mid-range values: one LED ON at a time
* High-range value: fifth LED ON alone
* Maximum potentiometer value: all LEDs ON

**Software Implementation**

* Language: Embedded C (Arduino)
* Used `analogRead()` to read potentiometer values
* Implemented threshold-based logic for LED control
* Serial output used for debugging and monitoring ADC values

**Key Concepts Demonstrated**

* Analog-to-Digital Conversion (ADC)
* Embedded decision logic
* GPIO output control
* System state segmentation

**What I Learned**

* Proper handling of analog inputs
* Designing clear state-based behavior
* Debugging logic errors in embedded C
* Importance of clean, readable firmware

📷 **Circuit Diagram:** <img width="1521" height="1194" alt="image" src="https://github.com/user-attachments/assets/dec81714-b608-422c-9426-2b687dfd4ce5" />

📷 **Wiring Diagram:** <img width="1391" height="733" alt="image" src="https://github.com/user-attachments/assets/c8f22105-616b-4b69-8fa8-59f19c43f708" />

🔗 **Source Code:** 
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



**Code Improvement Note**

The firmware was refactored to improve readability, remove redundant logic, and ensure reliable behavior across the full ADC range. This included correcting conditional logic, organizing LED control using arrays, and defining clear threshold regions.

