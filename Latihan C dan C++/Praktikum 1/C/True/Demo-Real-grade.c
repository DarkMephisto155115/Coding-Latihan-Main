#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


struct data_login//Menyimpan data login section S1
{
    char user_name[15]; 
    char pass_word[15];
};

struct data_main_menu//Menyimpan data main menu section S2
{
    int plhn_menu;
    int plhn_list_game;
    int plhn_list_film;
    int plhn_rental_game;
    int plhn_rental_film;
};

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





//Function declare

void login_function();// Sistem Login
void start_menu();// UI Start_Menu
void main_menu();// UI Main_Menu
void loading_function();// Animasi Loading
void case_switch_menu();// Sistem untuk Main_menu
void list_film_UI();// UI List Film
void list_film_1();// Sistem List Film
void list_film_2();// Sistem List Film
void list_game_UI();// Ui List Game
void list_game_1();// Sistem List Game
void list_game_2();// Sistem List Game
void rental_film();// Sistem Rental Film
void rental_game();// Sistem Rental Game
void rental_game_menu();// UI Main Menu Rental Game
void rental_game_harga();// UI Main Menu Rental Game
void rental_game_peraturan();// UI Main Menu Rental Game
void rental_game_hasil();// UI Main Menu Rental Game
void rental_game_rental();// Sistem Rental Game
void kalkulasi_rental_game_1();// Sistem Kalkulasi Rental Game
void kalkulasi_rental_game_2();// Sistem Kalkulasi Rental Game
void kalkulasi_rental_game_3();// Sistem Kalkulasi Rental Game

//Main-System
int main(void){
    start_menu();
    login_function();
    main_menu();
    case_switch_menu();




    system ("pause");
    return 0;
}








//Start Menu Function Section: START
void login_function(){
    struct data_login s1;
 
 
    printf("\t\t\t\tEnter your username:\n"); 
    printf("\t\t\t\t"); 
    scanf("%s",&s1.user_name); 
 
    printf("\t\t\t\tEnter your password:\n");
    printf("\t\t\t\t");  
    scanf("%s",&s1.pass_word); 
 
    if(strcmp(s1.user_name,"admin")==0 && strcmp(s1.pass_word,"admin")==0 ){
        printf("\t\t\t\tLogin Berhasil!!! \n");
    }else{
        printf("\t\t\t\tLogin Gagal!!! \n");
        loading_function("\t\t\t\tRestarting");
        main();
    }
}


void start_menu()
{
    system("CLS");
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\tSilahkan Login dengan akun anda\n");
    
}

//Start Menu Function Section: END


//Main Menu Function Section: START 
void main_menu(){
    system("CLS");
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|          Rental Game dan Film          |\n");
    printf("==========================================\n");
    printf("1. Rental Game \n");
    printf("2. List Game\n");
    printf("3. Rental Film\n");
    printf("4. List Film\n");
    printf("5. Kembali Ke Start Menu\n");
    printf("6. Exit\n");
    printf("Pilih salah satu untuk mengakses \n");
    case_switch_menu();
}


void case_switch_menu(){
    struct data_main_menu s2;
    scanf("%d", &s2.plhn_menu);
    switch (s2.plhn_menu)
    {
    case 1:// Rental Game
        rental_game_menu();
        break;
    case 2:// List Game
        list_game_UI();
        break;
    case 3:// Rental Film
        
        break;
    case 4:// List Film
        list_film_UI();
        break;
    case 5:// Kembali ke main menu
        main();
        break;
    case 6:// Exit
        exit(0);
        break;
    
    default:
     loading_function("\nError!!!");
     printf("Tolong masukkan salah satu pilihan diatas \n");
     sleep(1);
     loading_function("Restarting");
     main_menu();
        break;
    } 
}


//Main Menu Function Section: END


//Rental Game Function START

