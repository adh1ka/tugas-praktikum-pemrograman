#include <stdio.h>

int main() {
    int tahun;
    printf("Input tahun : ");
    scanf("%d", &tahun);
    if (tahun < 1600 || tahun > 2400) {
        printf("Masukkan tahun antara 1600 sampai 2400\n");
    } else {
        if (tahun % 400 == 0){
            printf("Tahun kabisat\n");
        } else if (tahun % 100 == 0) {
            printf("Bukan tahun kabisat\n");
        } else if (tahun % 4 == 0) {
            printf("Tahun kabisat\n");
        } else {
            printf("Bukan tahun kabisat\n");
        }
    }
    return 0;
}
