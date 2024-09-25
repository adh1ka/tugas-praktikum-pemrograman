#include <stdio.h>

int main() {
    int i, n, angka;
    float total = 0;
    printf("Masukkan banyaknya data nilai : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Masukkan data nilai ke-%d : ", i);
        scanf("%d", &angka);
        total += angka; 
    }
    printf("Jumlah seluruh nilai adalah = %.2f\n", total);
    printf("Nilai rata-ratanya adalah = %.2f\n", total / n);
    return 0;
}   