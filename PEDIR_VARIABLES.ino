int z = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Dame el valor de x");
  if (Serial.available() > 0) {
    delay(1500);
    int x = Serial.parseInt();
    Serial.println(x);
    delay(1500);
    Serial.println("Dame el valor de y");
    delay(1500);
    int y = Serial.parseInt();
    Serial.println(y);
    z = x + y;
    Serial.println(z);
  }}

  void loop() {



  }
