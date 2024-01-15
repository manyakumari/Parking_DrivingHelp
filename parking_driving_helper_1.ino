int trig = 4;
int echo =5;
int distance =0;
int duration = 0;
int red = 9;
int blue = 11;
int green = 10;
void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop()
{
 digitalWrite(trig,LOW);
 delay(2);
 digitalWrite(trig,HIGH);
  delay(10);
 digitalWrite(trig,LOW);
 duration = pulseIn(echo,HIGH);
 distance = (duration*0.034)/2;
  Serial.println(distance);

if (distance > 50)
{
digitalWrite(green, HIGH);
digitalWrite(red, LOW);
digitalWrite(blue,LOW);
}

else if (distance < 50 and distance > 20)
{
analogWrite(red,255);
analogWrite(blue,0);
analogWrite(green,255);
}

else if (distance <20)
{
digitalWrite(red,HIGH);
digitalWrite(blue, LOW);
digitalWrite(green, LOW);
}

else 
{
  digitalWrite(red,LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
}



}
