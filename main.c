#include "Lig4.h"

int main() {
    char board[ROWS][COLS];
    char player1 = 'X';
    char player2 = 'O';
    char currentPlayer = player1;
    int moves = 0;

    initializeBoard(board);

    while (1) {
        printBoard(board);

        int col;
        printf("Jogador %c, escolha uma coluna (0-6): ", currentPlayer);
        scanf("%d", &col);

        if (col < 0 || col >= COLS) {
            printf("Coluna inválida. Tente novamente.\n");
            continue;
        }

        if (makeMove(board, col, currentPlayer)) {
            moves++;

            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                printf("Jogador %c venceu!\n", currentPlayer);
                break;
            }

            if (moves == ROWS * COLS) {
                printBoard(board);
                printf("Empate!\n");
                break;
            }

            currentPlayer = (currentPlayer == player1) ? player2 : player1;
        } else {
            printf("Coluna cheia. Tente novamente.\n");
        }
    }

    return 0;
}
