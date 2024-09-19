#include <stdio.h>  // Pastikan untuk memasukkan header yang diperlukan
#include <stdlib.h>
int main() {
    float harga, jumlah, total, hasil;
    
    system("clear"); // Membersihkan layar, hanya relevan jika menggunakan Turbo C/C++
    
    harga = 132.055;
    jumlah = 50;

    total = harga * jumlah; 
    hasil = total / jumlah;

    printf("Harga Total = %f\n\n", total); 
    printf("Hasil Pembagian = %f", hasil);

    getchar();  // Digunakan untuk menunggu input dari pengguna sebelum keluar dari program
    return 0;
}
 