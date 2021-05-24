int flama = 0;
int gas = 0;
void setup() {
  Serial.begin(9600);
  pinMode(A2, INPUT);//flama
  pinMode(A1, INPUT);//gas
  pinMode(7, OUTPUT);//alarma
}

void loop() {
  flama = analogRead(A2);
  /*
     No quiero usar la computadora
    Serial.println("intensidad de la flama:");
    Serial.println(flama);
    delay(1000);


    Serial.println("intensidad del gas:");
    Serial.println(gas);
    delay(1000);
  */
  gas = analogRead(A1);
  //con fuego muy cerca baja a 40, estable esta en 750 o más
  //con gas 200 sin gas

  if (flama < 400 && gas > 200) {

    digitalWrite(7, 1); //prender alarma
    delay(250);
    digitalWrite(7, 0); //apagar alarma
    delay(250);
  }
  else {

    delay(500);
  }
}
