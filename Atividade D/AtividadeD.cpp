// C++ code
//

int ledPin = 10;    // Trata-se de uma variável do tipo inteiro "ledPin" e nela foi atribuída
                    // o valor de 10, que está sendo usado para representar o número do pino onde o LED está conectado.
int ldrPin = 0;     // Trata-se de uma variável do tipo inteiro  "ldrPin" e nela foi atribuída valor 0 
                    // Isso significa que esta variável armazena o número do pino digital conectado ao sensor LDR
int ldrValor = 0;   // Trata-se de uma variável do tipo inteiro "ldrValor" e nela foi atribuída valor 0
                    // Isto significa que esta variável armazenará o valor lido do sensor LDR (valor analógico).

void setup()        // Executada uma vez para iniciar o programa
                    // e fazer uso dos pinos, sensores ou quaisquer outros componentes vinculados ao arduino.

{
  pinMode(ledPin, OUTPUT);      // Trata-se de uma função a qual tem a serventia de configurar o pino "ledPin" como uma saida output
                                //, ou seja, isto será usado para enviar um sinal para controlar o led.
  Serial.begin(9600);           // Tem o propósito de iniciar a comunicalção do arduino com uma taxa de transmissão de 9600 bauds
                                // Isso permite que os dados do sensor sejam enviados para um computador para analise ou visualização
}
void loop()             // Trata-se de uma função que tem o propósito de repetir
{
  ldrValor = analogRead(ldrPin);  // Tem a funcionalidade de ler o valor analógico do sensor LDR conectado ao pino ldrPin e armazena o valor na variável ldrValor
  if (ldrValor >= 800) 
  {
  	digitalWrite(ledPin, HIGH);	    // Consiste na funcionalidade de acender o LED quando dizer que se for maior ou igual a 800 (define ledPin como HIGH)
  } else {
    digitalWrite(ledPin, LOW);      // Consiste na funcionalidade de parar de emitir a luz do Led quando for menor que 800
  }
  Serial.println(ldrValor);         // Consiste na funcionalidade de imprimir o valor lido do LDR na comunicação serial
  delay(10);
}