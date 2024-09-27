#include <stdio.h>

int main() {
    int i, n = 10;
    unsigned long long faktorial = 1;
    printf("%-10s %10s\n", "n", "n!");
    
    for (i = 1; i <= n; i++) {
        faktorial *= i;
        printf("%-10d %10llu\n", i, faktorial);
    }
    return 0;
}
