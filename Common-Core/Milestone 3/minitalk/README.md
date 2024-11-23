<h1 align="left">minitalk</h1>

###

<p align="left">Este projeto é sobre criar um sistema de comunicação entre um cliente e um servidor usando somente sinais do sistema operacional (SIGUSR1 e SIGUSR2), sem usar redes ou outros métodos de comunicação. <br>E é uma forma de aprender a trabalhar com comunicação de baixo nível, usando sinais do sistema operacional e gerenciando corretamente a memória e os erros.</p>

###

<h2 align="left">Descrição do projeto:</h2>

###

<h4 align="left">Servidor:</h4>

###

<p align="left">O servidor é iniciado primeiro. Ao ser iniciado, ele exibe o PID (Process ID), que é um número único que identifica o processo no sistema. <br>O servidor precisa ser capaz de receber mensagens de vários clientes de forma contínua, sem precisar ser reiniciado. <br>Ao receber uma mensagem, ele precisa exibi-la rapidamente, ou seja, o tempo para exibir a mensagem não pode ser muito longo.</p>

###

<h4 align="left">Cliente:</h4>

###

<p align="left">* O cliente é iniciado com dois parâmetros:<br>   1. PID do servidor: Identificador único do servidor.<br>   2. Mensagem a ser enviada: A string que será enviada para o servidor.<br>* O cliente então envia a mensagem para o servidor utilizando os sinais SIGUSR1 e SIGUSR2.</p>

###

<h4 align="left">Como funciona a comunicação:</h4>

###

<p align="left">* Sinais SIGUSR1 e SIGUSR2 são usados para representar bits de dados.<br>   - O cliente envia sinais para o servidor para indicar o valor de cada bit da mensagem (1 ou 0).<br>   - Por exemplo, o cliente pode enviar SIGUSR1 para indicar que o bit é "1" e SIGUSR2 para indicar que o bit é "0".<br>   - O servidor, ao receber esses sinais, decodifica a sequência de bits e reconstruí a mensagem.</p>

###

<h4 align="left">Requisitos importantes:</h4>

###

<p align="left">* Sem erros de memória: O programa não pode causar problemas como vazamentos de memória (quando a memória não é liberada corretamente) ou segfaults (erros que causam o programa a travar).<br>* Uso de apenas um global variable: Apenas uma variável global é permitida, e seu uso deve ser justificado.<br>* Desempenho: O servidor deve ser capaz de exibir a mensagem de forma eficiente, sem demorar muito tempo.</p>

###
