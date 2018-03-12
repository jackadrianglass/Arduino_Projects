#define BUTTON 3
#define RED 5

int state = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == LOW && state == 1)
  {
    digitalWrite(RED, LOW);
    state = 0;
    delay(500);
  }

    if(digitalRead(BUTTON) == LOW && state == 0)
  {
    digitalWrite(RED, HIGH);
    state = 1;
    delay(500);
  }

  
}
