#include <stdio.h>

struct kalender {
    int tanggal;
    int bulan;
    int tahun;
};

int main() {
    struct kalender klndr;
    printf("Input : ");

    scanf("%d", &klndr.tanggal);

    klndr.bulan = 11;
    klndr.tahun = 2024;

    printf("Tanggal : %d-%d-%d\n", klndr.tanggal, klndr.bulan, klndr.tahun);

    if (klndr.tanggal + 1 > 30) {
        klndr.tanggal = 1;
        klndr.bulan += 1;
        if (klndr.bulan > 12) {
            klndr.bulan = 1;
            klndr.tahun +=1;
        }
    } else {
        klndr.tanggal += 1;
    }

    printf("Besok tanggal : %d-%d-%d\n", klndr.tanggal, klndr.bulan, klndr.tahun);

    return 0;
}
