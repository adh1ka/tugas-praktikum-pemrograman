#include <stdio.h>

void buatBujursangkarAjaib(int n) {
    int bujursangkarAjaib[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bujursangkarAjaib[i][j] = 0;
        }
    }

    int number = 1;
    int i = 0, j = n / 2;

    while (number <= n * n) {
        bujursangkarAjaib[i][j] = number;
        number++;
        
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if (bujursangkarAjaib[newi][newj] != 0) {
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }

    printf("Bujursangkar Ajaib dengan ordo %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", bujursangkarAjaib[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Input ordo bujursangkar ajaib (ganjil antara 3 - 19): ");
    scanf("%d", &n);

    if (n < 3 || n > 19) {
        printf("Ukuran ordo harus di antara 3 dan 19.\n");
    } else if (n % 2 == 0) {
        printf("Ukuran ordo harus ganjil.\n");
    } else {
        buatBujursangkarAjaib(n);
    }

    return 0;
}
