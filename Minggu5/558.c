#include <stdio.h>

int main() {
    int i, n, nilai, min, max;
    float total = 0, ratarata;    
    printf("Masukkan jumlah data (n) : ");
    scanf("%d", &n);
    printf("Masukkan nilai ke-1 : ");
    scanf("%d", &nilai);
    min = max = nilai;
    total += nilai;

    for (i = 2; i <= n; i++) {
        printf("Masukkan nilai ke-%d : ", i);
        scanf("%d", &nilai);

        total += nilai;

        if (nilai > max) {
            max = nilai;
        } else if (nilai < min) {
            min = nilai;
        }
    }

    ratarata = total / n;
    printf("Nilai minimal : %d\n", min);
    printf("Nilai maksimal : %d\n", max);
    printf("Nilai rata-rata : %f\n", ratarata);
    return 0;
}   
