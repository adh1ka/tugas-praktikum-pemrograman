#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double nilai;
    char kodeWarna[3][10];
} Resistor;

Resistor resistorStandar[] = {
    {1, {"coklat", "hitam", "emas"}},
    {10, {"coklat", "hitam", "coklat"}},
    {100, {"coklat", "hitam", "merah"}},
    {330, {"jingga", "jingga", "coklat"}},
    {470, {"kuning", "ungu", "coklat"}},
    {1000, {"coklat", "hitam", "jingga"}},
    {4700, {"kuning", "ungu", "merah"}},
    {10000, {"coklat", "hitam", "kuning"}}
};
int jumlahResistorStandar = sizeof(resistorStandar) / sizeof(Resistor);

double getResistorValueFromColor(char warna[3][10]) {
    int multiplier;
    int digit1, digit2;

    if (strcmp(warna[0], "hitam") == 0) digit1 = 0;
    else if (strcmp(warna[0], "coklat") == 0) digit1 = 1;
    else if (strcmp(warna[0], "merah") == 0) digit1 = 2;
    else if (strcmp(warna[0], "jingga") == 0) digit1 = 3;
    else if (strcmp(warna[0], "kuning") == 0) digit1 = 4;
    else if (strcmp(warna[0], "hijau") == 0) digit1 = 5;
    else if (strcmp(warna[0], "biru") == 0) digit1 = 6;
    else if (strcmp(warna[0], "ungu") == 0) digit1 = 7;
    else if (strcmp(warna[0], "abu-abu") == 0) digit1 = 8;
    else if (strcmp(warna[0], "putih") == 0) digit1 = 9;
    else return -1;

    if (strcmp(warna[1], "hitam") == 0) digit2 = 0;
    else if (strcmp(warna[1], "coklat") == 0) digit2 = 1;
    else if (strcmp(warna[1], "merah") == 0) digit2 = 2;
    else if (strcmp(warna[1], "jingga") == 0) digit2 = 3;
    else if (strcmp(warna[1], "kuning") == 0) digit2 = 4;
    else if (strcmp(warna[1], "hijau") == 0) digit2 = 5;
    else if (strcmp(warna[1], "biru") == 0) digit2 = 6;
    else if (strcmp(warna[1], "ungu") == 0) digit2 = 7;
    else if (strcmp(warna[1], "abu-abu") == 0) digit2 = 8;
    else if (strcmp(warna[1], "putih") == 0) digit2 = 9;
    else return -1;

    if (strcmp(warna[2], "hitam") == 0) multiplier = 1;
    else if (strcmp(warna[2], "coklat") == 0) multiplier = 10;
    else if (strcmp(warna[2], "merah") == 0) multiplier = 100;
    else if (strcmp(warna[2], "jingga") == 0) multiplier = 1000;
    else if (strcmp(warna[2], "kuning") == 0) multiplier = 10000;
    else if (strcmp(warna[2], "hijau") == 0) multiplier = 100000;
    else if (strcmp(warna[2], "biru") == 0) multiplier = 1000000;
    else return -1;

    return (digit1 * 10 + digit2) * multiplier;
}

double hitungResistansi(char tipeRangkaian, Resistor *resistor, int jumlahResistor) {
    double totalResistansi = 0.0;

    if (tipeRangkaian == 's' || tipeRangkaian == 'S') {
        for (int i = 0; i < jumlahResistor; i++) {
            totalResistansi += resistor[i].nilai;
        }
    } else if (tipeRangkaian == 'p' || tipeRangkaian == 'P') {
        for (int i = 0; i < jumlahResistor; i++) {
            if (resistor[i].nilai == 0) {
                printf("Nilai resistor tidak boleh nol untuk rangkaian paralel.\n");
                return -1;
            }
            totalResistansi += 1.0 / resistor[i].nilai;
        }
        if (totalResistansi > 0) {
            totalResistansi = 1.0 / totalResistansi;
        }
    } else {
        printf("Tipe rangkaian tidak valid.\n");
        return -1;
    }

    return totalResistansi;
}

void cariResistor(double target) {
    printf("\n--- PENCARIAN RESISTOR ---\n");
    printf("Mencari resistor dengan nilai mendekati %.2lf ohm:\n", target);
    int ditemukan = 0;

    for (int i = 0; i < jumlahResistorStandar; i++) {
        if (fabs(resistorStandar[i].nilai - target) <= 0.01) {
            printf("Resistor: %.2lf ohm, Kode Warna: %s %s %s\n",
                   resistorStandar[i].nilai,
                   resistorStandar[i].kodeWarna[0],
                   resistorStandar[i].kodeWarna[1],
                   resistorStandar[i].kodeWarna[2]);
            ditemukan = 1;
        }
    }

    if (!ditemukan) {
        printf("Tidak ada resistor yang persis sesuai nilai %.2lf ohm.\n", target);
    }
}