void rental_game_menu(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf("1. Rental Game \n");
    printf("2. Harga \n");
    printf("3. Peraturan\n");
    printf("4. Kembali\n");
    printf("==========================================\n");
    printf("Pilih salah satu untuk mengakses         |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
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
        main_menu();
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
    printf("3. Paket 2: 80k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
    printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("====================================================================\n");
    printf("1. Kembali Ke Menu                                                 |\n");
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
    printf("=====================================================================================================\n");
    printf("|                                                Peraturan                                          |\n");
    printf("|                                               Rental Game                                         |\n");
    printf("=====================================================================================================\n");
    printf("1. Dilarang Merusak Kaset Game (Apabila terbukti melakukan akan dikenakan sanksi 2X harga game) \n");
    printf("2. Jaga Kaset Game Agar Tidak Lecet \n");
    printf("3. Apabila Telat Mengembalikan Akan Dikenakan Sanksi 20K Setiap Hari\n");
    printf("4. Maksimal Penyewaan 3 Game Secara Bersamaan\n");
    printf("5. Tidak Bisa Menyewa Game Yang Sama Apabila Sudah Pernah Disewa Sebelum Waktu Cooldown Habis\n");
    printf("Pilih salah satu untuk mengakses \n");
    printf("=====================================================================================================\n");
    printf("1. Kembali Ke Menu                                                                                  |\n");
    printf("=====================================================================================================\n");
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





void rental_game_rental(){
   struct data_rental_game s3;
   struct data_list_game s4;
   char nama_pinjam[50];
   char tanggal_pinjam[50];
   int banyak_sewa_game;
   printf("Masukkan Nama Peminjam: \n");
   int c;
   /* discard all characters up to and including newline */
   while ((c = getchar()) != '\n' && c != EOF); 
   fgets(nama_pinjam, 50, stdin);
   printf("Masukkan Tanggal Pinjam: \n");
   scanf("%s", tanggal_pinjam);
   system("CLS");
   printf("====================================================================\n");
   printf("|                                Harga                             |\n");
   printf("|                             Rental Game                          |\n");
   printf("====================================================================\n");
   printf("1. Paket 1: 20k Setiap Game 3 Hari  \n");
   printf("2. Paket 2: 50k Setiap Game 7 Hari\n");
   printf("3. Paket 2: 80k Setiap Game 14 Hari\n");
   printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
   printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
   printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
   printf("=================================================================== \n");
   printf("Pilih Jenis Paket                                                 |\n");
   printf("=================================================================== \n");
   scanf("%d", &s3.plhn_game_plh_pkt);
   system("CLS");
   switch (s3.plhn_game_plh_pkt)
   {
   case 1:
   char nama_paket_1[50]= "Paket 1";
   int harga_sewa_1 = 20000;
   int lama_sewa_1 = 3;
   char judul_game_11[50];
   char judul_game_21[50];
   char judul_game_31[50];
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    if (banyak_sewa_game == 1)
    {
        
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_11);
        kalkulasi_rental_game_1(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_game_11, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==2)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_11);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_21);
        kalkulasi_rental_game_2(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_game_11, judul_game_21, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==3)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_11);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_21);
        printf("Masukkan Game Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_game_31);
        kalkulasi_rental_game_3(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_game_11, judul_game_21, judul_game_31, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
    }else{
        printf("\n system error \n");
        system("pause");
    }
    
    
    
    break;

   case 2:
   char nama_paket_2[50]= "Paket 2";
   int harga_sewa_2 = 50000;
   int lama_sewa_2 = 7;
   char judul_game_12[50];
   char judul_game_22[50];
   char judul_game_32[50];
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    if (banyak_sewa_game == 1)
    {
        
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_12);
        kalkulasi_rental_game_1(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_game_12, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==2)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_12);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_22);
        kalkulasi_rental_game_2(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_game_12, judul_game_22, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==3)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_12);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_22);
        printf("Masukkan Game Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_game_32);
        kalkulasi_rental_game_3(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_game_12, judul_game_22, judul_game_32, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
    }else{
        printf("\n system error \n");
        system("pause");
    }
    
    
    
    break;

   case 3:
   char nama_paket_3[50]= "Paket 3";
   int harga_sewa_3 = 80000;
   int lama_sewa_3 = 14;
   char judul_game_13[50];
   char judul_game_23[50];
   char judul_game_33[50];
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    if (banyak_sewa_game == 1)
    {
        
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_13);
        kalkulasi_rental_game_1(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_game_13, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==2)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_13);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_23);
        kalkulasi_rental_game_2(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_game_13, judul_game_23, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==3)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_13);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_23);
        printf("Masukkan Game Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_game_33);
        kalkulasi_rental_game_3(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_game_13, judul_game_23, judul_game_33, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
    }else{
        printf("\n system error \n");
        system("pause");
    }
    
    
    
    break;

   case 4:
   char nama_paket_4[50]= "Sabtu-Minggu";
   int harga_sewa_4 = 10000;
   int lama_sewa_4 = 2;
   char judul_game_14[50];
   printf("Game apa yang ingin kamu sewa?\n");
   scanf("%s", judul_game_14);
   kalkulasi_rental_game_1(harga_sewa_4, lama_sewa_4, nama_paket_4, judul_game_14, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
    break;

   case 5:
   char nama_paket_5[50]= "Libur Panjang";
   int harga_sewa_5 = 150000;
   int lama_sewa_5 = 30;
   char judul_game_15[50];
   char judul_game_25[50];
   char judul_game_35[50];
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    if (banyak_sewa_game == 1)
    {
        
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_15);
        kalkulasi_rental_game_1(harga_sewa_5, lama_sewa_5, nama_paket_5, judul_game_15, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==2)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_15);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_25);
        kalkulasi_rental_game_2(harga_sewa_5, lama_sewa_5, nama_paket_5, judul_game_15, judul_game_25, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_game==3)
    {
        printf("Game apa yang ingin kamu sewa?\n");
        scanf("%s", judul_game_15);
        printf("Masukkan Game Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_game_25);
        printf("Masukkan Game Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_game_35);
        kalkulasi_rental_game_3(harga_sewa_5, lama_sewa_5, nama_paket_5, judul_game_15, judul_game_25, judul_game_35, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
    }else{
        printf("\n system error \n");
        system("pause");
    }
    
    
    
    break;
   case 6:
    
    break;
   default:

    break;
   }
   system("pause");
}



void kalkulasi_rental_game_1(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_game[50],char nama_pinjam_[50],char tanggal_pinjam_[50]){
    struct data_rental_game s3;
    int z = 1;
    long int x = harga_sewa;
    int y = lama_sewa;
    int pilihan;

    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket );
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", z);
    printf(" Game Yang Dipilih: %s \n", nama_game);
    printf(" Harga Sewa: Rp. %d \n", harga_sewa);
    printf(" Diskon: 0 \n");
    printf(" Total Biaya: Rp. %d\n", harga_sewa);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan==1)
    {
        main_menu();
    }else if (pilihan==2)
    {
        exit(0);
    }else{

    }
    
    
}

