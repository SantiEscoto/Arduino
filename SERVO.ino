#include <Servo.h>

Servo pulgar;//declaramos el objeto



void setup() {
Serial.begin(9600);
pulgar.attach(9);//declarar el pin del servo
}

void loop() {
pulgar.write(0);//posición donde lo quieres colocar
delay(175);
pulgar.write(90);
delay(350);
pulgar.write(180);
delay(350);
}
