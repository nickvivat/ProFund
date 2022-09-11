#include<stdio.h>
#include<string.h>

int main() {

    char input[100];
    char reversedinput[100];
    char karaca[] = "aca";
    printf("Enter your input: ");
    scanf("%s", input);
    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            for (int i = length - 1, j=0; i >= 0; i--, j++) {
                reversedinput[j] = input[i];
            }
            } else {
            printf("Invalid Input!");
            return 0;
        }
    }
    for (int k = 0; k < length; k++) {
                if (reversedinput[k] == 'a') {
                    reversedinput[k] = '0';
                } else if (reversedinput[k] == 'e') {
                    reversedinput[k] = '1';
                } else if (reversedinput[k] == 'i') {
                    reversedinput[k] = '2';
                } else if (reversedinput[k] == 'o') {
                    reversedinput[k] = '3';
                } else if (reversedinput[k] == 'u') {
                    reversedinput[k] = '4';
                }
    }
    strcat(reversedinput,karaca);   
    printf("%s", reversedinput);

    return 0;
}