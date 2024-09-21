#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2, real_part, imag_part;
    
    printf("Masukkan nilai A : ");
    scanf("%f", &a);
    printf("Masukkan nilai B : ");
    scanf("%f", &b);
    printf("Masukkan nilai C : ");
    scanf("%f", &c);

    if (a == 0){
        printf("Nilai A tidak boleh 0\n");
    } else {
        d = b * b - 4 * a * c;
        printf("Nilai determinan(d) adalah : %f\n", d);
        if (d == 0) {
            x1 = -b / (2 * a);
            x2 = x1;
            printf("Nilai x1 : %.2f\nNilai x2 : %.2f\n", x1, x2);
        } else if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Nilai x1 : %.2f\nNilai x2 : %.2f\n", x1, x2);
        } else {
            real_part = -b / (2 * a);
            imag_part = sqrt(-d) / (2 * a);
            printf("Akar-akar imajiner: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", real_part, imag_part, real_part, imag_part);
        }
    }
    return 0;
}