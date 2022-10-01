#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

bool password_check(char password[]) {
    
    int password_lenght = 0, i = 0;
    bool upper_letter_check = false, lower_letter_check = false, number_check = false, symbol_check = false;
    bool secure = false;
    
    while (password[i] != '\0') {
        i++;
        password_lenght++;
    }
    
    int donothing = 0;
    
    if (password_lenght >= 6 && password_lenght <= 12) {
        for (int i = 0; i < password_lenght; i++) {
            isupper(password[i]) ? upper_letter_check = true : donothing++;
            islower(password[i]) ? lower_letter_check = true : donothing++;
            isdigit(password[i]) ? number_check = true : donothing++;
            if (password[i] == '$' || password[i] == '@' || password[i] == '#') {
                symbol_check = true;
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

    char Kob[15];
    char Romtham[15];
    char Jojo[15];

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