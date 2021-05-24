void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
  //"\g" se supone que es para dejar un espacio pero no funciona
  Serial.print("Hola Mundo\g");
  //"\t" es para dejar un espacio del Tab
  Serial.print("Hola Mundo\t");
  
  //"\n" es para dejar un espacio de una línea
  Serial.print("Hola Mundo\n");
  // Pero es mejor solo poner ln
  Serial.println("holamundo");
  digitalWrite(7,HIGH);
//digitalWrite=enviar voltaje digital
//digitalWrite(Número de pin,HIGH/LOW)
  
  delay(500);
  digitalWrite(7,LOW);
  delay(500);
}
