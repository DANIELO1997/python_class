// Práctica encender y apagar tres LED
const int LED1=13;
const int LED2=12;
const int LED3=7;
void setup()
{
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
}
void loop()
{
digitalWrite(LED1,HIGH);
delay(1000);
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
delay(1000);
digitalWrite(LED3,LOW);
}
