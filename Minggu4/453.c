#include <stdio.h>

int main() {
    float angka1, angka2, hasil;
    char operator, pilihan;

    printf("Input 's' untuk masuk ke program\n Input 'e' untuk keluar dari program\n Input s/e : ");
    scanf("%c", &pilihan);

    if (pilihan == 's'){
        goto kalkulator;
    }
    
    if (pilihan == 'e'){
        goto selesai;
    }

    kalkulator:
        printf("Masukkan operasi yang diinginkan (misal 10 + 4) : ");
        scanf("%f %c %f", &angka1, &operator, &angka2);

        if (operator == '+') {
            hasil = angka1 + angka2;
        } else if (operator == '-') {
            hasil = angka1 - angka2;
        } else if (operator == '*') {
            hasil = angka1 * angka2;
        } else if (operator == '/') {
            hasil = angka1 / angka2;
        } else {
            printf("Masukkan operator dengan benar!!!!!\n");
        }

        printf("Hasilnya adalah %.2lf\n", hasil);

    selesai:
        printf("Program selesai\n");
    return 0;
}