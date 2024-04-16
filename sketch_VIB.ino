int vib_pin = 5;
int buzzer_pin = 8; // Connect the passive buzzer module to pin 8

void setup() {
  pinMode(vib_pin, INPUT);
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {
  int val;
  val = digitalRead(vib_pin);
  
  if (val == HIGH) {
    // Generate sound on the buzzer
    tone(buzzer_pin, 1000); // Generate a tone of 1000 Hz
    delay(1000); // Keep the tone on for 1 second
    noTone(buzzer_pin); // Turn off the tone
    delay(1000); // Wait for 1 second
  } else {
    noTone(buzzer_pin); // Ensure the buzzer is off
  }
}

