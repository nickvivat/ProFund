#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool password_check(char password[]) {
    
    int password_lenght = strlen(password);
    bool upper_letter_check = false, lower_letter_check = false, number_check = false, symbol_check = false;
    bool secure = false;

    if (password_lenght >= 6 && password_lenght <= 12) {
        for (int i = 0; i < password_lenght; i++) {
            if (password[i] >= 'A' && password[i] <= 'Z') {
                upper_letter_check = true;
            } else if (password[i] >= 'a' && password[i] <= 'z') {
                lower_letter_check = true;
            } else if (password[i] == '#' || password[i] == '@' || password[i] == '$') {
                symbol_check = true;
            } else if (password[i] >= '0' && password[i] <= '9') {
                number_check = true;
            }
        }
    }

    if (upper_letter_check == true && lower_letter_check == true && number_check == true && symbol_check == true) {
        secure = true;
        return secure;
    } else {
        secure = false;
        return secure;
    }

}


int main() {
    
    char Kob[30];
    char Romtham[30];
    char Jojo[30];

    scanf("%[^,],%[^,],%[^\n]", Kob, Romtham, Jojo);
    
    if (password_check(Kob)) {
        printf("%s (Kob)", Kob);
    } else if (password_check(Romtham)) {
        printf("%s (Romtham)", Romtham);
    } else if (password_check(Jojo)) {
        printf("%s (Jojo)", Jojo);
    } else {
        printf("Non of the password is secure.");
    }
    
    return 0;
}