//BELUM SELESAI YA CIK

#include <stdio.h>

float suhu(float num, char src, char dest) {
    if (src == 'C' || src == 'c') {
        if (dest == 'f' || dest == 'F') {
            return 
        } else if (dest == 'r' || dest == 'R') {

        } else {

        }
    } else if (src == 'r' || src == 'R') {
        if (dest == 'c' || dest == 'C') {

        } else if (dest == 'f' || dest == 'F') {

        } else {

        }
    } else if (src == 'f' || src == 'F') {
        if (dest == 'r' || dest == 'R') {

        } else if (dest == 'c' || dest == 'C') {

        } else {

        }
    } else {

    }
}

int main() {
    float nilai_source;
    char suhu_src, suhu_dest;
    printf("Masukkan suhu sumber : ");
    scanf("%d %c", &nilai_source, &suhu_src);
    printf("Masukkan suhu tujuan : ");
    scanf("%c", &suhu_dest);
    return 0;
}
