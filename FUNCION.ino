int suma(int a, int b) {
  int resultado = (a * b);
  return resultado;
}
void setup() {
  Serial.begin(9600);
  int Var1 = 7, Var2 = 2, resultado;
  resultado = suma(Var1, Var2);
  Serial.print(resultado);

}

void loop() {


}
