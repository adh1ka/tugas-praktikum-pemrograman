#include <stdio.h>

int main() {
    int num, reversed_num = 0;
    printf("Masukkan bilangan bulat : ");
    scanf("%d", &num);
    while (num > 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num = num / 10;
    }
    printf("Hasil setelah dibalik : %d \n", reversed_num);
    return 0;
}