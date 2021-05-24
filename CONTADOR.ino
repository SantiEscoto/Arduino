void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, 0);//buzzer
  digitalWrite(2, 0); //e
  digitalWrite(3, 0); //d
  digitalWrite(4, 0); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 0); //b
  digitalWrite(7, 0); //a
  digitalWrite(8, 0); //f
  digitalWrite(9, 0); //g
  delay(1000);
  //CERO
  digitalWrite(2, 1); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 0); //g
  delay(1000);
  //UNO
  digitalWrite(2, 0); //e
  digitalWrite(3, 0); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 0); //a
  digitalWrite(8, 0); //f
  digitalWrite(9, 0); //g
  delay(1000);
  //DOS
  digitalWrite(2, 1); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 0); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 0); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //TRES
  digitalWrite(2, 0); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 0); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //CUATRO
  digitalWrite(2, 0); //e
  digitalWrite(3, 0); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 0); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //CINCO
  digitalWrite(2, 0); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 0); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //SEIS
  digitalWrite(2, 1); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 0); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //SIETE
  digitalWrite(2, 0); //e
  digitalWrite(3, 0); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 0); //f
  digitalWrite(9, 0); //g
  delay(1000);
  //OCHO
  digitalWrite(2, 1); //e
  digitalWrite(3, 1); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 1); //g
  delay(1000);
  //NUEVE
  digitalWrite(2, 0); //e
  digitalWrite(3, 0); //d
  digitalWrite(4, 1); //c
  digitalWrite(5, 0); //pt
  digitalWrite(6, 1); //b
  digitalWrite(7, 1); //a
  digitalWrite(8, 1); //f
  digitalWrite(9, 1); //g
  delay(1000);
  digitalWrite(12, 1); //buzzer
  delay(2000);
}
