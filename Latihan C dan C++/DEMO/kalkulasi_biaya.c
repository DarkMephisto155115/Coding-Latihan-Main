#include <stdio.h>

int Kalkulasi_Biaya(long int harga_sewa, int lama_sewa, int banyak_sewa)
{
    long int biaya = (harga_sewa * lama_sewa) * banyak_sewa;
    long int diskon;
    long int total_biaya;
    if (banyak_sewa == 1)
    {
        return biaya;
    }
    else if (banyak_sewa == 2)
    {
        diskon = biaya * 0.1;
        total_biaya = biaya - diskon;
        return total_biaya;
    }
    else
    {
        diskon = biaya * 0.2;
        total_biaya = biaya - diskon;
        return total_biaya;
    }
}

int Kalkulasi_Diskon(long int harga_sewa, int lama_sewa, int banyak_sewa)
{
    long int biaya = (harga_sewa * lama_sewa) * banyak_sewa;
    long int diskon;
    if (banyak_sewa == 1)
    {
        return 0;
    }
    else if (banyak_sewa == 2)
    {
        diskon = biaya * 0.1;
        return diskon;
    }
    else
    {
        diskon = biaya * 0.2;
        return diskon;
    }
}

int main()
{
    char nama_diskon_multiplayer[10][99] = {};
    long int biaya;
    long int total_biaya;
    long int diskon_biaya;
    int lama_sewa;
    int banyak_sewa;
    printf("Nama 1:");
    scanf("%s", nama_diskon_multiplayer[0]);
    printf("Nama 1: %s\n", nama_diskon_multiplayer[0]);
    printf("Nama 2:");
    scanf("%s", nama_diskon_multiplayer[1]);
    printf("Nama 2: %s\n", nama_diskon_multiplayer[1]);
    printf("Nama 3:");
    scanf("%s", nama_diskon_multiplayer[2]);
    printf("Nama 3: %s\n", nama_diskon_multiplayer[2]);
    printf("Nama: %s,%s,%s", nama_diskon_multiplayer[0], nama_diskon_multiplayer[1], nama_diskon_multiplayer[2]);
    printf("Biaya:");
    scanf("%ld", &biaya);
    printf("Lama Sewa:");
    scanf("%d", &lama_sewa);
    printf("Banyak Sewa:");
    scanf("%d", &banyak_sewa);
    total_biaya = Kalkulasi_Biaya(biaya, lama_sewa, banyak_sewa);
    diskon_biaya = Kalkulasi_Diskon(biaya, lama_sewa, banyak_sewa);
    printf("Diskon: %ld \n", diskon_biaya);
    printf("Biaya: %ld", total_biaya);
    return 0;
}