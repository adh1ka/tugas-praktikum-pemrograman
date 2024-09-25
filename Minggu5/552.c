#include <stdio.h>

int main() {
    int i, j, n = 10;
    printf("X \t"); //buat cetak x

    // looping cetak baris pertama
    for (i = 1; i <= n; i++){
        printf("%d \t", i);
    } 
    printf("\n");

    // looping cetak kolom pertama (paling kiri)
    for (i = 1; i <= n; i++){
        printf("%d \t", i);
        
        for (int j = 1; j <= n; j++) { 
            //looping cetak angka hasil perkalian
            printf("%d \t", i * j); 
        }
        printf("\n");
    }
    return 0;
}