void kalkulasi_rental_game_2(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_game_1[50],char nama_game_2[50],char nama_pinjam_2[50],char tanggal_pinjam_2[50]){
    struct data_rental_game s3;
    int z = 2;
    long int x = harga_sewa*z;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon= x*0.05;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_2);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_2);
    printf(" Jenis Paket: %s \n", nama_paket );
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", z);
    printf(" Game Yang Dipilih: %s, %s \n", nama_game_1, nama_game_2);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    printf("Silahkan memilih...\n");
    scanf("%d", &pilihan);
    if (pilihan==1)
    {
        main_menu();
    }else if (pilihan==2)
    {
        exit(0);
    }else{

    }
    

}


void kalkulasi_rental_game_3(int harga_sewa, int lama_sewa, char nama_paket[50], char nama_game_1[50],char nama_game_2[50],char nama_game_3[50],char nama_pinjam_3[50],char tanggal_pinjam_3[50]){
    struct data_rental_game s3;
    int z = 3;
    long int x = harga_sewa*z;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon= x*0.1;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_3);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_3);
    printf(" Jenis Paket: %s \n", nama_paket );
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", z);
    printf(" Game Yang Dipilih: %s, %s, %s \n", nama_game_1, nama_game_2, nama_game_3);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan==1)
    {
        main_menu();
    }else if (pilihan==2)
    {
        exit(0);
    }else{

    }

}

//Rental Game Function END


//List Game Function START

