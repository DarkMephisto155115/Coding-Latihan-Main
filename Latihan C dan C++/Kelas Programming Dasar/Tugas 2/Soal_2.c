#include <stdio.h>
#include <unistd.h>
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

float total_biaya(float, float); // Define Function

int main()
{
    int biaya = 3000; // Biaya
    int t;            // Waktu
    float hasil;
    printf("Masukkan Lama Pemakaian: \n");
    scanf("%d", &t);
    hasil = total_biaya(t, biaya);
    printf("Total Tarif Internet: Rp. %0.2f \n", hasil);
    system("pause"); // Untuk Cek Hasil agar program tidak tertutup
    return 0;
}

float total_biaya(float t, float biaya)
{
    return (t * biaya);
}

/*
2. Buatlah fungsi untuk menghitung tarif internet berdasarkan durasi
pemakaian (t) sebagai parameter fungsi. Fungsi akan menghitung
total biaya pemakaian internet dengan rumus biaya = t*3000.
Fungsi akan mengembalikan total biaya (float). Buat fungsi main
untuk memanggil fungsi tsb.
*/