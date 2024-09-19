		#include <stdio.h>

		int main() {

			char namabarang[3][24] = {" CPU 850Mhz", " RAM 128Mhz", " MoboPIII" };
			int harga[] = {700000, 380000, 800000};
			float diskon[] = {0.05, 0.1, 0.08};
			float hargafinal[] = {0, 0, 0};
			int nomor;

			printf("No \t Nama Barang \t Harga \t Diskon(Persen)\n");
			for (int i = 0; i <= 2; i++) {
				printf("%d  \t  %s  \t  %d  \t  %.2f\n", i, namabarang[i], harga[i], diskon[i] * 100);
			}

			printf("Mau order barang nomor berapa sir?\nBarang nomor : ");
			if (scanf("%d", &nomor) != 1) {
				printf("Input tidak valid.\n");
				return 1;
			}

			// Memeriksa apakah nomor valid
			if (nomor < 0 || nomor > 2) {
				printf("Nomor barang tidak valid. Masukkan nomor antara 0 - 2.\n");
			} else {
				// Menghitung harga final dengan diskon
				hargafinal[nomor] = harga[nomor] - (harga[nomor] * diskon[nomor]);
				
				// Menampilkan hasil
				printf("Harga final untuk barang nomor %d adalah: %.2f\n", nomor, hargafinal[nomor]);
			}
				printf("Mau order barang nomor berapa sir?\nBarang nomor : ");
			if (scanf("%d", &nomor) != 1) {
				printf("Input tidak valid.\n");
				return 1;
			}
			return 0;
		}
