#include <stdio.h>

int main() {
    int bilangan, dipecah = 0, total = 0;
    printf("Masukkan bilangan bulat positif : ");
    scanf("%d", &bilangan);
    printf("Jumlah angka dalam bilangan %d adalah ", bilangan);
    while (bilangan != 0) {
        dipecah = bilangan % 10;
        printf("%d", dipecah);
        total += dipecah;
        if (dipecah > 1) {
            printf(" + ");
        }
        bilangan /=10;       
    }
    printf(" = %d\n", total);
    return 0;
}
