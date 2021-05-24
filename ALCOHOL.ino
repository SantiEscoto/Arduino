int valorSensor = 0;
//declaramos la variable del sensor de tipo int(entero)
void setup() {
  Serial.begin(9600);
  //Serial.begin(bits por segundo); 9600 es el estandar

  void loop()
  {
    valorSensor = analogRead(A5);
    //digitalRead=Leer el voltaje digital
    //declaramos que el valor del sensor va a ser lo que lea el voltaje
    Serial.println(valorSensor);

  }
