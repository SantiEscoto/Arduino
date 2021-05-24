int valorSensor=0;
//declaramos la variable del sensor de tipo int(entero)

void setup() {
Serial.begin(9600);
//Serial.begin(bits por segundo); 9600 es el estandar

pinMode (A0,INPUT);  
//pinMode (Número de pin, Si va a enviar señal o recibir); Ponemos INPUT porque va a recibir voltaje
}

void loop(){
valorSensor=analogRead(A0);
//digitalRead=Leer el voltaje digital
//declaramos que el valor del sensor va a ser lo que lea el voltaje
Serial.println(valorSensor);
delay(1000);
//de 0 a 1,023 bits es decir 0 bits=0V y 1023 bits=5V

  

}
