byte arreglo[3] = {13, 12, 11};
/*
  Un arreglo es un conjunto de numeros que se su forma de escribir es
  TIPO NOMBRE[NUMERO DE ELEMENTOS]={ELEMENTOS};
  TYPE NAME [#]={val 1, val 2,..., val n};
*/
byte i = 0;//aqui definimos la variable que nos ayudará a decir cuantas veces queremos que parpaden los focos
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int a = 0; a < 3; a++) {//aqui hacemos un contador declarando la variable a
    pinMode (arreglo[a], OUTPUT);
  }
  while (i < 5) {
    digitalWrite (arreglo[0], 1);
    delay(500);
    digitalWrite (arreglo[0], 0);
    delay(500);
    digitalWrite (arreglo[1], 1);
    delay(500);
    digitalWrite (arreglo[1], 0);
    delay(500);
    digitalWrite (arreglo[2], 1);
    delay(500);
    digitalWrite (arreglo[2], 0);
    delay(500);
    i++;
  }
}
