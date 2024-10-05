#include <stdio.h>

int main() {
    char input, c;
    int r;
    double total = 0, data;
    
    printf("------PROGRAM PENGHITUNG RESISTANSI------\n");
    
    // Validasi input jumlah resistor
    printf("Input jumlah resistor: ");
    while (1) {
        if (scanf("%d", &r) != 1 || r <= 0) {
            // Jika input tidak valid, ulangi
            while ((c = getchar()) != '\n' && c != EOF); // Hapus karakter tidak valid
            printf("Input tidak valid. Masukkan jumlah resistor yang benar (angka positif): ");
        } else {
            break; // Jika input valid, keluar dari loop
        }
    }
    
    // Loop untuk validasi input pilihan (s/p)
    while (1) {
        printf("Rangkaian apa yang akan anda hitung resistansinya, Serial atau Paralel?\n");
        printf("Input 's' untuk serial\nInput 'p' untuk paralel\n");
        printf("Input (s/p): ");
        scanf(" %c", &input);
        
        if (input == 's' || input == 'S' || input == 'p' || input == 'P') {
            break; // Jika input valid ('s' atau 'p'), keluar dari loop
        } else {
            printf("Input tidak valid! Masukkan 's' untuk serial atau 'p' untuk paralel.\n");
            while ((c = getchar()) != '\n' && c != EOF); // Hapus karakter tidak valid
        }
    }

    // Proses perhitungan berdasarkan input (s/p)
    if (input == 's' || input == 'S') {
        for (int i = 1; i <= r; i++) {
            // Validasi input untuk nilai resistor
            printf("Input ohm resistor ke-%d: ", i);
            while (1) {
                if (scanf("%lf", &data) != 1 || data <= 0) {
                    // Jika input tidak valid, ulangi
                    while ((c = getchar()) != '\n' && c != EOF); // Hapus karakter tidak valid
                    printf("Input tidak valid. Masukkan nilai positif untuk resistor ke-%d: ", i);
                } else {
                    break; // Jika input valid, keluar dari loop
                }
            }
            total += data;
        }
        printf("Total resistansi dari rangkaian serial: %lf ohm\n", total);
    } else if (input == 'p' || input == 'P') {
        for (int i = 1; i <= r; i++) {
            // Validasi input untuk nilai resistor
            printf("Input ohm resistor ke-%d: ", i);
            while (1) {
                if (scanf("%lf", &data) != 1 || data <= 0) {
                    // Jika input tidak valid, ulangi
                    while ((c = getchar()) != '\n' && c != EOF); // Hapus karakter tidak valid
                    printf("Input tidak valid. Masukkan nilai positif untuk resistor ke-%d: ", i);
                } else {
                    break; // Jika input valid, keluar dari loop
                }
            }
            total += 1.0 / data;
        }
        total = 1.0 / total;
        printf("Total resistansi dari rangkaian paralel: %lf ohm\n", total);
    }
    
    return 0;
}
