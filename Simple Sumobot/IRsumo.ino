//Simple SUMOBOT with IR sensor using C++
// 4 wheels

// using L298N driver board module
#define enA 7
#define enB 8

// Front motors
#define motorA 6
#define motorB 5

// Rear motors
#define motorC 3
#define motorD 4

// Infrared Proximity Sensor
#define IrSensor 12

// SET-UP
void setup() 
{
  pinMode (enA, OUTPUT);
  pinMode (enB, OUTPUT);
  
  pinMode (motorA, OUTPUT);
  pinMode (motorB, OUTPUT);
  
  pinMode (motorC, OUTPUT);
  pinMode (motorD, OUTPUT);
  
  pinMode (irSensor, INPUT);
}

void loop()
{
  if (digitalRead(irSensor) == 0)
  {
    Reverse();
    delay(500);
    
    TurnLeft();
    delay(500);
    
    Reverse();
    delay(2500);
    
    TurnRight();
    delay(500);
  }
  else 
  { 
    Forward();
  }
  
void Forward()
{
  analogWrite (enA, 1500);
  digitalWrite (motorA, HIGH);
  digitalWrite (motorB, LOW);
  
  analogWrite (enB, 1500);
  digitalWrite (motorC, HIGH);
  digitalWrite (motorD, LOW);
}
  
void Stop() 
{
  analogWrite (enA, 200);
  digitalWrite (motorA, LOW);
  digitalWrite (motorB, LOW);
  
  analogWrite (enB, 200);
  digitalWrite (motorC, LOW);
  digitalWrite (motorD, LOW);
}
  
void TurnRight() 
{
  analogWrite (enA, 1500);
  digitalWrite (motorA,HIGH);
  digitalWrite (motorB,LOW);
  
  analogWrite (enB, 1500);
  digitalWrite (motorC, LOW);
  digitalWrite (motorD, HIGH);
}
  
void TurnLeft() 
{
  analogWrite (enA, 1500);
  digitalWrite (motorA,LOW);
  digitalWrite (motorB,HIGH);
  
  analogWrite (enB, 1500);
  digitalWrite (motorC, HIGH);
  digitalWrite (motorD, LOW);
}
  
void Reverse()
{
  analogWrite (enA, 1500);
  digitalWrite (motorA,LOW);
  digitalWrite (motorB,HIGH);
  
  analogWrite (enB, 1500);
  digitalWrite (motorC, LOW);
  digitalWrite (motorD, HIGH);
}


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
