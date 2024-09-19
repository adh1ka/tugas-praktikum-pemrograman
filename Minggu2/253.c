#include <stdio.h>
#define PI 3.14

int main() {
    float jari, keliling, luas;
    printf("Input jari-jari lingkaran : ");
    scanf("%f", &jari);

    keliling = 2 * PI * jari;
    luas = PI * jari * jari;
    printf("Keliling lingkaran dengan jari-jari %f adalah %f\n", jari, keliling);
    printf("Luas lingkaran dengan jari-jari %f adalah %f\n", jari, luas);
    return 0;
}