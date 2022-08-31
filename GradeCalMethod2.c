#include<stdio.h>

int main() {

    int a, b, c, total;
        scanf("%d %d %d", &a, &b, &c);
        
        if (a < 0 || a > 30 || b < 0 || b > 30 || c < 0 || c > 40) {
            printf("Invalid Input");
            return 0;
        }
        
        total = a + b + c;

    if (total >= 80) {
        printf("A");
    } else if (total >= 75) {
        printf("B+");
    } else if (total >= 70) {
        printf("B");
    } else if (total >= 65) {
        printf("C+");
    } else if (total >= 60) {
        printf("C");
    } else if (total >= 55) {
        printf("D+");
    } else if (total >= 50) {
        printf("D");
    } else {
        printf("F");
    }

    return 0;
}