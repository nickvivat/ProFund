#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void display_board(char board[]) {
    for (int i = 0; i <= 47; i++) {
        printf("  %c", board[i]);
    }
}

void player_turn(char board[]) {
   int column;
   int ask_player = true;
   while (ask_player != false) {
        printf("Player turn, Please choose a column one to seven to insert a coin: ");
        scanf("%d", &column);
        if (column >= 1 && column <= 7) {
            if (board[(column - 1) + (8 * 5)] == 'O') {
                board[(column - 1) + (8 * 5)] = 'P';
                ask_player = false;
            } else if (board[(column - 1) + (8 * 4)] == 'O') {
                board[(column - 1) + (8 * 4)] = 'P';
                ask_player = false;
            } else if (board[(column - 1) + (8 * 3)] == 'O') {
                board[(column - 1) + (8 * 3)] = 'P';
                ask_player = false;
            } else if (board[(column - 1) + (8 * 2)] == 'O') {
                board[(column - 1) + (8 * 2)] = 'P';
                ask_player = false;
            } else if (board[(column - 1) + (8 * 1)] == 'O') {
                board[(column - 1) + (8 * 1)] = 'P';
                ask_player = false;
            } else if (board[(column - 1) + (8 * 0)] == 'O') {
                board[(column - 1) + (8 * 0)] = 'P';
                ask_player = false;
            } else {
                printf("The column you chose is full! Please choose a new one.\n");
                ask_player = true;
            }
        } else if (column < 1 || column > 7) {
            printf("Invalid Input please try again.\n");
            ask_player = true;
        }
   } 
   
}

void challenger_turn(char board[]) {
   int column;
   int ask_challenger = true;
   while (ask_challenger != false) {
        printf("Challenger turn, Please choose a column one to seven to insert a coin: ");
        scanf("%d", &column);
        if (column >= 1 && column <= 7) {
            if (board[(column - 1) + (8 * 5)] == 'O') {
                board[(column - 1) + (8 * 5)] = 'C';
                ask_challenger = false;
            } else if (board[(column - 1) + (8 * 4)] == 'O') {
                board[(column - 1) + (8 * 4)] = 'C';
                ask_challenger = false;
            } else if (board[(column - 1) + (8 * 3)] == 'O') {
                board[(column - 1) + (8 * 3)] = 'C';
                ask_challenger = false;
            } else if (board[(column - 1) + (8 * 2)] == 'O') {
                board[(column - 1) + (8 * 2)] = 'C';
                ask_challenger = false;
            } else if (board[(column - 1) + (8 * 1)] == 'O') {
                board[(column - 1) + (8 * 1)] = 'C';
                ask_challenger = false;
            } else if (board[(column - 1) + (8 * 0)] == 'O') {
                board[(column - 1) + (8 * 0)] = 'C';
                ask_challenger = false;
            } else {
                printf("The column you chose is full! Please choose a new one.\n");
                ask_challenger = true;
            }
        } else if (column < 1 || column > 7) {
            printf("Invalid Input please try again.\n");
            ask_challenger = true;
        }
   } 

}

bool player_win_check(char board[]) {

    bool win = false;

    for (int i = 0; i <= 46; i++) {
        
        if (board[i] == 'P' && board[i + 1] == 'P' && board[i + 2] == 'P' && board[i + 3] == 'P') {
            printf("\nCongratulation player win, by horizontally connect!");
            win = true;
            //Horizontally connect
        }
    }
    for (int i = 0; i <= 22; i++) {
        if (board[i] == 'P' && board[i + 8] == 'P' && board[i + 16] == 'P' && board[i + 24] == 'P') {
            printf("\nCongratulation player win, by vertically connect!");
            win = true;
            //Vertically connect.
        }
    }
    for (int i = 0; i <= 19; i++) {
        if (board[i] == 'P' && board[i + 9] == 'P' && board[i + 18] == 'P' && board[i + 27] == 'P') {
            printf("\nCongratulation player win, by left diagonal connect!");
            win = true;
            //Left diagonal connect.
        }
    }
    for (int i = 0; i <= 22; i++) {
        if (board[i] == 'P' && board[i + 7] == 'P' && board[i + 14] == 'P' && board[i + 21] == 'P') {
            printf("\nCongratulation player win, by right diagonal connect!");
            win = true;
            //Right diagonal connect.
        }
    }
    return win;
}

bool challenger_win_check(char board[]) {

    bool win = false;

    for (int i = 0; i <= 46; i++) {
        if (board[i] == 'C' && board[i + 1] == 'C' && board[i + 2] == 'C' && board[i + 3] == 'C') {
            printf("\nCongratulation challenger win, by horizontally connect!");
            win = true;
            //Horizontally connect
        }
    }
    for (int i = 0; i <= 22; i++) {
        if (board[i] == 'C' && board[i + 8] == 'C' && board[i + 16] == 'C' && board[i + 24] == 'C') {
            printf("\nCongratulation challenger win, by vertically connect!");
            win = true;
            //Vertically connect.
        }
    }
    for (int i = 0; i <= 19; i++) {
        if (board[i] == 'C' && board[i + 9] == 'C' && board[i + 18] == 'C' && board[i + 27] == 'C') {
            printf("\nCongratulation challenger win, by left diagonal connect!");
            win = true;
            //Left diagonal connect.
        }
    }
    for (int i = 0; i <= 22; i++) {
        if (board[i] == 'C' && board[i + 7] == 'C' && board[i + 14] == 'C' && board[i + 21] == 'C') {
            printf("\nCongratulation challenger win, by right diagonal connect!");
            win = true;
            //Right diagonal connect.
        }
    }
    return win;
}

int main() {

    bool gameover = false;
    int turn = 0;

    printf("----- Welcome to connect four game!!! -----\n");

    char board[50] = {'O','O','O','O','O','O','O','\n',
                      'O','O','O','O','O','O','O','\n', 
                      'O','O','O','O','O','O','O','\n',
                      'O','O','O','O','O','O','O','\n',
                      'O','O','O','O','O','O','O','\n',
                      'O','O','O','O','O','O','O','\n'
                    };
    
    while (gameover != true) {

        display_board(board);
        player_turn(board);
        system("cls");
        turn++;
        if (turn > 6) {
            if (player_win_check(board)) {
                printf("\n");
                display_board(board);
                return 0;
            }
        }
        
        display_board(board);
        challenger_turn(board);
        system("cls");
        turn++;
        if (turn > 8) {
            if (challenger_win_check(board)) {
                printf("\n");
                display_board(board);
                return 0;
            }
        }
        if (turn > 41) {
            system("cls");
            display_board(board);
            printf("It's a tie.");
            return 0;
        }
    }

    return 0;
}