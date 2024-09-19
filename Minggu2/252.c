#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;
    
    printf("Input x : ");
    scanf("%f", &x);

    y = 3 * (x * x) + (6 * x) + 9;
    z = (2 * (y * y) + 5 * (x * x)) / (9 * y);


    printf("X = %f y = %f z = %f \n", x, y, z);  
      
    return 0;
}