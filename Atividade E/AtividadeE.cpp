// C++ code
//
int led = 10;       // Trata-se de uma variável do tipo inteiro "led" e nela foi atribuída
                    // o valor de 10, que está sendo usado para representar o número do pino onde o LED está conectado.
int botao = 2;      // Trata-se de uma variável do tipo inteiro "botão" e nela foi atribuída
                    // o valor de 2, que está sendo usado para armazenar o número do pino digital conectado ao botão.
int buzzer = 7;     // Trata-se de uma variável do tipo inteiro "buzzer" e nela foi atribuída
                    // o valor de 7, que está sendo usado para armazenar o número do pino digital conectado ao buzzer.

void interrupcao()  // Trata-se de uma função cujo objetivo é definir o comportamento que ocorre quando uma interrupção é acionada
{
  digitalWrite(buzzer, HIGH);   // Quando a interrupção ocorre, o código dentro da função interrupcao() é executado. Esta linha liga o buzzer (define o pino buzzer como HIGH).
  delay(10000);                 // Consiste no tempo de espera, que neste caso é de 10000 milisegundos (10s) com o buzzer ligado.
  digitalWrite(buzzer, LOW);    // Consiste em desligar o buzzer (define o pino buzzer como LOW)
}
void setup()        // Executada uma vez para iniciar o programa
                    // e fazer uso dos pinos, sensores ou quaisquer outros componentes vinculados ao arduino.
{
  pinMode(led, OUTPUT);     // Trata de configurar o pino led (valor armazenado na variável led) como saída, permitindo que o programa controle o LED conectado a ele.
  pinMode(botao, INPUT);    // Trata de configurar o pino botao (valor armazenado na variável botao) como entrada, permitindo que o programa leia o estado do botão pressionado.
  pinMode(buzzer, OUTPUT);  // Trata de configurar o pino buzzer (valor armazenado na variável buzzer) como saída, permitindo que o programa controle o buzzer.
  attachInterrupt(0, interrupcao, RISING);     // Trata de configurar uma interrupção externa no pino 0 (pode variar de acordo com a placa Arduino)
                                             //para acionar a função interrupcao() sempre que a tensão no pino mudar de 0 para 5V (condição RISING).
}

void loop()  // Trata-se de uma função que tem o propósito de repetir
{
  digitalWrite(led, HIGH); // Significa que a cada ciclo do loop, o LED é aceso (define o pino led como HIGH).
  delay(1000); // Consiste no tempo de espera, que é 1000 milisegundos (1s) e o LED fica ligado por
  digitalWrite(led, LOW); // Significa que a cada ciclo do loop, o LED é desligado (define o pino led como LOW).
  delay(1000); // Consiste no tempo de espera, que é 1000 milisegundos (1s) e o LED fica ligado por
}