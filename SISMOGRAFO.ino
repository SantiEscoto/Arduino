int movimiento = 0;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); //led
  pinMode(9, OUTPUT); //buzzer
  pinMode(A0, INPUT); //sensor

}

void loop() {
  movimiento = analogRead(A0);
  Serial.println(movimiento);
  delay(30);

  while (movimiento >= 200) {
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    delay(150);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    delay(150);
  }


}
