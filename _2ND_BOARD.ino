int FrontSensor = 2;
int LeftSensor1 = 3;
int LeftSensor2 = 4;
int RightSensor1 = 5;
int RightSensor2 = 6;
int CenterSensor = 7;
int LeftMotor1 = 8;
int LeftMotor2 = 9;
int RightMotor1 = 10;
int RightMotor2 = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(LeftSensor1, INPUT);
  pinMode(LeftSensor2, INPUT);
  pinMode(RightSensor1, INPUT);
  pinMode(RightSensor2, INPUT);
  pinMode(CenterSensor, INPUT);
  pinMode(FrontSensor, INPUT);
  pinMode(LeftMotor1, OUTPUT);
  pinMode(LeftMotor2, OUTPUT);
  pinMode(RightMotor1, OUTPUT);
  pinMode(RightMotor2, OUTPUT);
  Serial.begin(9600);


}

void loop() 
{
  if (digitalRead(FrontSensor) == HIGH)
  {
    Stop();
  }
  else if ((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == LOW))
  {
    forward();
  }
  //else if ((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == LOW))
  //{
    //Stop();
  else if((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
 {
  Curve_Right();
 }
 else if((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
 {
  Curve_Left ();
 }
  else if((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == LOW))
 {
  Curve_Left();
 }
 else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Left();
  }
  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Left();
  }
   else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Left();
  }
  
  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
  {
    forward();
  }
  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == LOW))
  {
    Sharp_Right();
  }
   else if ((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
  {
    Sharp_Left();
  }
  else if ((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH))
  {
    Sharp_Left();
  }
    else if ((digitalRead(LeftSensor1) == LOW) && (digitalRead(LeftSensor2) == LOW) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Left();
  }
      else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Right();
    
  }
  
  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == LOW))
  {
    Sharp_Right();
  }
 
  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == LOW) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Right();
  }

  else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == LOW) && (digitalRead(RightSensor2) == HIGH))
  {
    Curve_Right();
  }
    else if ((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == LOW ))
  {
    Curve_Right();
  }
  

 //else if((digitalRead(LeftSensor1) == HIGH) && (digitalRead(LeftSensor2) == HIGH) && (digitalRead(CenterSensor) == HIGH) && (digitalRead(RightSensor1) == HIGH) && (digitalRead(RightSensor2) == HIGH) )
 //{
  //Curve_Left();
 

}
void forward()
{
  digitalWrite(LeftMotor1, HIGH);
  digitalWrite(LeftMotor2, LOW);
  digitalWrite(RightMotor1, HIGH);
  digitalWrite(RightMotor2, LOW);
}
void Curve_Left()
{
  digitalWrite(LeftMotor1, HIGH);
  digitalWrite(LeftMotor2, LOW);
  digitalWrite(RightMotor1, LOW);
  digitalWrite(RightMotor2, LOW);
}
void Curve_Right()
{
  digitalWrite(LeftMotor1, LOW);
  digitalWrite(LeftMotor2, LOW);
  digitalWrite(RightMotor1, HIGH);
  digitalWrite(RightMotor2, LOW);
}
void Sharp_Left()
{
  digitalWrite(LeftMotor1, HIGH);
  digitalWrite(LeftMotor2, LOW);
  digitalWrite(RightMotor1, LOW);
  digitalWrite(RightMotor2, HIGH);
}
void Sharp_Right()
{
  digitalWrite(LeftMotor1, LOW);
  digitalWrite(LeftMotor2, HIGH);
  digitalWrite(RightMotor1, HIGH);
  digitalWrite(RightMotor2, LOW);
}
void Stop()
{
  digitalWrite(LeftMotor1, HIGH);
  digitalWrite(LeftMotor2, HIGH);
  digitalWrite(RightMotor1, HIGH);
  digitalWrite(RightMotor2, HIGH);
}


