#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

// TODO 1:
// Define FSR analog pin (Use A0)
const int FSR_PIN = A0;

// TODO 2:
// Create variable to store sensor reading
int fsrReading = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("=== FSR Force Measurement System Initialized ===");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrReading = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("FSR ADC Value: ");
    Serial.println(fsrReading);

    // TODO 7:
    // Apply simple threshold logic (detect pressure)
    if (fsrReading > 100) {

        // TODO 8:
        // Print pressure detection message
        Serial.println("Pressure Detected!");
    }
    else {
        Serial.println("No Pressure");
    }


    Serial.println("-----------------------------");

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}