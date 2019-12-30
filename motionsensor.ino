#define trigPin 13
#define echoPin 12
#define led 11
#define buz 10

void setup()
{ 
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buz, OUTPUT);
pinMode(led, OUTPUT);
}

void loop()
{ 
long duration, distance;

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

if (distance < 60)
{ 
  digitalWrite(led,HIGH);
  digitalWrite(buz,HIGH);
}

else 
{
digitalWrite(led,LOW);
}

Serial.print(distance);
Serial.println(" cm");
delay(100); 
}
