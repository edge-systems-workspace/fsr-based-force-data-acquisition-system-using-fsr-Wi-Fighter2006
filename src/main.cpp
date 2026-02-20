#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading

#define FSR_PIN A0   // FSR connected to Analog Pin A0

int fsrValue = 0;    // Variable to store raw ADC value

void setup() {

    Serial.begin(9600);

    // Print system initialization banner
    Serial.println("=== FSR Force Measurement System Initialized ===");
}


void loop() {

    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    delay(500);
}