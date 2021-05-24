int S = 0;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT); //Rojo
  pinMode(8, OUTPUT); //Verde
  pinMode(7, OUTPUT); //Alarma
  pinMode(A5, INPUT); //Sensor
}
void loop() {
  S = analogRead(A5);
  Serial.println (S);
  delay(500);

  if (S>70){
    digitalWrite(8,LOW);//apaga verde
    digitalWrite(4,HIGH);//enciende rojo
    digitalWrite(7,HIGH);//enciende alarma
    delay(500);
    digitalWrite(4,LOW);//apaga rojo
    digitalWrite(7,LOW);//apaga alarma
    delay(500);
  }
  else
  {
    digitalWrite(8,HIGH);//prende verde
  }
  
}
