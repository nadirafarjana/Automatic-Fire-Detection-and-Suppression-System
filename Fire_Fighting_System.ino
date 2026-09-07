// FireGuard: Arduino-Based Automatic Fire Fighting System

#define FLAME_SENSOR 2
#define BUZZER 8
#define RELAY 7

void setup() {
  Serial.begin(9600);

  pinMode(FLAME_SENSOR, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);

  digitalWrite(BUZZER, LOW);
  digitalWrite(RELAY, LOW);

  Serial.println("Fire Fighting System Started...");
}

void loop() {

  int flameState = digitalRead(FLAME_SENSOR);
  // Most flame sensors give LOW when fire is detected
  if (flameState == LOW) {

    Serial.println("FIRE DETECTED!");

    // Turn ON buzzer
    digitalWrite(BUZZER, HIGH);

    // Turn ON water pump through relay
    digitalWrite(RELAY, HIGH);

  }
  else {

    Serial.println("No Fire Detected");

    // Turn OFF buzzer
    digitalWrite(BUZZER, LOW);

    // Turn OFF water pump
    digitalWrite(RELAY, LOW);
  }

  delay(200);
}
