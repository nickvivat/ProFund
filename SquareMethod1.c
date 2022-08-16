#include<stdio.h>

int main() {

    int size;
    printf("Enter the square size: ");
    scanf("%d", &size);
    
    if (size < 1) {
        printf("Invalid input");
    }
    
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}