#include <stdio.h>

int main()
{

    int banyak_produk;
    int arr_size = sizeof(harga_arr) / sizeof(harga_arr[0]);
    int counter = 0;
    long int total = 0;
    printf("Masukkan Banyak Produk Yang Dibeli:\n");
    scanf("%d", &banyak_produk);
    long int harga_arr[banyak_produk];
    for (int i = 0; i < banyak_produk; i++)
    {
        printf("Masukkan Harga Barang Ke-%d\n", (i + 1));
        scanf("%ld", &harga_arr[i]);
    }

    while (counter < arr_size)
    {
        total = total + harga_arr[counter];
        counter++;
    }

    printf("Total Pembelian: %ld", total);
    return 0;
}