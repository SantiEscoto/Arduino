int valorSensor=0;
//declaramos la variable del sensor de tipo int(entero)
void setup() {
Serial.begin(9600);
//Serial.begin(bits por segundo); 9600 es el estandar

pinMode (A5,INPUT);  
//pinMode (Número de pin, Si va a enviar señal o recibir); Ponemos INPUT porque va a recibir voltaje
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (4,OUTPUT);
}


void loop(){
valorSensor=analogRead(A5);
//digitalRead=Leer el voltaje digital
//declaramos que el valor del sensor va a ser lo que lea el voltaje
if (valorSensor>75){ 
  Serial.println("SI ALCOHOL");
  delay(1000);
  digitalWrite (A1,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (4,HIGH);
  delay (300);
  digitalWrite (7,LOW);
  digitalWrite (4,LOW);
}
else{
  Serial.println("NO ALCOHOL");
  digitalWrite (4,LOW);
  digitalWrite (8,HIGH);
  delay(1000);
}
}
