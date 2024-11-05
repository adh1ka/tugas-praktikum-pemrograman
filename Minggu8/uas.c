#include <stdio.h>
#include <string.h>

// Fungsi untuk mendapatkan nilai resistor dari warna
int getResistorValueFromColor(char colors[][10]);

int main() {
    char input, c;
    int jumlahResistor;
    double totalResistansi = 0, nilaiResistor;

    printf("------PROGRAM PENGHITUNG RESISTANSI------\n");

    // Validasi input jumlah resistor
    printf("Input jumlah resistor: ");
    while (1) {
        if (scanf("%d", &jumlahResistor) != 1 || jumlahResistor <= 0) {
            while (getchar() != '\n'); // Hapus karakter tidak valid
            printf("Input tidak valid. Masukkan jumlah resistor yang benar (angka positif): ");
        } else {
            break; // Jika input valid, keluar dari loop
        }
    }

    // Loop untuk validasi input pilihan rangkaian (s/p)
    while (1) {
        printf("Rangkaian apa yang akan anda hitung resistansinya, Serial atau Paralel?\n");
        printf("Input 's' untuk serial\nInput 'p' untuk paralel\n");
        printf("Input (s/p): ");
        scanf(" %c", &input);

        if (input == 's' || input == 'S' || input == 'p' || input == 'P') {
            break; // Jika input valid ('s' atau 'p'), keluar dari loop
        } else {
            printf("Input tidak valid! Masukkan 's' untuk serial atau 'p' untuk paralel.\n");
            while (getchar() != '\n'); // Hapus karakter tidak valid
        }
    }

    // Proses perhitungan resistansi berdasarkan jenis rangkaian (serial/paralel)
    if (input == 's' || input == 'S') {
        for (int i = 1; i <= jumlahResistor; i++) {
            // Validasi input y/n untuk konfirmasi apakah nilai resistor sudah diketahui
            while (1) {
                printf("Apakah nilai resistor ke-%d sudah diketahui? (y/n): ", i);
                scanf(" %c", &c);
                if (c == 'y' || c == 'Y' || c == 'n' || c == 'N') {
                    break; // Jika input valid ('y' atau 'n'), keluar dari loop
                } else {
                    printf("Input tidak valid! Masukkan 'y' untuk ya atau 'n' untuk tidak.\n");
                    while (getchar() != '\n'); // Hapus karakter tidak valid
                }
            }

            if (c == 'y' || c == 'Y') {
                // Input nilai ohm secara langsung
                printf("Input nilai ohm resistor ke-%d: ", i);
                while (1) {
                    if (scanf("%lf", &nilaiResistor) != 1 || nilaiResistor <= 0) {
                        while (getchar() != '\n'); // Hapus karakter tidak valid
                        printf("Input tidak valid. Masukkan nilai positif untuk resistor ke-%d: ", i);
                    } else {
                        break;
                    }
                }
            } else {
                // Input nilai resistor berdasarkan kode warna
                char warna[3][10];
                printf("Masukkan tiga warna kode resistor ke-%d (misalnya: merah kuning hitam): ", i);
                scanf("%s %s %s", warna[0], warna[1], warna[2]);
                nilaiResistor = getResistorValueFromColor(warna); 
                
                if (nilaiResistor < 0) {
                    printf("Warna kode tidak valid.\n");
                    i--; // Ulangi input untuk resistor yang sama
                    continue;
                }
                printf("Nilai resistor berdasarkan warna: %.2lf ohm\n", nilaiResistor);
            }
            totalResistansi += nilaiResistor;
        }
        printf("Total resistansi dari rangkaian serial: %.2lf ohm\n", totalResistansi);
    } else if (input == 'p' || input == 'P') {
        for (int i = 1; i <= jumlahResistor; i++) {
            // Validasi input y/n untuk konfirmasi apakah nilai resistor sudah diketahui
            while (1) {
                printf("Apakah nilai resistor ke-%d sudah diketahui? (y/n): ", i);
                scanf(" %c", &c);
                if (c == 'y' || c == 'Y' || c == 'n' || c == 'N') {
                    break; // Jika input valid ('y' atau 'n'), keluar dari loop
                } else {
                    printf("Input tidak valid! Masukkan 'y' untuk ya atau 'n' untuk tidak.\n");
                    while (getchar() != '\n'); // Hapus karakter tidak valid
                }
            }

            if (c == 'y' || c == 'Y') {
                printf("Input nilai ohm resistor ke-%d: ", i);
                while (1) {
                    if (scanf("%lf", &nilaiResistor) != 1 || nilaiResistor <= 0) {
                        while (getchar() != '\n'); // Hapus karakter tidak valid
                        printf("Input tidak valid. Masukkan nilai positif untuk resistor ke-%d: ", i);
                    } else {
                        break;
                    }
                }
            } else {
                char warna[3][10];
                printf("Masukkan tiga warna kode resistor ke-%d (misalnya: merah kuning hitam): ", i);
                scanf("%s %s %s", warna[0], warna[1], warna[2]);
                nilaiResistor = getResistorValueFromColor(warna);

                if (nilaiResistor < 0) {
                    printf("Warna kode tidak valid.\n");
                    i--;
                    continue;
                }
                printf("Nilai resistor berdasarkan warna: %.2lf ohm\n", nilaiResistor);
            }
            totalResistansi += 1.0 / nilaiResistor;
        }
        totalResistansi = 1.0 / totalResistansi;
        printf("Total resistansi dari rangkaian paralel: %.2lf ohm\n", totalResistansi);
    }

    return 0;
}

// Fungsi untuk mendapatkan nilai resistor dari warna
int getResistorValueFromColor(char colors[][10]) {
    const char *colorCodes[] = {"hitam", "coklat", "merah", "jingga", "kuning", "hijau", "biru", "ungu", "abu-abu", "putih"};
    int colorValues[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int multiplier[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

    int digitPertama = -1, digitKedua = -1, nilaiMultiplier = -1;
    for (int i = 0; i < 10; i++) {
        if (strcmp(colors[0], colorCodes[i]) == 0) digitPertama = colorValues[i];
        if (strcmp(colors[1], colorCodes[i]) == 0) digitKedua = colorValues[i];
        if (strcmp(colors[2], colorCodes[i]) == 0) nilaiMultiplier = multiplier[i];
    }

    if (digitPertama == -1 || digitKedua == -1 || nilaiMultiplier == -1) {
        return -1; // Warna tidak valid
    }

    return (digitPertama * 10 + digitKedua) * nilaiMultiplier;
}
