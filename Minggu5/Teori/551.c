#include <stdio.h>

int main() {
    int baris, kolom;
    printf("Masukkan jumlah baris = ", &baris);
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom = ", &kolom);
    scanf("%d", &kolom);
    if (baris <= 0 && kolom <= 0) {
        printf("Baris dan kolom yang anda input bernilai 0 / negatif\n");
    } else if (baris <= 0) {
        printf("Baris yang anda input bernilai 0 / negatif\n");
    } else if (kolom <= 0) {
        printf("Kolom yang anda input bernilai 0 / negatif\n");
    } else {
        for (int i = 1; i <= baris; i++) {
            for (int j = 1; j <= kolom; j++) {
            printf(" %d ", j);
            }
        printf("\n");
        }
    }
    return 0;
}
