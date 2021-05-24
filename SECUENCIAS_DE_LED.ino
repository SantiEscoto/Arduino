byte a[5] {13, 12, 11, 10, 9};
int y = 0;
int z = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (z < 4) {
    for (int i = 4; i > 1; i--) {
      pinMode (a[i], OUTPUT);
      digitalWrite(a[i], 1);
      digitalWrite(a[i - 2], 1);
      delay (500);
      digitalWrite(a[i], 0);
      digitalWrite(a[i - 2], 0);
      delay (500);
    }      digitalWrite(1, 1);
      digitalWrite(3, 1);
      delay(500);
      digitalWrite(1, 0);
      digitalWrite(3, 0);
      delay(500);
    /*  for (int i = 0; i <3; i++) {
        pinMode (a[i], OUTPUT);
        digitalWrite(a[i], 1);
        digitalWrite(a[i + 2], 1);
        delay (500);
        digitalWrite(a[i], 0);
        digitalWrite(a[i + 2], 0);

        delay (500);
      }*/

  
    z++;
  }  }
