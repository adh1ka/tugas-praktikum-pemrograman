#include <stdio.h>
#include <string.h>

// Fungsi untuk mendapatkan nilai resistor berdasarkan kode warna
int getResistorValueFromColor(char colors[][10]);

int main() {
    char tipeRangkaian, jawab;
    int jumlahResistor;
    double totalResistansi = 0, nilaiResistor;

    printf("------PROGRAM PENGHITUNG RESISTANSI------\n");

    // Meminta input jumlah resistor
    printf("Masukkan jumlah resistor: ");
    while (scanf("%d", &jumlahResistor) != 1 || jumlahResistor <= 0) {
        while (getchar() != '\n'); // Hapus input tidak valid dari buffer
        printf("Input tidak valid. Masukkan jumlah resistor yang benar (angka positif): ");
    }

    // Meminta input tipe rangkaian (serial/paralel)
    while (1) {
        printf("Rangkaian apa yang akan dihitung resistansinya? Serial atau Paralel?\n");
        printf("Input 's' untuk serial, 'p' untuk paralel: ");
        scanf(" %c", &tipeRangkaian);

        if (tipeRangkaian == 's' || tipeRangkaian == 'S' || tipeRangkaian == 'p' || tipeRangkaian == 'P') {
            break; // Keluar loop jika input valid
        } else {
            printf("Input tidak valid! Masukkan 's' untuk serial atau 'p' untuk paralel.\n");
            while (getchar() != '\n'); // Hapus karakter tidak valid
        }
    }

    // Menghitung resistansi total berdasarkan jenis rangkaian
    for (int i = 1; i <= jumlahResistor; i++) {
        // Meminta konfirmasi apakah nilai resistor diketahui
        while (1) {
            printf("Apakah nilai resistor ke-%d sudah diketahui? (y/n): ", i);
            scanf(" %c", &jawab);

            if (jawab == 'y' || jawab == 'Y' || jawab == 'n' || jawab == 'N') {
                break; // Keluar loop jika input valid
            } else {
                printf("Input tidak valid! Masukkan 'y' untuk ya atau 'n' untuk tidak.\n");
                while (getchar() != '\n'); // Hapus karakter tidak valid
            }
        }

        if (jawab == 'y' || jawab == 'Y') {
            // Input nilai resistor secara langsung
            printf("Masukkan nilai ohm resistor ke-%d: ", i);
            while (scanf("%lf", &nilaiResistor) != 1 || nilaiResistor <= 0) {
                while (getchar() != '\n'); // Hapus karakter tidak valid
                printf("Input tidak valid. Masukkan nilai positif untuk resistor ke-%d: ", i);
            }
        } else {
            // Input nilai resistor berdasarkan kode warna
            char warna[3][10];
            printf("Masukkan tiga warna kode resistor ke-%d (misal: merah kuning hitam): ", i);
            scanf("%s %s %s", warna[0], warna[1], warna[2]);
            nilaiResistor = getResistorValueFromColor(warna);

            if (nilaiResistor < 0) {
                printf("Kode warna tidak valid. Ulangi input.\n");
                i--; // Ulangi input untuk resistor yang sama
                continue;
            }
            printf("Nilai resistor berdasarkan warna: %.2lf ohm\n", nilaiResistor);
        }

        // Tambahkan nilai resistor sesuai jenis rangkaian
        if (tipeRangkaian == 's' || tipeRangkaian == 'S') {
            totalResistansi += nilaiResistor; // Tambah langsung untuk rangkaian seri
        } else {
            if (nilaiResistor == 0) {
                printf("Nilai resistor tidak boleh 0 pada rangkaian paralel. Ulangi input.\n");
                i--;
                continue;
            }
            totalResistansi += 1.0 / nilaiResistor; // Tambah kebalikan untuk rangkaian paralel
        }
    }

    // Hitung total resistansi untuk rangkaian paralel
    if (tipeRangkaian == 'p' || tipeRangkaian == 'P') {
        totalResistansi = 1.0 / totalResistansi;
    }

    // Tampilkan hasil resistansi total
    printf("Total resistansi dari rangkaian %s: %.2lf ohm\n",
           (tipeRangkaian == 's' || tipeRangkaian == 'S') ? "seri" : "paralel",
           totalResistansi);

    return 0;
}

// Fungsi untuk mendapatkan nilai resistor dari warna
int getResistorValueFromColor(char colors[][10]) {
    const char *colorCodes[] = {"hitam", "coklat", "merah", "jingga", "kuning", "hijau", "biru", "ungu", "abu-abu", "putih"};
    int colorValues[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int multiplier[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

    int digitPertama = -1, digitKedua = -1, faktorPengali = -1;

    // Cari nilai digit pertama, kedua, dan faktor pengali berdasarkan warna
    for (int i = 0; i < 10; i++) {
        if (strcmp(colors[0], colorCodes[i]) == 0) digitPertama = colorValues[i];
        if (strcmp(colors[1], colorCodes[i]) == 0) digitKedua = colorValues[i];
        if (strcmp(colors[2], colorCodes[i]) == 0) faktorPengali = multiplier[i];
    }

    // Jika ada warna yang tidak valid, kembalikan -1
    if (digitPertama == -1 || digitKedua == -1 || faktorPengali == -1) {
        return -1;
    }

    // Hitung nilai resistor berdasarkan warna
    return (digitPertama * 10 + digitKedua) * faktorPengali;
}
