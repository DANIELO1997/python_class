int led_rojo = 2;
int led_amarillo = 4;
int led_verde = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(led_rojo,OUTPUT);
pinMode(led_amarillo,OUTPUT);
pinMode(led_verde,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_rojo,HIGH);
delay(50);//tiempo de espera
digitalWrite(led_rojo,LOW);
delay(50);
digitalWrite(led_amarillo,HIGH);
delay(50);//tiempo de espera
digitalWrite(led_amarillo,LOW);
delay(50);
digitalWrite(led_verde,HIGH);
delay(50);//tiempo de espera
digitalWrite(led_verde,LOW);
delay(50);
}
