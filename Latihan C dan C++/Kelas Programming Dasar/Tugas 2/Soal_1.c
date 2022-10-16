#include <stdio.h>
#include <unistd.h>
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

float hitung_daya(float, float); // Define Function

int main()
{
    int w; // Energi
    int t; // Waktu
    float hasil;
    printf("Masukkan nilai W (Energi): \n");
    scanf("%d", &w);
    printf("Masukkan nilai t (Waktu): \n");
    scanf("%d", &t);
    hasil = hitung_daya(w, t);
    printf("Daya yang diperoleh adalah: %0.2f \n", hasil);
    system("pause"); // Untuk Cek Hasil agar program tidak tertutup
    return 0;
}

float hitung_daya(float w, float t)
{
    return (w / t);
}

/*
1. Buatlah fungsi untuk menghitung daya listrik jika diketahui nilai W
(energi) dan t (waktu) sebagai parameter fungsi. Fungsi akan
menghitung daya dengan rumus daya (P) = W/t. Fungsi akan
mengembalikan nilai daya (float). Buat fungsi main untuk
memanggil fungsi tersebut.
*/