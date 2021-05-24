#include <DHT.h> // incluir libreria
const int ventilador = 3;
const int sensorDHT = A2;
int temperatura, humedad;

DHT dht (sensorDHT, DHT11);

void setup() {
  Serial.begin(9600);
  pinMode(ventilador, OUTPUT);
  dht.begin();
}
void loop() {
  humedad = dht.readHumidity();
  temperatura = dht.readTemperature();
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print("%");
  Serial.println(" ");
  Serial.println(" ");
  delay(1000);
  while (temperatura >= 25) {//condición para mantener el ambiente fresco
    Serial.println("Ventilador Encendido");
    digitalWrite(ventilador, 1);
    temperatura = dht.readTemperature();//Volvemos a leer la temperatura
    delay(2000);
  }
  digitalWrite(ventilador, 0);

}
