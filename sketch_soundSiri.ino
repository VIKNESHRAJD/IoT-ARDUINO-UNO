#define SOUND_SENSOR_DO_PIN 2 // Digital pin connected to the DO pin of the sound sensor module
#define SOUND_SENSOR_AO_PIN A0 // Analog pin connected to the AO pin of the sound sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(SOUND_SENSOR_DO_PIN, INPUT); // Set the sound sensor DO pin as input
}

void loop() {
  int digitalValue = digitalRead(SOUND_SENSOR_DO_PIN); // Read the digital value from the sound sensor
  int analogValue = analogRead(SOUND_SENSOR_AO_PIN); // Read the analog value from the sound sensor
  
  // Print both digital and analog values to the serial monitor
  Serial.print("Digital Value: ");
  Serial.print(digitalValue);
  Serial.print(", Analog Value: ");
  Serial.println(analogValue);
  
  delay(500); // Delay between readings
}
