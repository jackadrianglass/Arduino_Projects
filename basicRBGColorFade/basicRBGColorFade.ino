//Define Pins
#define RED 6
#define GREEN 5
#define BLUE 3
#define DelayTime 10

int redValue = 0;
int redDir = 1;
int greenValue = 0;
int greenDir = 1;
int blueValue = 0;
int blueDir = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(RED, 255 - redValue);
  analogWrite(BLUE, 255 - blueValue);
  analogWrite(GREEN, 255 - greenValue);

  incrementColor(greenValue, greenDir,1);
  incrementColor(blueValue, blueDir, 2);
  incrementColor(redValue, redDir, 3);

  delay(DelayTime);
}

void incrementColor(int& value, int& dir, int inc)
{
  if(dir == 1)
  {
     value += inc;
     if(value >= 255)
     {
      value = 255;
      dir = 0;
     }
  }

    if(dir == 0)
  {
     value -= inc;
     if(value <= 0)
     {
      value = 0;
      dir = 1;
     }
  }
}

