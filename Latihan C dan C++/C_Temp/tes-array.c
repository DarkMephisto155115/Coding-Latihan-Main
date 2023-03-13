#include <stdio.h>
#include <unistd.h>

int main (){
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama :  ");
    printf("Tanggal Pinjam: \n");
    printf(" Jenis Paket:  \n");
    printf(" Lama Pinjam:  Hari\n");
    printf(" Banyak Game Yang Disewa: ");
    for (int i = 0; i < 5; i++)
    {
        printf("nama game %d", i+1);
        if (i < 4)
        {
            printf(", ");
        }

    }
    printf("\n");
    printf(" Game Yang Dipilih:  \n");
    printf(" Harga Sewa: Rp. \n");
    printf(" Diskon: \n");
    printf(" Total Biaya: Rp. \n");
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    return 0;
}
