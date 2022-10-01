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
void rental_game_rental();
void rental_game_harga();
void rental_game_peraturan();
void rental_game_pilih_paket();
void rental_game_pilih_game_1();
void rental_game_pilih_game_2();
void rental_game_pilih_game_3();
void rental_game_hasil_1();
void rental_game_hasil_2();
void rental_game_hasil_3();

int main (){
    rental_game_menu();


    system("pause");
    return 0;
}



void rental_game_menu(){
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
        
        break;
    case 3 :
        
        break;
    case 4 :
        
        break;
    default:
        break;
    }
}// Sistem Rental Film






void rental_game_rental(){
    struct data_rental_game s3;
    
    printf("Nama Peminjam: \n");
    scanf("%s", s3.nama_pinjam);
    printf("Tanggal Pinjam (dd/mm/yyyy): \n");
    scanf("%s", s3.tanggal_pinjam);
    rental_game_pilih_paket();
    printf("1. Main Menu ");
    printf("2. Exit: ");
}

void rental_game_pilih_paket(){
    struct data_rental_game s3;
    printf("Pilih Paket: ");
    scanf("%d", &s3.plhn_game_plh_pkt);
    switch (s3.plhn_game_plh_pkt)
    {
    case 1 :
        s3.harga_paket = 20000;
        s3.lama_paket = 3;
        return rental_game_hasil_1();
        break;
    case 2 :
        
        break;
    case 3 :
        
        break;
    case 4 :
        
        break;
    case 5 :
        
        break;
    case 6 :
        
        break;
    default:
        break;
    }
}



