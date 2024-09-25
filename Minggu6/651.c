#include <stdio.h>

int kabisat(int tahun) {
    if (tahun % 400 == 0){
        return 1;
    } else if (tahun % 100 == 0) {
        return 0;
    } else if (tahun % 4 == 0) {
        return 1; 
    } else {
        return 0;
    }
}
int main() {
    int hasil, input;
    printf("Masukkan tahun : ");
    scanf("%d", &input);
    hasil = kabisat(input);
    printf("Apakah tahun %d termasuk tahun kabisat : %d\n", input, hasil);
    return 0;
}
