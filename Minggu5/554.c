#include <stdio.h>

int main() {
    int i, n = 10;
    float celsius, fahrenheit, reamur, kelvin;

    printf("No \t Celcius \t  Fahrenheit \t Reamur \t Kelvin\n");

    for (i = 0; i <= n; i++) {
        celsius = i * 10;
        fahrenheit = (celsius * 9 / 5) + 32;
        reamur = celsius * 4 / 5;
        kelvin = celsius + 273.15;
        printf("%-4d \t %-5.1f \t \t %-6.1f \t %-6.1f \t %-6.1f\n", i + 1, celsius, fahrenheit, reamur, kelvin);
    }
    return 0;
}