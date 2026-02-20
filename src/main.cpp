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

    // Initialize Serial communication at 9600 baud
    Serial.begin(9600);
}


void loop() {
}