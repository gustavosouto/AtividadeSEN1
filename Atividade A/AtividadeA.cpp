// C++ code
//
int ledPin = 10;    // Trata-se de uma variável do tipo inteiro e nela foi atribuída
                    // o valor de 10, que está sendo usado para representar o número do pino onde o LED está conectado.
void setup()        // Executada uma vez para iniciar o programa
                    // e fazer uso dos pinos, sensores ou quaisquer outros componentes vinculados ao arduino.
{
  pinMode(ledPin, OUTPUT);  // Trata-se de uma função a qual tem a serventia de configurar o pino "ledPin" como uma saida output
                            //, ou seja, isto será usado para enviar um sinal para controlar o led.
}

void loop() // Trata-se de uma função que tem o propósito de repetir
{
  digitalWrite(ledPin, HIGH); // Serve para definir o pino ledPin como HIGH, ou seja, isto importa no LED estar ligado.
  delay(3000);                // Consiste no tempo de espera antes de dar seguimento para próxima linha. Neste caso, o tempo de espera é de 3000 milisegundos (3s)
  digitalWrite(ledPin, LOW);  // Serve para definir o pino ledPin como LOW, ou seja, isto importa no LED estar desligado.
  delay(5000);                // Consiste no tempo de espera antes de dar seguimento para próxima linha. Neste caso, o tempo de espera é de 5000 milisegundos (5s)
}