void list_game_UI(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("1. Red Dead Redemption 2 \n");
    printf("2. Grand Theft Auto V \n");
    printf("3. The Last Of Us Remastered \n");
    printf("4. God Of War \n");
    printf("5. The last Of Us Part 2 \n");
    printf("6. Persona 5 Royal \n");
    printf("7. Metal Geat Solid V \n");
    printf("8. Uncharted 4 \n");
    printf("9. Journey\n");
    printf("10. Bloodborne\n");
    printf("Page: 1\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_game);
    switch (s2.plhn_list_game)
    {
    case 1:
        list_game_1();
        break;
    
    case 2:
        list_game_UI();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_game_UI();
        break;
    }
}





void list_game_1(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("11. Undertale \n");
    printf("12. The Witcher 3 \n");
    printf("13. Divinity Original Sin 2 \n");
    printf("14. Shadow Of The Colossus \n");
    printf("15. Celeste \n");
    printf("16. Inside \n");
    printf("17. Nier Automata \n");
    printf("18. Resident Evil 2 \n");
    printf("19. Dragon Quest XI\n");
    printf("20. Diablo 3\n");
    printf("Page: 2\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_game);
    switch (s2.plhn_list_game)
    {
    case 1:
        list_game_2();
        break;
    
    case 2:
        list_game_UI();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_game_1();
        break;
    }
}

void list_game_2(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("21. Shovel Knight \n");
    printf("22. Reyman Legends \n");
    printf("23. Fez \n");
    printf("24. Monster Hunter World: Iceborne \n");
    printf("25. Sekiro: Shadow Die Twice \n");
    printf("26. Titan Fall 2 \n");
    printf("27. Elden Ring \n");
    printf("28. Dark Soul III \n");
    printf("29. Demon Soul\n");
    printf("30. It Takes Two\n");
    printf("Page: 3\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_game);
    switch (s2.plhn_list_game)
    {
    case 1:
        list_game_2();
        break;
    
    case 2:
        list_game_1();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_game_2();
        break;
    }
}


//List Game Function END


//Rental Film Function START


//Rental Film Function END


//List Film Function START


void list_film_UI(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("1. Top Gun Maverick\n");
    printf("2. The Batman\n");
    printf("3. Everything Everywhere All At Once \n");
    printf("4. The Northman \n");
    printf("5. Turning Red \n");
    printf("6. Prey \n");
    printf("7. Happening \n");
    printf("8. Fire Of Love \n");
    printf("9. X\n");
    printf("10. Nope\n");
    printf("Page: 1\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_film);
    switch (s2.plhn_list_film)
    {
    case 1:
        list_film_1();
        break;
    
    case 2:
        list_film_UI();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_film_UI();
        break;
    }
}





void list_film_1(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("11. Black Panther \n");
    printf("12. Avengers: Endgame \n");
    printf("13. Iron Man \n");
    printf("14. Thor: Ragnarok \n");
    printf("15. Spider-Man: No Way Home \n");
    printf("16. Spider-Man: Homecoming \n");
    printf("17. Guardians Of The Galaxy \n");
    printf("18. The Avengers \n");
    printf("19. Shang-Chi And The Legend Of Ten Ring\n");
    printf("20. Spider-Man: Far From Home\n");
    printf("Page: 2\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_film);
    switch (s2.plhn_list_film)
    {
    case 1:
        list_film_2();
        break;
    
    case 2:
        list_film_UI();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_film_1();
        break;
    }
}

void list_film_2(){
    system("CLS");
    struct data_main_menu s2;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("21. Captain America: Civil War \n");
    printf("22. Captain America: The Winter Soldier \n");
    printf("23. Doctor Strange \n");
    printf("24. Ant-Man and The Wasp \n");
    printf("25. Avengers: Infinity War \n");
    printf("26. Guardians of The Galaxy Vol.2 \n");
    printf("27. Ant-Man \n");
    printf("28. Captain Marvel \n");
    printf("29. Black Widow\n");
    printf("30. Avengers: Endgame\n");
    printf("Page: 3\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &s2.plhn_list_film);
    switch (s2.plhn_list_film)
    {
    case 1:
        list_film_2();
        break;
    
    case 2:
        list_film_1();
        break;

    case 3:
        main_menu();
        break;
    default:
        printf("Input Salah!!!");
        loading_function("Restarting");
        list_film_2();
        break;
    }
}


//List Film Function END



// Effect Section: START
void loading_function(char loading [30] ){
    printf(loading); 
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(1);
}




//Effect Section END