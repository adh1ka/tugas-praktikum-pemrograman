#include <stdio.h>

void cetak_array(const int array[][8], const int baris, const int kolom) {
    for (int row = 0; row < baris; row++){
        for (int col = 0; col < kolom; col++){
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}

void cetak_genap(const int array[][8], const int baris, const int kolom) {
    for (int row = 0; row < baris; row++) {
        for(int col = 0; col < kolom; col++) {
            if (array[row][col] % 2 == 0) {
                printf("%d ", array[row][col]);
            } else {
                continue;
            }
        }
        printf("\n"); 
    }
}

void cetak_max(const int array[][8], const int baris, const int kolom) {
    int max = 0;
    for (int row = 0; row < baris; row++) {
        for (int col = 0; col < kolom; col++) {
            if (array[row][col] >= max) {
                max = array[row][col];
            } else {
                continue;
            }
        }
    }
    printf("%d \n", max);
}

void cetak_sort(int array[][8], int baris, int kolom) {
    int swap;
    float total = 0;
    float rata = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            for (int k = 0; k < kolom; k++) {
                if (array[i][j] < array [i][k]) {
                    swap = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = swap;
                }
            }
        }
    }  
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            printf("%d ", array[i][j]);
            total += array[i][j];
        }
    printf("\n");
    }
}

void cetak_rata(int array[][8], int baris, int kolom) {
    float total = 0, rata = 0;
    for (int row = 0; row < baris; row++) {
        float total = 0;
        for (int col = 0; col < kolom; col++) {
            total += array[row][col];
        }
            rata = total / kolom;
            printf("Rata dari baris %d adalah %.2f\n", row + 1,  rata);
    }
}

void cetak_median(int array[][8], int baris, int kolom) {
    int temp[8];
    float median;
    for (int row = 0; row < baris; row++) {
        for (int col = 0; col < kolom; col++) {
            temp[col] = array[row][col];
        }
        for (int i = 0; i < kolom; ++i) {
            for (int j = i + 1; j < kolom; j++) {
                if (temp[i] > temp[j]) {
                    int swap = temp[i];
                    temp[i] = temp[j];
                    temp[j] = swap;
                }
            }
        }
        if (kolom % 2 == 0) {
            median = (temp[kolom / 2 - 1] + temp[kolom / 2]) / 2;
        } else {
            median = temp[kolom / 2];
        }
        printf("Nilai tengah dari baris %d adalah %f \n", row + 1, median);
    }
}

int main() {
    const int baris = 2;
    const int kolom = 8;
    int array[2][8] = {{1, 2, 3, 4, 5, 6, 7, 8}, {7, 8, 4, 2, 9, 3, 1, 6}};
    printf("CETAK ARRAY\n");
    cetak_array(array, baris, kolom);
    printf("CETAK GENAP ARRAY \n");
    cetak_genap(array, baris, kolom);
    printf("CETAK ANGKA TERBESAR\n");
    cetak_max(array, baris, kolom);
    printf("SORT ANGKA TERKECIL \n");
    cetak_sort(array, baris, kolom);
    printf("RATA \n");
    cetak_rata(array, baris, kolom);
    printf("NILAI TENGAH \n");
    cetak_median(array, baris, kolom);

    return 0;

}
