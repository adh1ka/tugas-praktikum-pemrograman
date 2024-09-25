#include <stdio.h>

long int factorial(int n) {
    long int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int permutasi(float n, float r) {
    return factorial(n) / factorial(n - r);
}

int kombinasi(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    printf("Hasil permutasi : %d\n", permutasi(10, 3));
    printf("Hasil kombinasi : %d\n", kombinasi(11, 5));

    return 0;
}
