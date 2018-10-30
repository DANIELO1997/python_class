//Control ON/OFF de un motor

int pulsador =7; //Declara Pin del pusaldor
int motor=3;     //Declara Pin del motor
 
void setup() // Se ejecuta cada vez que el Arduino se inicia
{  
  pinMode(pulsador,INPUT); 
  pinMode(motor,OUTPUT);   
}
void loop() 
{           
  if(digitalRead(pulsador) == HIGH){
 
    digitalWrite(motor,HIGH); //Enciende el motor
 
  }else{ //si el pulsador no esta oprimido
 
    digitalWrite(motor,LOW); //Apaga el motor
 
  }
 
}
 
// Fin programa
