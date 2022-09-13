#include<stdio.h>

int main() {

    int hr = 0 , min = 0 , sec;
    printf("Please input time in second: ");
    scanf("%d", &sec);
    if (sec < 0) {
        printf("Invalid Input!");
        return 0;
    }

    while (sec >= 3600) {
        if (sec / 3600 >= 0) {
            sec -= 3600;
            hr += 1;
        }
    }
    while (sec >= 60) {
        if (sec / 60 >= 0) {
            sec -= 60;
            min += 1;
        }
    }

    printf("%d:%02d:%02d", hr, min, sec);
    return 0;
}