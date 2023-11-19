#include "Lig4.h"
#include <stdio.h>

void initializeBoard(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(const char board[ROWS][COLS]) {
    // Imprimir números das colunas
    printf("  ");
    for (int i = 0; i < COLS; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Imprimir borda superior
    printf(" ");
    for (int i = 0; i < COLS * 2 + 1; i++) {
        printf("-");
    }
    printf("\n");

    // Imprimir tabuleiro com números das linhas
    for (int i = 0; i < ROWS; i++) {
        printf("%d|", i);
        for (int j = 0; j < COLS; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");

        // Imprimir borda entre as linhas
        printf(" ");
        for (int k = 0; k < COLS * 2 + 1; k++) {
            printf("-");
        }
        printf("\n");
    }
    printf("\n");
}

int makeMove(char board[ROWS][COLS], int col, char player) {
    for (int i = ROWS - 1; i >= 0; i--) {
        if (board[i][col] == ' ') {
            board[i][col] = player;
            return 1;  // Jogada válida
        }
    }
    return 0;  // Jogada inválida (coluna cheia)
}

int checkWin(const char board[ROWS][COLS], char player) {
    // Verificar linhas
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i][j + 1] == player && board[i][j + 2] == player && board[i][j + 3] == player) {
                return 1;
            }
        }
    }

    // Verificar colunas
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == player && board[i + 1][j] == player && board[i + 2][j] == player && board[i + 3][j] == player) {
                return 1;
            }
        }
    }

    // Verificar diagonais
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player && board[i + 3][j + 3] == player) {
                return 1;
            }
        }
    }

    for (int i = 3; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] == player && board[i - 1][j + 1] == player && board[i - 2][j + 2] == player && board[i - 3][j + 3] == player) {
                return 1;
            }
        }
    }

    return 0;
}


