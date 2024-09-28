#include <stdio.h>

int main() {
    int hasil = 0, bilangan = 25;
    while (bilangan != 0) {
        hasil = bilangan % 2;
        printf("%d / 2 = %d sisa %d \n", bilangan, bilangan / 2, hasil);
        bilangan /= 2;
    }
    return 0;
}
