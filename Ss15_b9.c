#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100] = "hello world";
    char ky_tu;
    char ket_qua[100];
    int i, j = 0;

    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &ky_tu);

    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] != ky_tu) {
            ket_qua[j] = chuoi[i];
            j++;
        }
    }
    ket_qua[j] = '\0'; 

    printf("Ket qua: %s\n", ket_qua);

    return 0;
}

