#include <stdio.h>
#include <time.h>

// Fungsi gettime untuk menghitung waktu eksekusi loop
double gettime(char type, int n) {
    clock_t start, end;

    if (type == 'i') {  // Loop dengan int biasa
        int i;
        start = clock();
        for (i = 0; i < n; i++) {
            // Loop kosong
        }
        end = clock();
    } else if (type == 'r') {  // Loop dengan register int
        register int i;
        start = clock();
        for (i = 0; i < n; i++) {
            // Loop kosong
        }
        end = clock();
    } else {
        printf("Tipe tidak valid. Gunakan 'i' untuk int atau 'r' untuk register.\n");
        return -1;
    }

    // Mengembalikan waktu eksekusi dalam detik
    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main() {
    int n = 100000000;  // Jumlah iterasi

    // Mengukur waktu untuk loop dengan int
    double time_int = gettime('i', n);

    // Mengukur waktu untuk loop dengan register
    double time_register = gettime('r', n);

    // Menampilkan hasil
    printf("Waktu eksekusi loop dengan int: %.6f detik\n", time_int);
    printf("Waktu eksekusi loop dengan register: %.6f detik\n", time_register);

    return 0;
}
