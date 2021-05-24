int Radiacion=0;

void setup() {
Serial.begin(9600);
pinMode (A3,INPUT);

}

void loop() {
Radiacion=digitalRead(A3);
Serial.println(Radiacion);
delay(30);


}
