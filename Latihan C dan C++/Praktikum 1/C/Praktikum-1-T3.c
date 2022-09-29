#include <stdio.h>

int main()
{
    int tanggal;
    int hari, bulan, tahun;

    printf("Masukkan Tanggal lahir anda (dd/mm/yyyy) \n");
    scanf("%d", &tanggal);
    printf("Tanggal lahir anda: %d \n", tanggal);
    printf("Dengan format lain \n");
    printf("Masukkan Tanggal lahir anda dengan format (dd/mm/yyyy) \n");
    scanf("%d/%d/%d", &hari, &bulan, &tahun);
    printf("Tanggal lahir anda: %d/%d/%d \n", hari, bulan, tahun);
    return 0;
}