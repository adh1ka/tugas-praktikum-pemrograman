#include <stdio.h>
#include <stdbool.h>

int prima(int n) {
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
}

int main() {
    int n;
    printf("Masukkan nilai maksimum : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Masukkan bilangan bulat!!!!\n");
    } else {
        for (int i = 1; i <= n; i++) {
        if (prima(i)) {
            printf("%d", i);
            if (i < n - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");
    }
    
    return 0;
}