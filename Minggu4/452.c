#include <stdio.h>

int main() {
    char karakter;
    printf("Input Karakter : ");
    scanf("%c", &karakter);
    if (karakter  >= 'a' && karakter <= 'z') {
        printf("Huruf kecil\n");
    } else if (karakter >= 'A' && karakter <= 'Z') {
        printf("Huruf besar\n");
    } else if (karakter >= '0' && karakter <= '9') {
        printf("Karakter angka\n");
    } else {
        printf("Karakter khusus\n");
    }
    return 0;
}
