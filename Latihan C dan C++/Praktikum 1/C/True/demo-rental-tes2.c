#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

struct data_rental_game//S3
{
    char nama_pinjam [20];
    char tanggal_pinjam [20];
    int plhn_game_plh_pkt;
    long int harga_paket;
    int lama_paket;
};

struct data_list_game//S4
{
    int plhn_game;
    char game_dipilih_1[50];
    char game_dipilih_2[50];
    char game_dipilih_3[50];
    
};


void rental_game_menu();// Sistem Rental Game
void rental_game_harga();
void rental_game_peraturan();
void rental_game_hasil_1();


int main (){
    rental_game_menu();


    system("pause");
    return 0;
}



void rental_game_menu(){
    system("CLS");
    struct data_list_game s4;
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf("1. Rental Game \n");
    printf("2. Harga \n");
    printf("3. Perataturan\n");
    printf("4. Kembali\n");
    printf("Pilih salah satu untuk mengakses \n");
    scanf("%d", &s4.plhn_game);
    switch (s4.plhn_game)
    {
    case 1 :
        rental_game_rental();
        break;
    case 2 :
        rental_game_harga();
        break;
    case 3 :
        rental_game_peraturan();
        break;
    case 4 :
        rental_game_menu();
        break;
    default:
        break;
    }
}// Sistem Rental Film










void rental_game_harga(){
    system("CLS");
    int pilihan;
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Game                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 20k Setiap Game 3 Hari  \n");
    printf("2. Paket 2: 50k Setiap Game 7 Hari\n");
    printf("3. Paket 2: 90k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
    printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("====================================================================\n");
    printf("1. Kembali Ke Menu\n");
    printf("====================================================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1 :
        rental_game_menu();
        break;
    default:
        break;
    }
}




void rental_game_peraturan(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               Peraturan                |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf("1. Dilarang Merusak Kaset Game (Apabila terbukti melakukan akan dikenakan sanksi 2X harga game) \n");
    printf("2. Jaga Kaset Game Agar Tidak Lecet \n");
    printf("3. Apabila Telat Mengembalikan Akan Dikenakan Sanksi 20K Setiap Hari\n");
    printf("4. Maksimal Penyewaan 3 Game Secara Bersamaan\n");
    printf("5. Tidak Bisa Menyewa Game Yang Sama Apabila Sudah Pernah Disewa Sebelum Waktu Cooldown Habis\n");
    printf("Pilih salah satu untuk mengakses \n");
    printf("==========================================\n");
    printf("1. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1 :
        rental_game_menu();
        break;
    default:
        break;
    }

}



void rental_game_hasil_1(){
    struct data_rental_game s3;
    struct data_list_game s4;
    
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s \n", s3.nama_pinjam);
    printf(" Tanggal Pinjam: %s\n", s3.tanggal_pinjam);
    printf(" Jenis Paket: \n" );
    printf(" Lama Pinjam: %d Hari\n", s3.lama_paket);
    printf(" Game Yang Dipilih: %s \n", s4.game_dipilih_1);
    printf(" Harga Sewa: Rp. %d \n", s3.harga_paket);
    printf(" Diskon: 0 \n");
    printf(" Total Biaya: Rp. %d\n", s3.harga_paket);
    printf("==========================================\n");
    printf("\n \n");
    printf("1. Kembali Ke Main Menu \n");
    printf("2. Exit \n");
}