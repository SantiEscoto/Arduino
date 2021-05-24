char MODO = NULL;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {//tomar datos desde el protocolo de comunicación serial
    MODO = Serial.read();
    if (MODO == '1') {
      digitalWrite(5, 1);
    }
    else if (MODO == '2') {
      digitalWrite(5, 0);
    }
  }


}
