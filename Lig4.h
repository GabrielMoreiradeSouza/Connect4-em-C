#ifndef LIG_4_H
#define LIG_4_H

#define ROWS 6
#define COLS 7

// Fun��o para inicializar o tabuleiro
void initializeBoard(char board[ROWS][COLS]);

// Fun��o para imprimir o tabuleiro
void printBoard(const char board[ROWS][COLS]);

// Fun��o para realizar a jogada
int makeMove(char board[ROWS][COLS], int col, char player);

// Fun��o para verificar se h� um vencedor
int checkWin(const char board[ROWS][COLS], char player);

#endif