void kalkulatorHukumOhm() {
    char pilihan;
    double V, I, R;

    printf("\n--- KALKULATOR HUKUM OHM ---\n");
    printf("Pilih apa yang ingin dihitung:\n");
    printf("V - Tegangan (V)\nI - Arus (A)\nR - Resistansi (Ohm)\nPilihan Anda: ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'V':
        case 'v':
            printf("Masukkan nilai arus (A): ");
            scanf("%lf", &I);
            printf("Masukkan nilai resistansi (Ohm): ");
            scanf("%lf", &R);
            V = I * R;
            printf("Tegangan: %.2lf V\n", V);
            break;

        case 'I':
        case 'i':
            printf("Masukkan nilai tegangan (V): ");
            scanf("%lf", &V);
            printf("Masukkan nilai resistansi (Ohm): ");
            scanf("%lf", &R);
            I = V / R;
            printf("Arus: %.2lf A\n", I);
            break;

        case 'R':
        case 'r':
            printf("Masukkan nilai tegangan (V): ");
            scanf("%lf", &V);
            printf("Masukkan nilai arus (A): ");
            scanf("%lf", &I);
            R = V / I;
            printf("Resistansi: %.2lf Ohm\n", R);
            break;

        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}

void kalkulasiPembagiTegangan() {
    int jumlahResistor;
    double Vin;

    printf("\n--- KALKULASI PEMBAGI TEGANGAN ---\n");
    printf("Masukkan tegangan input (Vin) dalam volt: ");
    scanf("%lf", &Vin);

    if (Vin <= 0) {
        printf("Tegangan input harus lebih besar dari 0.\n");
        return;
    }

    printf("Masukkan jumlah resistor dalam rangkaian (minimal 2): ");
    scanf("%d", &jumlahResistor);

    if (jumlahResistor < 2) {
        printf("Minimal harus ada dua resistor untuk pembagi tegangan.\n");
        return;
    }

    double resistor[jumlahResistor];
    double totalResistansi = 0.0;

    for (int i = 0; i < jumlahResistor; i++) {
        printf("Masukkan nilai resistor R%d (ohm): ", i + 1);
        scanf("%lf", &resistor[i]);

        if (resistor[i] <= 0) {
            printf("Nilai resistor harus lebih besar dari 0.\n");
            return;
        }

        totalResistansi += resistor[i];
    }

    printf("\n--- HASIL PEMBAGI TEGANGAN ---\n");
    for (int i = 0; i < jumlahResistor; i++) {
        double Vout = Vin * (resistor[i] / totalResistansi);
        printf("Tegangan pada R%d (%.2lf ohm): %.2lf V\n", i + 1, resistor[i], Vout);
    }
}

int main() {
    int pilihan;

    printf("------PROGRAM PENGHITUNG DAN KALKULATOR RESISTOR------\n");
    printf("Pilih menu:\n");
    printf("1. Hitung Resistansi\n");
    printf("2. Kalkulator Hukum Ohm\n");
    printf("3. Kalkulasi Pembagi Tegangan\n");
    printf("4. Cari Resistor Berdasarkan Nilai\n");
    printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

    if (pilihan == 1) {
        int jumlahResistor;
        char tipeRangkaian;

        printf("Masukkan jumlah resistor: ");
        scanf("%d", &jumlahResistor);

        Resistor *resistor = (Resistor *)malloc(jumlahResistor * sizeof(Resistor));

        printf("Masukkan tipe rangkaian (s = seri, p = paralel): ");
        scanf(" %c", &tipeRangkaian);

        for (int i = 0; i < jumlahResistor; i++) {
            char jawab;
            printf("Apakah nilai resistor ke-%d sudah diketahui? (y/n): ", i + 1);
            scanf(" %c", &jawab);

            if (jawab == 'y' || jawab == 'Y') {
                printf("Masukkan nilai resistor ke-%d (ohm): ", i + 1);
                scanf("%lf", &resistor[i].nilai);
            } else {
                char warna[3][10];
                printf("Masukkan tiga warna kode resistor ke-%d (contoh: merah kuning hitam): ", i + 1);
                scanf("%s %s %s", warna[0], warna[1], warna[2]);
                resistor[i].nilai = getResistorValueFromColor(warna);

                if (resistor[i].nilai < 0) {
                    printf("Kode warna tidak valid. Ulangi input.\n");
                    i--;
                    continue;
                }
                printf("Nilai resistor berdasarkan warna: %.2lf ohm\n", resistor[i].nilai);
            }
        }

        double totalResistansi = hitungResistansi(tipeRangkaian, resistor, jumlahResistor);
        if (totalResistansi >= 0) {
            printf("Total resistansi rangkaian: %.2lf ohm\n", totalResistansi);
        }

        free(resistor);
    } else if (pilihan == 2) {
        kalkulatorHukumOhm();
    } else if (pilihan == 3) {
        kalkulasiPembagiTegangan();
    } else if (pilihan == 4) {
        double target;
        printf("Masukkan nilai resistansi target (ohm): ");
        scanf("%lf", &target);
        cariResistor(target);
    } else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}
