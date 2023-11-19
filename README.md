# Explicação do Código LIG 4

## Introdução

Este documento fornece uma explicação detalhada do código-fonte implementado para o jogo Connect Four em linguagem C. O jogo Connect Four é um jogo de estratégia para dois jogadores, também conhecido em português como Lig 4, no qual o objetivo é conectar quatro fichas da mesma cor em linha, seja na horizontal, vertical ou diagonal.

## Estrutura do Projeto

O projeto está dividido em três arquivos principais:

1. **Lig4.h:** Este arquivo contém as declarações das funções e as definições de constantes usadas em todo o projeto. Isso ajuda a modularizar o código e facilita a manutenção.

2. **Lig4Algoritmos.c:** Aqui, encontramos as implementações das funções declaradas no arquivo de cabeçalho. As funções incluem a inicialização do tabuleiro, a impressão do tabuleiro, a realização de jogadas e a verificação de vitória.

3. **main.c:** Este é o ponto de entrada principal do programa. Ele contém a função `main` que inicia o jogo, interage com os jogadores e controla o fluxo principal do programa.

## Funcionalidades Implementadas

1. **Inicialização do Tabuleiro:** A função `initializeBoard` preenche o tabuleiro com espaços em branco, representando posições vazias.

2. **Impressão do Tabuleiro:** A função `printBoard` exibe visualmente o estado atual do tabuleiro, incluindo números de linha e coluna para facilitar a identificação de posições.

3. **Realização de Jogadas:** A função `makeMove` permite que um jogador faça uma jogada escolhendo a coluna onde deseja colocar sua ficha.

4. **Verificação de Vitória:** A função `checkWin` verifica se há uma sequência vitoriosa de quatro fichas na horizontal, vertical ou diagonal.

5. **Loop Principal do Jogo:** O programa principal, em `main.c`, implementa um loop que continua até que haja um vencedor ou empate. Ele alterna entre os jogadores, aceita entradas do usuário e atualiza o tabuleiro.

## Melhorias Possíveis

1. **Interface Gráfica:** Uma melhoria significativa seria adicionar uma interface gráfica para tornar o jogo mais interativo e amigável.

2. **Modo de Dois Jogadores:** Atualmente, o jogo é implementado para dois jogadores alternando turnos. Pode ser estendido para permitir partidas contra um adversário controlado por computador.

3. **Validação de Entrada Aprimorada:** Adicionar validação extra para garantir entradas seguras do usuário pode ser uma boa prática.

4. **Detecção de Empate Aprimorada:** A detecção de empate pode ser melhorada para uma situação em que o tabuleiro está completamente cheio, mas não há um vencedor.

5. **Limpar console a cada nova jogada:** Adicionar uma função para que o código seja limpo do console a cada nova jogada, para não ficar confuso.

## Desafios

- **Solução para parte gráfica:** Devido às limitações da própria linguagem de programação C, a qual é extremamente trabalhoso lidar com uma interface gráfica, passei a buscar soluções para que o código mostrasse ao usuário de maneira limpa onde ele estava jogando. Após algumas tentativas consegui criar um tabuleiro visual a qual facilitaria a visualização das jogadas.

- **Reproduzir Dinâmica do Jogo:** Como o Lig 4 é um jogo onde você não escolhe 100% qual é a linha e a coluna que você joga, passei a tentar elaborar uma maneira de reproduzir o jogo da melhor forma, onde você deve escolher apenas a coluna e ele preenche as linhas de baixo para cima, levando em conta se há ou não alguma “peça” naquele local.

## Conclusão

Este projeto implementa o jogo Connect Four em C, fornecendo uma base sólida para futuras melhorias e expansões. A modularidade do código facilita a manutenção, e as funcionalidades implementadas fornecem uma experiência de jogo completa.
