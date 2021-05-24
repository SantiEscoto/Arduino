float distancia = 0;
float tiempo = 0;


void setup() {
  Serial.begin(9600);
  pinMode (2, OUTPUT); //BUZZER
  pinMode (8, OUTPUT); //TRANSMISOR(BOCINA)
  pinMode (9, INPUT);  //RECEPTOR
}

void loop() {
  digitalWrite(8, LOW);
  delayMicroseconds(10);
  digitalWrite(8, HIGH); //Enviar ondas
  delayMicroseconds(10);
  tiempo = pulseIn(9, HIGH); //cronometro en microsegundos
  distancia = 0.017 * tiempo;
  //  Serial.println(distancia);
  //  delay(500);
  if (distancia <= 100) {
    digitalWrite(2, 1);
    delay(distancia * 10);
    digitalWrite(2, 0);
    delay(distancia * 10);
  }

}
