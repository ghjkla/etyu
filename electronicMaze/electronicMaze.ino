int red = 11;
int buzzer = 13;
int sensor = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(red, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
}

void loop() {
  int sensorVal = digitalRead(sensor);
  Serial.println(sensorVal);

  if (sensorVal == LOW) {
      digitalWrite(buzzer, HIGH);
    digitalWrite(red, HIGH); 
    delay(1000);
 

  } else {
        digitalWrite(buzzer, LOW);
    digitalWrite(red, LOW); 
 
  }
}
