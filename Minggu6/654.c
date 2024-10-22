#include <stdio.h>

float suhu(float t, char s, char d) {
    float result;

    if (s == 'C' && d == 'F') {
        result = (t * 9.0 / 5.0) + 32;
    } else if (s == 'C' && d == 'R') {
        result = t * 4.0 / 5.0;
    } else if (s == 'F' && d == 'C') {
        result = (t - 32) * 5.0 / 9.0;
    } else if (s == 'F' && d == 'R') {
        result = (t - 32) * 4.0 / 9.0;
    } else if (s == 'R' && d == 'C') {
        result = t * 5.0 / 4.0;
    } else if (s == 'R' && d == 'F') {
        result = (t * 9.0 / 4.0) + 32;
    } else {
        result = t;
    }
    return result;
}

int main() {
    float t, hasil;
    char s, d;

    printf("Masukkan temperatur: ");
    scanf("%f", &t);

    printf("Masukkan suhu asal (C/F/R): ");
    scanf(" %c", &s);

    printf("Masukkan suhu tujuan (C/F/R): ");
    scanf(" %c", &d);

    hasil = suhu(t, s, d);
    printf("Hasil konversi: %.2f %c\n", hasil, d);
    return 0;
}
