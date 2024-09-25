#include <stdio.h>

int main() {
    int i, n = 10;
    unsigned long long faktorial = 1;
    printf("%-10s %20s\n", "n", "n!");
    for (i = 1; i <= n; i++) {
        faktorial *= i;
        printf("%-10d %20llu\n", i, faktorial);
    }
    return 0;
}
