int LED = 13;
int timer = 100;
int dir = 1;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(timer);
  digitalWrite(LED,LOW);
  delay(timer);

  if(dir == 1)
  {
    timer += 10;
  }
  if(dir == 0)
  {
    timer -= 10;
  }
  if(timer <= 10)
  {
    dir = 1;
  }
  if(timer >= 500)
  {
    dir = 0;
  }
}
