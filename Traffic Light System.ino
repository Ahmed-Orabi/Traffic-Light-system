int red = 10;
int yellow = 9;
int green = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(1500);
digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
delay(500);
digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
delay(500);
digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
delay(1000);
digitalWrite(green,LOW);
delay(1000);
}