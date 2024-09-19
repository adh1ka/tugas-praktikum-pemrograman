#include <stdio.h> 

int main() {
    int a, b, c, d, x, y;
    printf("Input nilai a : ");
    scanf("%d", &a);
    printf("Input nilai b : ");
    scanf("%d", &b);
    printf("Input nilai c : ");
    scanf("%d", &c);
    printf("Input nilai d : ");
    scanf("%d", &d);

    x = (a > b)? a : b;
    y = (c > d)? c : d;

    printf("Nilai a lebih %s dari pada b\n", (a > b)? "besar" : "kecil");
    printf("Nilai c lebih %s dari pada d\n", (c > d)? "besar" : "kecil");
    printf("Jadi nilai maksimum adalah %d\n", (x > y)? x : y );
    return 0;
}