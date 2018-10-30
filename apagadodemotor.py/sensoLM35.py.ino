//declaro variable para guardav temperatura en celcius
float tempC;
//declaro variable entera para el pin A0
int pinSensorT = 0;
int ledrojo = 11;
int ledAmarillo = 9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledrojo,OUTPUT);
pinMode(ledAmarillo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tempC = analogRead(pinSensorT); 
tempC = (5.0*tempC*100)/1024.0;
Serial.println(tempC);
delay(1000);
if (tempC >= 30) {
  digitalWrite(ledAmarillo,LOW);
  digitalWrite(ledrojo,HIGH);
  delay (100);
  digitalWrite(ledrojo,LOW);
  delay(100);
}else
digitalWrite(ledAmarillo,HIGH);
digitalWrite(ledrojo,LOW);
}
