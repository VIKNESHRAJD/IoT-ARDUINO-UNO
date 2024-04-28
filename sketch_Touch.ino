const int touchPin = 7; // Define the pin connected to the touch sensor
const int ledPin = 3;  // Define the pin connected to the LED

void setup() {
  pinMode(touchPin, INPUT); // Set the touch pin as input
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
  Serial.begin(9600);       // Initialize serial communication
}

void loop() {
  int touchState = digitalRead(touchPin); // Read the state of the touch sensor
  
  if (touchState == HIGH) { // If touch sensor is touched
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Touched"); // Print "Touched" to serial monitor
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
    Serial.println("Not Touched"); // Print "Not Touched" to serial monitor
  }
  
  delay(100); // Delay to debounce and avoid false readings
}

