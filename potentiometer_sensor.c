/*
    Project name : Potentiometer Variable Resistor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : 
*/

const int potentiometerPinhttps://projectslearner.com/learn/arduino-mega-potentiometer-variable-resistor = A0; // Analog pin connected to the potentiometer

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(potentiometerPin); // Read potentiometer value
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(sensorValue);
  
  delay(500); // Add a small delay before the next reading
}
