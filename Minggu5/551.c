#include <stdio.h>

int main() {
    int kolom, baris, angka = 5;
    for (baris = 0; baris < angka; baris++) {
        for (kolom = 0; kolom < angka; kolom++){
            if (baris == kolom) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
