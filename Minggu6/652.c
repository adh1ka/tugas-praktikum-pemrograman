#include <stdio.h>

long int factorial(int n) {
    long int faktorial = 1;
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }
    return faktorial;
}

int main() {
    int n;
    long int hasil;
    printf("Masukkan angka untuk faktorial : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Faktorial tidak terdefinisi dengan angka negatif!!!\n");
    } else {
        hasil = factorial(n);
        printf("Hasil faktorial dari %d adalah %ld\n", n, hasil);
    }
    return 0;
}
