#include<stdio.h>
#include<string.h>

int main() {

    char input[100];
    char karaca[] = "aca";
    printf("Enter your input: ");
    gets(input);
    int lenght = strlen(input);
    for (int i = 0; i < lenght; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i];
        } else {
            printf("Invalid Input!");
            return 0;
        }
    }
    
    strrev(input);

    for (int j = 0; j < lenght; j++) {
                switch (input[j]) {
                case 'a':
                    input[j] = '0';
                    break;
                case 'e':
                    input[j] = '1';
                    break;
                case 'i':
                    input[j] = '2';
                    break;
                case 'o':
                    input[j] = '3';
                    break;
                case 'u':
                    input[j] = '4';
                    break;
                default:
                    input[j] = input[j];
                    break;
                }
    }

    strcat(input, karaca);
    printf("%s", input);

    return 0;
}