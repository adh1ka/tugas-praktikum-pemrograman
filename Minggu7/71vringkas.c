#include <stdio.h>

void proses_array(int array[][8], int baris, int kolom, const char *aksi) {
    if (strcmp(aksi, "cetak") == 0) {
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    } else if (strcmp(aksi, "genap") == 0) {
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                if (array[i][j] % 2 == 0) {
                    printf("%d ", array[i][j]);
                }
            }
            printf("\n");
        }
    } else if (strcmp(aksi, "max") == 0) {
        int max = array[0][0];
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                if (array[i][j] > max) {
                    max = array[i][j];
                }
            }
        }
        printf("Nilai maksimum: %d\n", max);
    } else if (strcmp(aksi, "rata") == 0) {
        for (int i = 0; i < baris; i++) {
            float total = 0;
            for (int j = 0; j < kolom; j++) {
                total += array[i][j];
            }
            float rata = total / kolom;
            printf("Rata-rata baris %d: %.2f\n", i + 1, rata);
        }
    }
}

void cetak_median(int array[][8], int baris, int kolom) {
    int temp[8];
    float median;
    for (int row = 0; row < baris; row++) {
        for (int col = 0; col < kolom; col++) {
            temp[col] = array[row][col];
        }

        for (int i = 0; i < kolom - 1; i++) {
            for (int j = i + 1; j < kolom; j++) {
                if (temp[i] > temp[j]) {
                    int swap = temp[i];
                    temp[i] = temp[j];
                    temp[j] = swap;
                }
            }
        }

        if (kolom % 2 == 0) {
            median = (temp[kolom / 2 - 1] + temp[kolom / 2]) / 2.0;
        } else {
            median = temp[kolom / 2];
        }
        printf("Nilai median baris %d: %.2f\n", row + 1, median);
    }
}

int main() {
    const int baris = 2;
    const int kolom = 8;
    int array[2][8] = {{1, 2, 3, 4, 5, 6, 7, 8}, {7, 8, 4, 2, 9, 3, 1, 6}};
    
    printf("CETAK ARRAY\n");
    proses_array(array, baris, kolom, "cetak");
    
    printf("CETAK GENAP ARRAY\n");
    proses_array(array, baris, kolom, "genap");
    
    printf("CETAK ANGKA TERBESAR\n");
    proses_array(array, baris, kolom, "max");
    
    printf("RATA-RATA\n");
    proses_array(array, baris, kolom, "rata");
    
    printf("NILAI MEDIAN\n");
    cetak_median(array, baris, kolom);

    return 0;
}
