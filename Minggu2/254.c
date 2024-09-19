#include <stdio.h>

int main() {
    int jam, menit, konversi;

    do {
        printf("Inputkan jam dan menit dengan format jam:menit : ");
        scanf("%d:%d", &jam, &menit);
        
        if (menit >= 59){
            printf("Tolong masukkan menit dengan benar\n");
        }
    } while (menit >=59);

    konversi = (jam * 60) + menit;      
    printf("Jam %d:%d setara dengan %d menit\n", jam, menit, konversi);

    return 0;
}