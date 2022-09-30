#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

const int board_row = 6;
const int board_column = 7;

void display_board(char board[board_row][board_column]) {
    
    for (int i = 0; i < board_row; i++) {
        for (int j = 0; j < board_column; j++) {
            printf("  %c", board[i][j]);
        }
        printf("\n");
    }
}

void player_turn(char board[board_row][board_column]) {
   
   int column;
   int ask_player = true;
   
   while (ask_player != false) {
        
        printf("Player turn, Please choose a column one to seven to insert a coin: ");
        scanf("%d", &column);
        
        if (column >= 1 && column <= 7) {
            if (board[0][column - 1] != 'O') {
                printf("The column you chose is full! Please choose a new one.\n");
                ask_player = true;
            }
            for (int i = 5; i >= 0; i--) {
                if (board[i][column - 1] == 'O') {
                    board[i][column - 1] = 'P';
                    ask_player = false;
                    break;
                }
            }
        } else if (column < 1 || column > 7) {
            printf("Invalid Input please try again.\n");
            ask_player = true;
        }
   } 
   
}

void challenger_turn(char board[board_row][board_column]) {
   
   int column;
   int ask_challenger = true;
   
   while (ask_challenger != false) {
        
        printf("Challenger turn, Please choose a column one to seven to insert a coin: ");
        scanf("%d", &column);
        
        if (column >= 1 && column <= 7) {
            if (board[0][column - 1] != 'O') {
                printf("The column you chose is full! Please choose a new one.\n");
                ask_challenger = true;
            }
            for (int i = 5; i >= 0; i--) {
                if (board[i][column - 1] == 'O') {
                    board[i][column - 1] = 'C';
                    ask_challenger = false;
                    break;
                }
            }
        } else if (column < 1 || column > 7) {
            printf("Invalid Input please try again.\n");
            ask_challenger = true;
        }
   } 
   
}

bool player_win_check(char board[board_row][board_column]) {

    bool win = false;

    for (int i = board_row - 1; i >= 0; i--) {
        for (int j = 0; j < board_column; j++) {
            if (board[i][j] == 'P' && board[i][j + 1] == 'P' && board[i][j + 2] == 'P' && board[i][j + 3] == 'P') {
                printf("\nCongratulation player win, by horizontally connect!");
                win = true;
                //Horizontally connect
            } else if (board[i][j] == 'P' && board[i - 1][j] == 'P' && board[i - 2][j] == 'P' && board[i - 3][j] == 'P') {
                printf("\nCongratulation player win, by vertically connect!");
                win = true;
                //Vertically connect.
            } else if (board[i][j % 4] == 'P' && board[i - 1][j % 4 - 1] == 'P' && board[i - 2][j % 4 - 2] == 'P' && board[i - 3][j % 4 - 3] == 'P') {
                printf("\nCongratulation player win, by left diagonal connect!");
                win = true;
                break;
                //Left diagonal connect.
            } else if (board[i][j % 4] == 'P' && board[i - 1][j % 4 + 1] == 'P' && board[i - 2][j % 4 + 2] == 'P' && board[i - 3][j % 4 + 3] == 'P') {
                printf("\nCongratulation player win, by right diagonal connect!");
                win = true;
                break;
                //Right diagonal connect.
            }
        }
    }
    return win;
}

bool challenger_win_check(char board[board_row][board_column]) {

    bool win = false;

    for (int i = board_row - 1; i >= 0; i--) {
        for (int j = 0; j < board_column; j++) {
            if (board[i][j] == 'C' && board[i][j + 1] == 'C' && board[i][j + 2] == 'C' && board[i][j + 3] == 'C') {
                printf("\nCongratulation challenger win, by horizontally connect!");
                win = true;
                //Horizontally connect
            } else if (board[i][j] == 'C' && board[i - 1][j] == 'C' && board[i - 2][j] == 'C' && board[i - 3][j] == 'C') {
                printf("\nCongratulation challenger win, by vertically connect!");
                win = true;
                //Vertically connect.
            } else if (board[i][j % 4] == 'C' && board[i - 1][j % 4 - 1] == 'C' && board[i - 2][j % 4 - 2] == 'C' && board[i - 3][j % 4 - 3] == 'C') {
                printf("\nCongratulation challenger win, by left diagonal connect!");
                win = true;
                break;
                //Left diagonal connect.
            } else if (board[i][j % 4] == 'C' && board[i - 1][j % 4 + 1] == 'C' && board[i - 2][j % 4 + 2] == 'C' && board[i - 3][j % 4 + 3] == 'C') {
                printf("\nCongratulation challenger win, by right diagonal connect!");
                win = true;
                break;
                //Right diagonal connect.
            }
        }
    }
    return win;
}

int main() {

    bool gameover = false;
    int turn = 0;

    printf("----- Welcome to connect four game!!! -----\n");
    
    char board[6][7] = {{'O','O','O','O','O','O','O'},
                        {'O','O','O','O','O','O','O'}, 
                        {'O','O','O','O','O','O','O'},
                        {'O','O','O','O','O','O','O'},
                        {'O','O','O','O','O','O','O'},
                        {'O','O','O','O','O','O','O'}
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