
#include<Servo.h>

Servo servoVer; 
Servo servoHor; 
Servo myservo;
Servo Armservo;



const int TrigPin =  3;
const int EchoPin =  2;

int angle1 = 60;  
int angle2 = 0; 

int LedPin = 13;
int SouPin = 12;
float cm;

int x;
int y;

int prevX;
int prevY;

void setup()
{
  Serial.begin(9600);
  servoVer.attach(5); 
  servoHor.attach(6);
   myservo.attach(9);
  Armservo.attach(8); 
  servoVer.write(90);
  servoHor.write(90);
  pinMode(EchoPin, INPUT);
pinMode(TrigPin, OUTPUT);

pinMode(SouPin,OUTPUT);
pinMode(LedPin, OUTPUT);
}

void Pos()
{
  if(prevX != x || prevY != y)
  {
    int servoX = map(x, 600, 0, 70, 179);
    int servoY = map(y, 450, 0, 179, 95);

    servoX = min(servoX, 179);
    servoX = max(servoX, 70);
    servoY = min(servoY, 179);
    servoY = max(servoY, 95);
    
    servoHor.write(servoX);
    servoVer.write(servoY);
  }
}

void loop()
{
  digitalWrite(LedPin, LOW);
digitalWrite(SouPin, LOW);
 
digitalWrite(TrigPin, LOW); 
delayMicroseconds(2);
digitalWrite(TrigPin, HIGH);
delayMicroseconds(10);
digitalWrite(TrigPin, LOW);
 
cm = pulseIn(EchoPin, HIGH) / 58.0; 
cm = (int(cm * 100.0)) / 100.0; 
  if (cm>=2 && cm<=10)
{digitalWrite(SouPin, HIGH);
digitalWrite(LedPin,HIGH);
myservo.write(angle2);  
Armservo.write(angle2);}  
  else{
  digitalWrite(LedPin,LOW);
  digitalWrite(SouPin, LOW);
  myservo.write(angle1); 
  Armservo.write(angle1);  
}

  if(Serial.available() > 0)
  {
    if(Serial.read() == 'X')
    {
      x = Serial.parseInt();
      if(Serial.read() == 'Y')
      {
        y = Serial.parseInt();
       Pos();
      }
    }
    while(Serial.available() > 0)
    {
      Serial.read();
    }
  }
}
