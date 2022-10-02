#include <stdio.h>
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    long int total_belanja;
    long int diskon;
    long int diskon_belanja;

    printf("Masukkan Total Belanjaan! \n");
    scanf("%d", &total_belanja);
    printf("Total Belanjaan dan Diskon adalah \n");
    diskon = total_belanja * 0.1;
    diskon_belanja = total_belanja - diskon;
    printf("Total Belanja: Rp.%d \n", total_belanja);
    printf("Diskon: Rp.%d \n", diskon);
    printf("Belanja dan Diskon= Rp.%d \n", diskon_belanja);
    return 0;
}