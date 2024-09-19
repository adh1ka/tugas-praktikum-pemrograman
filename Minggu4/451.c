#include <stdio.h>

int main() {
    int angka;
    printf("Input angka : ");
    scanf("%d", &angka);
    if (angka % 2 == 0) {
        printf("Angka %d merupakan bilangan genap\n", angka);
    } else {
        printf("Angka %d merupakan bilangan ganjil\n", angka);
    }
    return 0;
}