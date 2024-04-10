// C++ code
//
int buttonPin = 2;      // Trata-se de uma variável do tipo inteiro que declara o atributo button, onde o valor deste atributo é é 2 (Valor Inicial)
                        // Isto significa dizer que esta variável irá armazenar o número do pino digital conectado ao botão
int ledPin = 13;        // Esta variável do tipo inteiro serve para declarar o atributo ledPin, onde o valor deste atributo é 13 (Valor Inicial). 
                        // Isto signfica dizer que esta variável irá armazenar o número da pino digital conectada ao LED.
int botaoStatus = 1;    // Trata-se de uma variável do tipo inteiro que declara o atributo botaoStatus, onde o valor inicial deste atributo é 1 (HIGH)
                        // Isto significa dizer que esta variável irá armazenar o estado lido do botão (pressionado ou não pressionado).

void setup()            // Executada uma vez para iniciar o programa
                        // e fazer uso dos pinos, sensores ou quaisquer outros componentes vinculados ao arduino.
{
  pinMode(ledPin, OUTPUT);       // Trata-se de uma função a qual tem a serventia de configurar o pino "ledPin" como uma saida output
                                //, ou seja, isto será usado para enviar um sinal para controlar o led.
  pinMode(buttonPin, INPUT);    // Trata-se de uma função a qual tem a serventia de configurao o pino "buttonPIn" como entrada (para ler o estado do botão)
  digitalWrite(buttonPin, HIGH); // Define o estado inicial da pino buttonPin como HIGH (puxador interno de resistor)
}

void loop() // Trata-se de uma função que tem o propósito de repetir
{
  botaoStatus = digitalRead(buttonPin); // Serve para poder fazer a leitura do estado atual do botão e armazena em botaoStatus
  if(LOW  == botaoStatus)               // Isso serve para poder verifica se o estado do botão é LOW (pressionado) através de uma estrutura condicional
  {
  	digitalWrite(ledPin, HIGH);          // Isso siginifica que "Se" estiver pressionado, o LED estará aceso (define a pino ledPin como HIGH)
  }
  else{
    digitalWrite(ledPin, LOW);          // Isso significa que quando a condição "Se" acima não for atingida, então o LED está desligado (define a pino ledPin como LOW)
  }
	delay(20);                          // Consiste no tempo de espera antes de ler o botão novamente. Neste caso, o tempo de espera é de 20 milisegundos
  
}