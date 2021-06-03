
#include <Servo.h>
Servo myservo;
int a;
int strip = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);



}

void loop() {
  long duration, dist;


  if (digitalRead(6) == HIGH && digitalRead(4) == HIGH)
  {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    analogWrite(9, 70);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(10, 70);
  }

  if (digitalRead(6) == LOW ) //TO TURN LEFT
  {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    analogWrite(9, 120);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    analogWrite(10, 100);
  }

  if (digitalRead(4) == LOW)  // TO TURN RIGHT
  {

    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(10, 120);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(9, 100);
  }

  if (digitalRead(6) == LOW && digitalRead(4) == LOW)
  {
    for (int j = 1; j <= 1; j++) {
      strip = strip + 1;

    }
    Serial.println(strip);
    digitalWrite(7, LOW);

    digitalWrite(8, HIGH);
    analogWrite(9, 70);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(10, 70);
  }

jad:
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);
  duration = pulseIn(5, HIGH);
  dist = duration / 58.2;

  delay(30);
  {
    if (dist <= 8)
    {

      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      analogWrite(9, 0);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      analogWrite(10, 0);
      goto jad;
    }


  }




}
