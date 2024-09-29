#include <stdio.h>

int main() {
    int hasil = 0, bilangan;
    printf("Masukkan Bilangan = ");
    scanf("%d", &bilangan);
    if (bilangan < 0) {
        printf("Masukkan bilangan bulat!!!");
    } else {
        while (bilangan != 0) {
            hasil = bilangan % 2;
            printf("%d / 2 = %d sisa %d \n", bilangan, bilangan / 2, hasil);
            bilangan /= 2;
        }
    }

    return 0;
}