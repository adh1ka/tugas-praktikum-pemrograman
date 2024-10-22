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

void cetak_sort(const int array[][8], const int baris, const int kolom) {
   
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
    return 0;

}
