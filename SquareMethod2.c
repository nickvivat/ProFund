#include<stdio.h>

int main() {

    int size, i = 1;
    printf("Enter the square size: ");
    scanf("%d", &size);
    int end = 0;
    
    if (size < 1) {
        printf("Invalid input");
    }
    
    do {
        if(i != size) {
            printf("*");
            i++;
        } else if (i == size) {
            printf("*\n");
            i = 1;
            end++;
            if (end == size) {
                break;
            }
        }
    
    } while (i <= size);
    return 0;
}