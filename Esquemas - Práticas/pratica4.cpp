
int led = 0;

int botao = 0;

int estado_botao = 0;

void setup()
{
  pinMode(11, INPUT);
  pinMode(7, OUTPUT);

  botao = 11;
  led = 7;
}

void loop()
{
  estado_botao = digitalRead(11);
  if (estado_botao == HIGH) {
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
  }
}
