#include <stdio.h>

int main() {
    int a, b, c, d;
    double e, f, g, h;
    a = 75; b = 259; c = 3315; d = 12345;
    e = 75.07; f = 259.055; g = 3315.3310; h = 12345.67890;
    printf("a = %7d \n b = %7d \n c = %7d \n d = %7d \n\n", a, b, c, d);
    printf ("e = %12.5f \n f = %12.5f \n g = %12.5f \n h = %12.5f \n", e, f, g, h);
    return 0;
}