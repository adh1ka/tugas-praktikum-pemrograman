#include <stdio.h>

int main() {
    float rata;
    int nilai[3][4] = {{81, 50, 89, 77}, {90, 83, 55, 70}, {62, 87, 65, 92}};

    printf("No. Mhs \t Rata-rata \n");
    for (int i = 0; i <= 3; i++) {
        rata = (nilai[0][i] + nilai[1][i] + nilai[2][i]) / 3;
        printf("%d\t\t", i + 1);
        printf("%.2f\n", rata);
    }
    return 0;
}
