#include <stdio.h>

int main() {
    float a, b, hasil;
    char operator;
    printf("Input angka pertama : ");
    scanf("%d", &a);
    printf("Masukkan operator (+, -, *, /) : ");
    scanf("%c", &operator);
    switch(operator) {
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b; break;
        case '/': hasil = a / b; break;
        default: printf("Invalid operator");
    }
    return 0;
}