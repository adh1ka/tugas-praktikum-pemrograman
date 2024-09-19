#include <stdio.h>

int main() {
    int tahun;
    printf("Input tahun : ");
    scanf("%d", &tahun);
    if (tahun < 1600 || tahun > 2400) {
        printf("Masukkan tahun dengan benar\n");
    } else {
        if (tahun % 4 == 0){
            printf("Tahun %d merupakan tahun kabisat\n", tahun);
        } else {
            printf("Tahun %d bukan tahun kabisat\n", tahun);
        }
    }
    return 0;
}