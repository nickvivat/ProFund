#include <stdio.h>

int main()
{

    printf("Please enter butterfly size: ");
    int size;
    scanf("%d", &size);

    for (int row = 1; row <= size; row++) {
        for (int column = 1; column <= 2 * size - 1; column++) {
            if (column <= row || column >= (2 * size) - row) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int row = size - 1; row >= 1; row--) {
        for (int column = 1; column <= 2 * size - 1; column++) {
            if (column <= row || column >= (2 * size) - row) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}