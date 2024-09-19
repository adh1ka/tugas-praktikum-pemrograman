#include <stdio.h>

int main() {
    char yahudi;
    printf("Input Karakter : ");
    scanf("%c", &yahudi);
    if (yahudi  >= 'a' && yahudi <= 'z') {
        printf("Huruf kecil\n");
    } else if (yahudi >= 'A' && yahudi <= 'Z') {
        printf("Huruf besar\n");
    } else if (yahudi <= 0 && yahudi >= 1000000) {
        printf("Karakter angka\n");
    } else {
        printf("Karakter khusus\n");
    }
    return 0;
}