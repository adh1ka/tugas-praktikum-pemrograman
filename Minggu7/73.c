#include <stdio.h>

void sieveOfEratosthenes(int n) {
    int P[n + 1];
    
    for (int i = 0; i <= n; i++) {
        P[i] = 0;
    }
    
    int i = 2;
    while (i <= n) {
        if (P[i] == 0) {
            printf("%d ", i);
            for (int j = i * 2; j <= n; j += i) {
                P[j] = 1;
            }
        }
        i++;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Masukkan batas atas (n): ");
    scanf("%d", &n);
    
    printf("Bilangan prima antara 1 sampai %d adalah:\n", n);
    sieveOfEratosthenes(n);
    
    return 0;
}
