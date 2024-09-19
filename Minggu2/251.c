    #include <stdio.h>

    int main() {
        float fahrenheit, celsius;

        printf("Input fahrenheit : ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)  * 5 / 9;
        printf("\n %f fahrenheit sama dengan %f celsius\n", fahrenheit, celsius);

        return 0;
    }