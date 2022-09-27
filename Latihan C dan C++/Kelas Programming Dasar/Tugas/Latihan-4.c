#include <stdio.h>
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    long int total_belanja;
    long int diskon;
    long int diskon_belanja;
    int cekhasil;
    printf("Masukkan Total Belanjaan! \n");
    scanf("%d", &total_belanja);
    printf("Total Belanjaan dan Diskon adalah \n");
    diskon = total_belanja * 0.1;
    diskon_belanja = total_belanja - diskon;
    printf("Total Belanja: %d \n", total_belanja);
    printf("Diskon: %d \n", diskon);
    printf("Belanja dan Diskon= %d \n", diskon_belanja);
    scanf("%d", &cekhasil);
    return 0;
}