#include <stdio.h>
#include <stdbool.h>

int prima(int n) {
    if (n <= 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int input;
    printf("Masukkan angka : ");
    scanf("%d", &input);
    if (prima(input)) {
        printf("%d termasuk bilangan prima\n");
    } else {
        printf("%d bukan bilangan prima\n");
    }
    return 0;
}