void rental_game_harga(){
    int pilihan;
    printf("==========================================\n");
    printf("|                 Harga                  |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf("1. Paket 1: 20k Setiap Game 3 Hari  \n");
    printf("2. Paket 2: 50k Setiap Game 7 Hari\n");
    printf("3. Paket 2: 90k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
    printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("==========================================\n");
    printf("1. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1 :
        
        break;
    case 2 :
        
        break;
    case 3 :
        
        break;
    case 4 :
        
        break;
    default:
        break;
    }
}




void rental_game_peraturan(){
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
        
        break;
    case 2 :
        
        break;
    case 3 :
        
        break;
    case 4 :
        
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

void rental_game_pilih_game_1(){
    struct data_list_game s4;
    printf("Masukkan No. Game Yang Ingin di Sewa \n");
    scanf("%d", s4.plhn_game);
    switch (s4.plhn_game)
    {
    case 1:
        s4.game_dipilih_1[50]="Red Dead Redemption 2";
        rental_game_pilih_game_2();
        break;
    case 2:
        s4.game_dipilih_1[50]="Grand Theft Auto V";
        break;
    case 3:
        s4.game_dipilih_1[50]="The Last Of Us Remastered";
        break;
    case 4:
        s4.game_dipilih_1[50]="God Of War";
        break;
    case 5:
        s4.game_dipilih_1[50]="The last Of Us Part 2";
        break;
    case 6:
        s4.game_dipilih_1[50]="Persona 5 Royal";
        break;
    case 7:
        s4.game_dipilih_1[50]="Metal Geat Solid V";
        break;
    case 8:
        s4.game_dipilih_1[50]="Uncharted 4";
        break;
    case 9:
        s4.game_dipilih_1[50]="Journey";
        break;
    case 10:
        s4.game_dipilih_1[50]="Bloodborne";
        break;
    case 11:
        s4.game_dipilih_1[50]="Undertale";
        break;
    case 12:
        s4.game_dipilih_1[50]="The Witcher 3";
        break;
    case 13:
        s4.game_dipilih_1[50]="Divinity Original Sin 2";
        break;
    case 14:
        s4.game_dipilih_1[50]="Shadow Of The Colossus";
        break;
    case 15:
        s4.game_dipilih_1[50]="Celeste";
        break;
    case 16:
        s4.game_dipilih_1[50]="Inside";
        break;
    case 17:
        s4.game_dipilih_1[50]= "Nier Automata";
    case 18:
        s4.game_dipilih_1[50]="Resident Evil 2";
        break;
    case 19:
        s4.game_dipilih_1[50]="Dragon Quest XI";
        break;
    case 20:
        s4.game_dipilih_1[50]="Diablo 3";
        break;
    case 21:
        s4.game_dipilih_1[50]="Shovel Knight";
        break;
    case 22:
        s4.game_dipilih_1[50]="Reyman Legends";
        break;
    case 23:
        s4.game_dipilih_1[50]="Fez";
        break;
    case 24:
        s4.game_dipilih_1[50]="Monster Hunter World: Iceborne";
        break;
    case 25:
        s4.game_dipilih_1[50]="Sekiro: Shadow Die Twice";
        break;
    case 26:
        s4.game_dipilih_1[50]="Titan Fall 2";
        break;
    case 27:
        s4.game_dipilih_1[50]="Elden Ring";
        break;
    case 28:
        s4.game_dipilih_1[50]="Dark Soul III";
        break;
    case 29:
        s4.game_dipilih_1[50]="Demon Soul";
        break;
    case 30:
        s4.game_dipilih_1[50]="It Takes Two";
        break;
    default:
        printf("Error");
        system("pause");
        break;
    }
    return rental_game_pilih_game_2();
}




void rental_game_pilih_game_2(){
    struct data_list_game s4;
    printf("Game yang dipilih: %s \n", s4.game_dipilih_1);
    printf("Ingin Menyewa Game Yang Lain?");
    printf("1. Tambah Game");
    printf("2. Cukup");
    scanf("%d", s4.plhn_game);
    if (s4.plhn_game == 1)
    {
    printf("Masukkan No. Game Yang Ingin di Sewa");
    scanf("%d", s4.plhn_game);
    switch (s4.plhn_game)
    {
    case 1:
        s4.game_dipilih_2[50]="Red Dead Redemption 2";
        break;
    case 2:
        s4.game_dipilih_2[50]="Grand Theft Auto V";
        break;
    case 3:
        s4.game_dipilih_2[50]="The Last Of Us Remastered";
        break;
    case 4:
        s4.game_dipilih_2[50]="God Of War";
        break;
    case 5:
        s4.game_dipilih_2[50]="The last Of Us Part 2";
        break;
    case 6:
        s4.game_dipilih_2[50]="Persona 5 Royal";
        break;
    case 7:
        s4.game_dipilih_2[50]="Metal Geat Solid V";
        break;
    case 8:
        s4.game_dipilih_2[50]="Uncharted 4";
        break;
    case 9:
        s4.game_dipilih_2[50]="Journey";
        break;
    case 10:
        s4.game_dipilih_2[50]="Bloodborne";
        break;
    case 11:
        s4.game_dipilih_2[50]="Undertale";
        break;
    case 12:
        s4.game_dipilih_2[50]="The Witcher 3";
        break;
    case 13:
        s4.game_dipilih_2[50]="Divinity Original Sin 2";
        break;
    case 14:
        s4.game_dipilih_2[50]="Shadow Of The Colossus";
        break;
    case 15:
        s4.game_dipilih_2[50]="Celeste";
        break;
    case 16:
        s4.game_dipilih_2[50]="Inside";
        break;
    case 17:
        s4.game_dipilih_2[50]= "Nier Automata";
    case 18:
        s4.game_dipilih_2[50]="Resident Evil 2";
        break;
    case 19:
        s4.game_dipilih_2[50]="Dragon Quest XI";
        break;
    case 20:
        s4.game_dipilih_2[50]="Diablo 3";
        break;
    case 21:
        s4.game_dipilih_2[50]="Shovel Knight";
        break;
    case 22:
        s4.game_dipilih_2[50]="Reyman Legends";
        break;
    case 23:
        s4.game_dipilih_2[50]="Fez";
        break;
    case 24:
        s4.game_dipilih_2[50]="Monster Hunter World: Iceborne";
        break;
    case 25:
        s4.game_dipilih_2[50]="Sekiro: Shadow Die Twice";
        break;
    case 26:
        s4.game_dipilih_2[50]="Titan Fall 2";
        break;
    case 27:
        s4.game_dipilih_2[50]="Elden Ring";
        break;
    case 28:
        s4.game_dipilih_2[50]="Dark Soul III";
        break;
    case 29:
        s4.game_dipilih_2[50]="Demon Soul";
        break;
    case 30:
        s4.game_dipilih_2[50]="It Takes Two";
        break;
    default:
        break;
    }
    }else if (s4.plhn_game == 2)
    {
        return rental_game_hasil_1();
    }else{
        return rental_game_hasil_1();
    }
    
    
    
}




void rental_game_pilih_game_3(){
    struct data_list_game s4;
    printf("Game yang dipilih: %s, %s \n", s4.game_dipilih_1, s4.game_dipilih_2);
    printf("Ingin Menyewa Game Yang Lain?");
    printf("1. Tambah Game");
    printf("2. Cukup");
    scanf("%d", s4.plhn_game);
    if (s4.plhn_game == 1)
    {
    printf("Masukkan No. Game Yang Ingin di Sewa");
    scanf("%d", s4.plhn_game);
    switch (s4.plhn_game)
    {
    case 1:
        s4.game_dipilih_3[50]="Red Dead Redemption 2";
        break;
    case 2:
        s4.game_dipilih_3[50]="Grand Theft Auto V";
        break;
    case 3:
        s4.game_dipilih_3[50]="The Last Of Us Remastered";
        break;
    case 4:
        s4.game_dipilih_3[50]="God Of War";
        break;
    case 5:
        s4.game_dipilih_3[50]="The last Of Us Part 2";
        break;
    case 6:
        s4.game_dipilih_3[50]="Persona 5 Royal";
        break;
    case 7:
        s4.game_dipilih_3[50]="Metal Geat Solid V";
        break;
    case 8:
        s4.game_dipilih_3[50]="Uncharted 4";
        break;
    case 9:
        s4.game_dipilih_3[50]="Journey";
        break;
    case 10:
        s4.game_dipilih_3[50]="Bloodborne";
        break;
    case 11:
        s4.game_dipilih_3[50]="Undertale";
        break;
    case 12:
        s4.game_dipilih_3[50]="The Witcher 3";
        break;
    case 13:
        s4.game_dipilih_3[50]="Divinity Original Sin 2";
        break;
    case 14:
        s4.game_dipilih_3[50]="Shadow Of The Colossus";
        break;
    case 15:
        s4.game_dipilih_3[50]="Celeste";
        break;
    case 16:
        s4.game_dipilih_3[50]="Inside";
        break;
    case 17:
        s4.game_dipilih_3[50]= "Nier Automata";
    case 18:
        s4.game_dipilih_3[50]="Resident Evil 2";
        break;
    case 19:
        s4.game_dipilih_3[50]="Dragon Quest XI";
        break;
    case 20:
        s4.game_dipilih_3[50]="Diablo 3";
        break;
    case 21:
        s4.game_dipilih_3[50]="Shovel Knight";
        break;
    case 22:
        s4.game_dipilih_3[50]="Reyman Legends";
        break;
    case 23:
        s4.game_dipilih_3[50]="Fez";
        break;
    case 24:
        s4.game_dipilih_3[50]="Monster Hunter World: Iceborne";
        break;
    case 25:
        s4.game_dipilih_3[50]="Sekiro: Shadow Die Twice";
        break;
    case 26:
        s4.game_dipilih_3[50]="Titan Fall 2";
        break;
    case 27:
        s4.game_dipilih_3[50]="Elden Ring";
        break;
    case 28:
        s4.game_dipilih_3[50]="Dark Soul III";
        break;
    case 29:
        s4.game_dipilih_3[50]="Demon Soul";
        break;
    case 30:
        s4.game_dipilih_3[50]="It Takes Two";
        break;
    default:
        break;
    }
    }else if (s4.plhn_game == 2)
    {
        /* code */
    }else{

    }
    
    
    
}