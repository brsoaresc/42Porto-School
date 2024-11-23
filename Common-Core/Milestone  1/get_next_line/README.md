<h1 align="left">get_next_line</h1>

###

<p align="left">O projeto Get Next Line é uma tarefa que envolve criar uma função para ler uma linha de um arquivo ou da entrada padrão, uma linha por vez. Esse tipo de funcionalidade é bastante útil em sistemas que precisam processar grandes volumes de dados sem carregar o arquivo inteiro na memória de uma vez.</p>

###

<h2 align="left">Descrição do projeto:</h2>

###

<p align="left">O objetivo é implementar uma função chamada get_next_line() que lê uma linha de um arquivo ou da entrada padrão (stdin) e a retorna. A cada chamada para essa função, ela deve retornar uma linha do arquivo. Quando não houver mais linhas ou ocorrer um erro, a função deve retornar NULL.</p>

###

<h3 align="left">Como Funciona</h3>

###

<p align="left">1. Leitura por partes: Em vez de ler o arquivo inteiro de uma vez, a função deve ler o arquivo em pedaços pequenos. Isso ajuda a economizar memória e a lidar com arquivos grandes. Para isso, você vai usar a função read() que lê uma quantidade especificada de dados (determinada pelo BUFFER_SIZE).<br><br>2. Detectando uma linha: Quando você lê os dados de um arquivo, o sistema não vai ler "linhas" diretamente, mas apenas blocos de texto. Então, você precisa procurar pelo caractere de quebra de linha (\n) dentro dos dados lidos e, assim, identificar onde termina uma linha.<br><br>3. Retorno da linha: Assim que uma linha for lida (ou se o arquivo terminar), você deve retornar essa linha para o programa que chamou a função. O comportamento esperado é:<br><br>- Se a linha contiver uma quebra de linha (\n), ela deve ser incluída na linha retornada.<br>- Se a linha não tiver uma quebra de linha (por exemplo, a última linha do arquivo), ela ainda deve ser retornada, mas sem o \n.<br><br>4. Leitura contínua: Para que a função funcione corretamente, você deve garantir que as chamadas subsequentes à get_next_line() continuem a ler a partir do ponto onde a última leitura parou. Isso significa que você precisa lembrar onde parou na leitura, usando, por exemplo, variáveis estáticas.</p>

###

<h3 align="left">Como Implementar:</h3>

###

<p align="left">O projeto é dividido em três arquivos principais:<br><br>1. get_next_line.c: Aqui vai a implementação da função get_next_line(), que deve realizar a leitura do arquivo e retornar as linhas.<br><br>2. get_next_line_utils.c: Aqui você pode implementar funções auxiliares para ajudar a manipular as linhas, como uma função para juntar pedaços de dados ou procurar uma quebra de linha.<br><br>3. get_next_line.h: Este arquivo contém a definição da função get_next_line() e qualquer outra definição necessária, como declarações de funções auxiliares e constantes.</p>

###
