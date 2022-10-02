#include<stdio.h>

int main() {

    int row, column;

    scanf("%d %d", &row, &column);

    if (row < 1 || column > 3) {
        printf("Invalid input, please try again.");
    }

    int first_matrix[row][column];
    int second_matrix[row][column];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &first_matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &second_matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", first_matrix[i][j] + second_matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}