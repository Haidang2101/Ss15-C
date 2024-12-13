#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "Hello my gmail is test123@gmail.com";
    int letter_count = 0;    
    int digit_count = 0;    
    int special_count = 0;   
    int size = strlen(text); 
    for (int i = 0; i < size; i++) {
        if (isalpha(text[i])) {  
            letter_count++;
        } else if (isdigit(text[i])) {  
            digit_count++;
        } else if (!isspace(text[i])) {  
            special_count++;
        }
    }
    printf("So ky tu la chu cai: %d\n", letter_count);
    printf("So ky tu la chu so: %d\n", digit_count);
    printf("So ky tu dac biet: %d\n", special_count);

    return 0;
}

