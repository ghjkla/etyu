int red = 11;
const int buttonPin = 3; 
int green = 9;
int buzzer = 13;
int sensor = 2;
int n = 0;
unsigned long previousMillis = 0;     
const long interval = 1000;        
int buttonState = 0;  
int t = 0;
int a = 60;
int r = A0;
int del = 55;
int timecheck = 60;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(red, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
  pinMode(buttonPin, INPUT_PULLUP);
  analogWrite(r,INPUT);
}
void loop() {
  int sensorVal = digitalRead(sensor);
  r = analogRead(A0);
    Serial.print(r);
    Serial.print(" ");
    Serial.print(t);
    Serial.print(" ");
    Serial.println(timecheck);
    unsigned long currentMillis = millis();
    if(r>4&&t == 0||r>4&&t == 1){
      t = 1;    
          if (sensorVal == LOW) {
      digitalWrite(buzzer, HIGH);
    digitalWrite(red, HIGH); 
    delay(1000);
  }
    else{
        digitalWrite(buzzer, LOW);
    digitalWrite(red, LOW); 
  } 
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
      digitalWrite(buzzer, HIGH);
      n = n + 1;
      timecheck = timecheck - 1;
      delay(100);
  if (n == a) {
      digitalWrite(buzzer, HIGH);
      digitalWrite(red, HIGH);
        delay(4000);
     digitalWrite(buzzer, LOW);
    digitalWrite(red, LOW); 
    }else{
        digitalWrite(buzzer, LOW);
    digitalWrite(red, LOW); 
  }
    }
    }
  else if(r<=4&&t == 1){
      digitalWrite(buzzer, HIGH);
      digitalWrite(red, HIGH);
        delay(4000);
  }
  else{
  n = n;
     }
    }
