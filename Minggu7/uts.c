#include <stdio.h>

int main() {
    char input;
    int r;
    double total = 0, data;
    printf("------PROGRAM PENGHITUNG RESISTANSI------\n");
    printf("Input jumlah resistor : ");
    scanf("%d", &r);
    printf("Rangkaian apa yang akan anda hitung resistansinya, Serial atau Paralel\n");
    printf("Input 's' untuk serial\n Input 'p' untuk paralel\n");
    printf("Input (s/p) : ");
    scanf(" %c", &input);
    if (input == 's' || input == 'S') {
        for (int i = 1; i <= r; i++) {
            printf("Input ohm resistor ke-%d : ", i);
            scanf("%lf", &data);
            total += data;
        }
        printf("Total resistansi dari rangkaian serial : %lf ohm\n", total);
    } else if (input == 'p' || input == 'P') {
        for (int i = 1; i <= r; i++) {
            printf("Input ohm resistor ke-%d : ", i);
            scanf("%lf", &data);
            total += 1.0 / data;
        }
        total = 1.0 / total;
        printf("Total resistansi dari rangkaian paralel : %lf ohm \n", total);
    } else {
        printf("Masukkan pilihan dengan benar!!!\n");
    }
    return 0;
}
