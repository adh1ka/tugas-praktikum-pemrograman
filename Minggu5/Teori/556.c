#include <stdio.h>

int main() {
    double bilangan = 46.0;
    double tebakan = 23.0;
    double hasil;
    int iterasi = 5;

    for (int i = 1; i <= iterasi; i++) {
        hasil = (tebakan + (bilangan / tebakan)) / 2.0;
        printf("Akar = (%.2f + %.2f / %.2f) / 2 = (%.2f + %.2f) / 2 = %.2f\n",
               tebakan, bilangan, tebakan, tebakan, bilangan / tebakan, hasil);
        tebakan = hasil;
    }
    return 0;
}
