#include <stdio.h>
#include <math.h>

int main() {
    int a = 1, b = 1, c = 1, n = 10;
    //2, 4, 8, 16, 32
    for (int i = 1; i <= n; i++) {
        a *= 2;
        printf("%d", a);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");
    //1, 2, 9, 16, 25
    for (int i = 1; i <= n; i++) {
        b = i * i;
        printf("%d", b);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");
    //1, 4, 27, 64, 125
    for (int i = 1; i <= n; i++) {
        c = pow(i, 3);
        printf("%d", c);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
