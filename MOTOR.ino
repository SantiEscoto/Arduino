
void setup() {
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  analogWrite(9, 255);//tienen un rango de 0 a 255 (0 V-5V) //voltaje minimo de encendido 109
  analogWrite(10, 0);
  delay(3000);
  analogWrite(9, 39);//tienen un rango de 0 a 255 (0 V-5V) //voltaje minimo de apagado 39
  analogWrite(10, 0);
  delay(3000);

}
