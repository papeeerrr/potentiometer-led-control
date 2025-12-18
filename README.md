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

🔗 **Source Code:** GitHub link

**Code Improvement Note**

The firmware was refactored to improve readability, remove redundant logic, and ensure reliable behavior across the full ADC range. This included correcting conditional logic, organizing LED control using arrays, and defining clear threshold regions.

