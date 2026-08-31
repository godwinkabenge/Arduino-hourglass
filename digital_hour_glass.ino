const int switchPin = 8;

unsigned long previousTime = 0;

int switchState = 0;
int prevSwitchState = 0;

int led = 2;

long interval = 3000;

void setup(){
  for (int x = 2; x<8; x++){
    pinMode(x,OUTPUT);
  }
    pinMode(switchPin, INPUT);
}

void loop(){
  unsigned long currentTime = millis();



if (currentTime - previousTime > interval) {
  previousTime = currentTime;

  digitalWrite(led,HIGH);
  led++;

if (led > 7) {
  

  for (int i = 0; i < 7; i++) { 

    // Forward
    for (int x = 2; x < 8; x++) {
      digitalWrite(x, HIGH);
      delay(150);
      digitalWrite(x, LOW);
    }

    // Backward
    for (int x = 6; x >= 2; x--) {
      digitalWrite(x, HIGH);
      delay(150);
      digitalWrite(x, LOW);
    }
  }

  led = 2;

}
}
switchState = digitalRead(switchPin);

if (switchState != prevSwitchState) {
  for (int x =2; x<8; x++){
    digitalWrite(x,LOW);
  }
  led =2;
  previousTime = currentTime;
}

prevSwitchState = switchState;

}
