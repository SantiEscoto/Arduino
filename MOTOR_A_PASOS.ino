#include <Stepper.h>
Stepper Cerradura(2500,8,9,10,11);
void setup() {
Serial.begin(9600);
Cerradura.setSpeed(4);// 1-10del 2 al 6 recomendado 4 ideal
}

void loop() {
Cerradura.step(1250);//Numero de pasos que debe de dar MEDIA VUELTA
delay(2000);
Cerradura.step(5000);//Numero de pasos que debe de dar DOS VUELTAS
delay(2000);
Cerradura.step(2500);//Numero de pasos que debe de dar UNA VUELTA
delay(2000);
}
