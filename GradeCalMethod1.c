#include<stdio.h>

int main() {

    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < 0 || a > 30 || b < 0 || b > 30 || c < 0 || c > 40) {
        printf("Invalid Input");
        return 0;
    }
    
    total = a + b + c;

    

    switch (total) {

        case 80 ... 100:
            printf("A");
            break;
        
        case 75 ... 79:
            printf("B+");
            break;

        case 70 ... 74:
            printf("B");
            break;

        case 65 ... 69:
            printf("C+");
            break;

        case 60 ... 64:
            printf("C");
            break;

        case 55 ... 59:
            printf("D+");
            break;

        case 50 ... 54:
            printf("D");
            break;

        default:
            printf("F");
            break;
    }

    return 0;

}