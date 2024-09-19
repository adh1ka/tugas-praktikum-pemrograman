#include <stdio.h> 

int main() {
    int a, b, c, d, hasil_A, hasil_B, hasil_C, hasil_D, hasil_E;
    printf("Masukkan nilai a : ");
    scanf("%d", &a);
    printf("Masukkan nilai b : ");
    scanf("%d", &b);
    printf("Masukkan nilai c : ");
    scanf("%d", &c);
    printf("Masukkan nilai d : ");
    scanf("%d", &d);

    hasil_A = (a > b) && (c < d) || (a == b);
    hasil_B = (a == b) || (c == d) && (a < b);
    hasil_C = (a <= c) && (b >= d) || (a == d);
    hasil_D = (a >= d) || (b <= c) && (c == d);
    hasil_E = (a != b) || (c > d) || (a != d);
    printf("A. (%d > %d) && (%d < %d) || (%d == %d) = %d\n", a, b, c, d, a, b, hasil_A);
    printf("B. (%d == %d) || (%d == %d) && (%d < %d) = %d\n", a, b, c, d, a, b, hasil_B);
    printf("C. (%d <= %d) && (%d >= %d) || (%d == %d) = %d\n", a, c, b, d, a, d, hasil_C);
    printf("D. (%d >= %d) || %d <= %d) && (%d == %d) = %d\n", a, d, b, c, c, d, hasil_D);
    printf("E. (%d != %d) || (%d > %d) || (%d != %d) = %d\n", a, b, c, d, a, d, hasil_E);
    
    return 0;
}