#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100] = "alabama";
    int tan_so[256] = {0}; 
    int i;

    for (i = 0; i < strlen(chuoi); i++) {
        tan_so[(int)chuoi[i]]++;
    }

    printf("Tan su xuat hien cua cac ky tu:\n");
    for (i = 0; i < 256; i++) {
        if (tan_so[i] > 0) {
            printf("%c: %d\n", i, tan_so[i]);
        }
    }

    return 0;
}

