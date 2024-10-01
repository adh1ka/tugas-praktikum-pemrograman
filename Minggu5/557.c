#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void print_factorial_table(int n) {
    printf("%-4s %-30s %20s\n", "n!", "Ekspresi Perkalian", "Hasil Faktorial");
    printf("-------------------------------------------------------------\n");
    
    for (int i = 1; i <= n; i++) {
        printf("%-4d ", i);
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j != i) {
                printf("x");
            }
        }
        printf("%*s", 30 - (2 * i - 1), ""); 
        unsigned long long fact = factorial(i);
        printf("%20llu\n", fact);
    }
}

int main() {
    int n = 10;
    print_factorial_table(n);
    return 0;
}
