//Projeto 1 - LED Piscante

int ledPin = 10; //declaração da variável ledPin, indicando a conexão de um LED ao pino digital 10 do arduíno.

void setup() {

  pinMode(ledPin, OUTPUT); //define o modo da variável (conectada ao pino 10) como saída de dados.
}

void loop() {
  
digitalWrite(ledPin, HIGH); //acende o LED.
delay(1000); //tempo do LED aceso (em ms).
digitalWrite(ledPin, LOW); //apaga o LED.
delay(1000); //tempo do LED apagado.
}
