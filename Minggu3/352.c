#include <stdio.h>

int main() {
    int a = 7, b = 9, c = 5, d = 3;
    int m, n, hasil;
    m = (a > b)? a : b;
    n = (c < d)? d : c;
    hasil = (m > n) ? m : n;
    printf("Nilai m = %d\n", m);
    printf("Nilai n = %d\n", n);
    printf("Nilai hasil = %d\n", hasil);
    return 0;
}