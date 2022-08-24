#include<stdio.h>

int main() {

    int size;
    printf("Please enter butterfly size: ");
    scanf("%d", &size);
    
    //Upper Part
    for (int i = 1; i <= size - 1; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int k = 1; k < (size * 2) - (i * 2); k++) {
            printf("  ");
        }
        for (int l = 1; l <= i; l++) {
            printf("* ");
        }
        printf("\n");
    }
    //Middle
    for (int i = 1; i <= (2 * size) - 1; i++) {
        printf("* ");
    }
    printf("\n");

    //Lower Part
    for (int i = 1; i <= size - 1; i++) {
        for (int j = 1; j <= size - i; j++) {
            printf("* ");
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            printf("  ");
        }
        for (int l = i; l <= size - 1; l++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}