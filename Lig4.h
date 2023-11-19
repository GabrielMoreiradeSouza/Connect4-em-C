#ifndef LIG_4_H
#define LIG_4_H

#define ROWS 6
#define COLS 7

// Função para inicializar o tabuleiro
void initializeBoard(char board[ROWS][COLS]);

// Função para imprimir o tabuleiro
void printBoard(const char board[ROWS][COLS]);

// Função para realizar a jogada
int makeMove(char board[ROWS][COLS], int col, char player);

// Função para verificar se há um vencedor
int checkWin(const char board[ROWS][COLS], char player);

#endif
