// C++ code
//
const int buzzerPin = 8;    // Trata-se da declaração de uma variável (tipo inteiro) cujo valor do atributo constante é 8 (pino do buzzer - pino digital)
int frequencia = 1000;      // Trata-se de declaração de uma variável tipo inteiro onde o valor do atributo da frequência inicial do som é 1000Hz

void setup()        // Executada uma vez para iniciar o programa
                    // e fazer uso dos pinos, sensores ou quaisquer outros componentes vinculados ao arduino.
{
  pinMode(buzzerPin, OUTPUT); // Trata-se de uma função a qual tem a serventia de configurar o "buzzerPin" como uma saida output
}

void loop() // Trata-se de uma função que tem o propósito de repetir
{
  tone(buzzerPin, frequencia);      // Consiste na funcionalidade de tocar um som com a frequência definida na variável "frequencia" no pino "buzzerPin"
  delay(500);                       // Consiste no tempo de espera, que neste caso é de 500 milisegundos (0,5 segundos)
  noTone(buzzerPin);                // Consiste na funcionalidade de parar de emitir som no pino "buzzerPin"
  delay(500);                       // Consiste no tempo de espera, que neste caso é mais 500 milisegundos (0,5 segundos)
}