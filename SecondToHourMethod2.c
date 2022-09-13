#include<stdio.h>

int main() {

    int hr , min , sec;
    printf("Please input time in second: ");
    scanf("%d", &sec);
    if (sec < 0) {
        printf("Invalid Input!");
        return 0;
    }

    hr = sec / 3600;
    min = (sec - hr * 3600) / 60;
    sec = (sec - hr * 3600) - 60 * min;

    printf("%d:%02d:%02d", hr, min, sec);
    return 0;

}