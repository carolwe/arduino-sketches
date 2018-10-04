//Projeto 2 - S.O.S. em código Morse

int ledPin = 10;

void setup() {
 
pinMode(ledPin, OUTPUT); //define ledPin (no pino digital 10) como saída.
}

void loop() {

//3 pontos (letra S)
for (int i = 0; i < 3; i++){
  digitalWrite(ledPin, HIGH);
  delay(150);
  digitalWrite(ledPin, LOW);
  delay(100);
}
delay(150); //espera entre as letras

//3 traços (letra O)
for (int j = 0; j < 3; j++){
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(250);
}
delay(150); //espera entre as letras

//3 pontos (letra S)
for (int k = 0; k < 3; k++){
  digitalWrite(ledPin, HIGH);
  delay(150);
  digitalWrite(ledPin, LOW);
  delay(100);
}
delay(1000); //espera entre as letras
}
