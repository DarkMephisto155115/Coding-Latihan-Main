#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)
// Missing Feature Array and Loop @andika
// Missing Loop Only now @andika
// Idk how loop supposed to work in this project @Dark_Mephisto
// wait we can create array push with loop @andika
// Yeah, as long as there is loop i think LGTM @Dark_Mephisto
// global data for login and register @andika
// well thats was easy i think we played to much anime game to know how to use for loop @dark_mephisto

/*
To Do List
1. rework price calculation function DONE
2. rework choosing game name DONE?
3. rework nota
4. create push array function DONE?? kinda??
5. write nota to file as data
6. For Loop ???? DONE
7. Rework price calculation to function DONE
8. Use Struct

*/

struct data_login // Menyimpan data login section S1
{
    char user_name[15];
    char pass_word[15];
};

struct data_main_menu // Menyimpan data main menu section S2
{
    int plhn_menu;
    int plhn_list_game;
    int plhn_list_film;
    int plhn_rental_game;
    int plhn_rental_film;
};

struct data_rental_game // Menyimpan data rental game S3
{
    char nama_pinjam[20];
    char tanggal_pinjam[20];
    int plhn_game_plh_pkt;
    long int harga_paket;
    int lama_paket;
};

struct data_rental_film // Menyimpan data rental game S3
{
    char nama_pinjam[20];
    char tanggal_pinjam[20];
    int plhn_film_plh_pkt;
    long int harga_paket;
    int lama_paket;
};

struct data_list_game // Menyimpan data list game S4
{
    int plhn_game;
    char game_dipilih_1[50];
    char game_dipilih_2[50];
    char game_dipilih_3[50];
};

struct data_list_film // Menyimpan data list film S4
{
    int plhn_film;
    char film_dipilih_1[50];
    char film_dipilih_2[50];
    char film_dipilih_3[50];
};
// Function declare

// Sistem Login
void login_function();

// UI Start_Menu
void start_menu();

// UI Main_Menu
void main_menu();

// Animasi Loading
void loading_function(char *myString, size_t lengthMyString);

// Sistem untuk Main_menu
void case_switch_menu();

// UI List Film
void list_film_UI();

// Sistem List Film
void list_film_1();

// Sistem List Film 2
void list_film_2();

// Ui List Game
void list_game_UI();

// Sistem List Game
void list_game_1();

// Sistem List Game 2
void list_game_2();

// UI Main Menu Rental Game
void rental_film_menu();

// UI Menu Harga Rental Game
void rental_film_harga();

// UI Main Peraturan Rental Game
void rental_film_peraturan();

// UI Menu Rental Game
void rental_film_hasil();

// Sistem Rental Game
void rental_film_rental();

// Sistem Kalkulasi Rental 1 Game
void kalkulasi_rental_film_1(long int, int, int, char[10], char[50], char[50], char[50]);

// Sistem Kalkulasi Rental 2 Game
void kalkulasi_rental_film_2(long int, int, int, char[10], char[50], char[50], char[50], char[50]);

// Sistem Kalkulasi Rental 3 Game
void kalkulasi_rental_film_3(long int, int, int, char[10], char[50], char[50], char[50], char[50], char[50]);

// UI Main Menu Rental Game
void rental_game_menu();

// UI Menu Harga Rental Game
void rental_game_harga();

// UI Menu Peraturan Rental Game
void rental_game_peraturan();

// UI Menu Rental Game
void rental_game_hasil();

// Sistem Rental Game
void rental_game_rental();

// Sistem Kalkulasi Rental 1 Game
void kalkulasi_rental_game_1(long int, int, int, char[50], char[50], char[50], char[50]);

// Sistem Kalkulasi Rental 2 Game
void kalkulasi_rental_game_2(long int, int, int, char[50], char[50], char[50], char[50], char[50]);

// Sistem Kalkulasi Rental 3 Game
void kalkulasi_rental_game_3(long int, int, int, char[50], char[50], char[50], char[50], char[50], char[50]);

// Sistem Diskon Spesial
void diskon_spesial();

// Global Data
char user_name_2[20];
char pass_word_2[20];

// Sistem Cek Login Admin
int cek_login_1(char username[20], char password[20])
{
    bool cek_login;
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) // cek_login
    {
        cek_login = true; // True apabila user_name dan pass_word betul
    }
    else
    {
        cek_login = false; // false apabila user_name dan pass_word salah
    }
    return cek_login;
}
// Sistem Cek Login User
int cek_login_2(char username[20], char password[20], char username2[20], char password2[20])
{
    bool cek_login;
    if (strcmp(username, username2) == 0 && strcmp(password, password2) == 0) // cek_login
    {
        cek_login = true; // True apabila user_name dan pass_word betul
    }
    else
    {
        cek_login = false; // false apabila user_name dan pass_word salah
    }
    return cek_login;
}

// Sistem Kalkulasi Biaya
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
// Sistem Kalkulasi Diskon
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

// Main-System
int main()
{
    start_menu();
    login_function();
    main_menu();

    system("pause");
    start_menu();
    return 0;
}

// Start Menu Function Section: START

void login_function()
{
    {
        char user_name[20];
        char pass_word[20];

        int cek_login; // bool to int untuk cek_login
        int cek_login2;

        printf("\t\t\t\tEnter your username:\n"); // output string
        printf("\t\t\t\t");                       // ??????
        scanf("\t\t\t\t%s", user_name);           // input user_name

        printf("\t\t\t\tEnter your password:\n"); // output string
        printf("\t\t\t\t");                       //?????
        scanf("\t\t\t\t%s", pass_word);           // input pass_word
        cek_login = cek_login_1(user_name, pass_word);
        cek_login2 = cek_login_2(user_name, user_name_2, pass_word, pass_word_2);
        if (cek_login == 1 || cek_login2 == 1) // cek_login untuk akses Menu
        {
            sleep(1);
            printf("\n\t\t\t\tLogin Berhasil!!! \n");
            loading_function((char *)"\n\t\t\t\tLogging in", 15);
            main_menu();
        }
        else // Apabila cek_login salah atau false
        {
            printf("\n\t\t\t\tLogin Gagal!!! \n");
            loading_function((char *)"\n\t\t\t\tRestarting", 15);
            main();
        }
    }
}

void start_menu()
{
    int pilihan;
    system("CLS");
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\tSilahkan Login atau Registrasi\n");
    printf("\t\t\t\t1.Login\n");
    printf("\t\t\t\t2.Registrasi\n");
    scanf("\t\t\t\t%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        login_function();
        break;
    case 2:
        printf("\t\t\t\tEnter your username:\n"); // output string
        printf("\t\t\t\t");                       // ??????
        scanf("\t\t\t\t%s", user_name_2);         // input user_name

        printf("\t\t\t\tEnter your password:\n"); // output string
        printf("\t\t\t\t");                       //?????
        scanf("\t\t\t\t%s", pass_word_2);
        main();
        break;
    default:
        break;
    }
}

// Start Menu Function Section: END

// Main Menu Function Section: START

// UI Main Menu
void main_menu()
{
    printf("\e[1;1H\e[2J");
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|          Rental Game dan Film          |\n");
    printf("==========================================\n");
    printf("1. Rental Game \n");
    printf("2. List Game\n");
    printf("3. Rental Film\n");
    printf("4. List Film\n");
    printf("5. Diskon Spesial\n");
    printf("6. Kembali Ke Start Menu\n");
    printf("7. Exit\n");
    printf("==========================================\n");
    printf("Pilih salah satu untuk mengakses         |\n");
    printf("==========================================\n");
    case_switch_menu();
}

// Sistem Main Menu
void case_switch_menu()
{
    struct data_main_menu s2;   // Define data struch dengan s2
    scanf("%d", &s2.plhn_menu); // input
    switch (s2.plhn_menu)
    {
    case 1: // Call Function Rental Game
        rental_game_menu();
        break;
    case 2: // Call Function List Game
        list_game_UI();
        break;
    case 3: // Call Function Rental Film
        rental_film_menu();
        break;
    case 4: // Call Function List Film
        list_film_UI();
        break;
    case 5: // Call Function Menu Diskon Spesial
        diskon_spesial();
        break;
    case 6: // Call Function Kembali ke main menu
        main();
        break;
    case 7: // Call Function Exit
        exit(0);
        break;

    default:
        loading_function((char *)"\nError!!!", 10);
        printf("Tolong masukkan salah satu pilihan diatas \n");
        sleep(1);
        loading_function((char *)"Restarting", 11);
        main_menu();
        break;
    }
}

// Main Menu Function Section: END

// Rental Game Function START

// UI+Sistem Menu Rental Game
void rental_game_menu()
{
    printf("\e[1;1H\e[2J");
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
    case 1:
        rental_game_rental();
        break;
    case 2:
        rental_game_harga();
        break;
    case 3:
        rental_game_peraturan();
        break;
    case 4:
        main_menu();
        break;
    default:
        break;
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_game_menu();
    }
    printf("Input Salah\n");
    loading_function((char *)"Restarting", 11);
    rental_game_menu();
}

void rental_game_harga()
{
    printf("\e[1;1H\e[2J");
    int pilihan;
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Game                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 21k Setiap Game 3 Hari  \n");
    printf("2. Paket 2: 42k Setiap Game 7 Hari\n");
    printf("3. Paket 2: 70k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 120k Setiap Game 30 Hari\n");
    printf("6. Personal: 8k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("====================================================================\n");
    printf("1. Kembali Ke Menu                                                 |\n");
    printf("====================================================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        rental_game_menu();
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_game_harga();
    }
}

void rental_game_peraturan()
{
    printf("\e[1;1H\e[2J");
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
    if (pilihan == 1)
    {
        rental_game_menu();
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_game_peraturan();
    }
}

// Main Sistem Rental Game
void rental_game_rental()
{
    struct data_rental_game s3;
    struct data_list_game s4;
    printf("\e[1;1H\e[2J");
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int banyak_sewa_game;
    char judul_game[3][50];
    int i;
    printf("============================== \n");
    printf("|            Data            |\n");
    printf("|        Rental Game         |\n");
    printf("============================== \n");
    printf("Masukkan Nama Peminjam: \n");
    int c;
    /* discard all characters up to and including newline */
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    fgets(nama_pinjam, 50, stdin);
    printf("Masukkan Tanggal Pinjam: \n");
    scanf("%s", tanggal_pinjam);
    printf("\e[1;1H\e[2J");
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Game                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 21k Setiap Game 3 Hari  \n");
    printf("2. Paket 2: 50k Setiap Game 7 Hari\n");
    printf("3. Paket 2: 80k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
    printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("=================================================================== \n");
    printf("Pilih Jenis Paket                                                 |\n");
    printf("=================================================================== \n");
    scanf("%d", &s3.plhn_game_plh_pkt);
    switch (s3.plhn_game_plh_pkt)
    {
    case 1:
    {
        char nama_paket_1[50] = "Paket 1";
        const int harga_sewa_1 = 7000; // 21.000
        const int lama_sewa_1 = 3;
        printf("Berapa banyak game yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_game);
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
        if (banyak_sewa_game == 1)
        {
            kalkulasi_rental_game_1(harga_sewa_1, lama_sewa_1, banyak_sewa_game, nama_paket_1, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 2)
        {
            kalkulasi_rental_game_2(harga_sewa_1, lama_sewa_1, banyak_sewa_game, nama_paket_1, judul_game[0], judul_game[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 3)
        {
            kalkulasi_rental_game_3(harga_sewa_1, lama_sewa_1, banyak_sewa_game, nama_paket_1, judul_game[0], judul_game[1], judul_game[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Restarting", 11);
            rental_game_rental();
        }
    }

    break;

    case 2:
    {
        char nama_paket_2[50] = "Paket 2";
        const int harga_sewa_2 = 6000; // 42.000
        const int lama_sewa_2 = 7;
        printf("Berapa banyak game yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_game);
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
        if (banyak_sewa_game == 1)
        {
            kalkulasi_rental_game_1(harga_sewa_2, lama_sewa_2, banyak_sewa_game, nama_paket_2, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 2)
        {
            kalkulasi_rental_game_2(harga_sewa_2, lama_sewa_2, banyak_sewa_game, nama_paket_2, judul_game[0], judul_game[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 3)
        {
            kalkulasi_rental_game_3(harga_sewa_2, lama_sewa_2, banyak_sewa_game, nama_paket_2, judul_game[0], judul_game[1], judul_game[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Restarting", 11);
            rental_game_rental();
        }
    }

    break;

    case 3:
    {
        char nama_paket_3[50] = "Paket 3";
        const int harga_sewa_3 = 5000; // 70.000
        const int lama_sewa_3 = 14;
        printf("Berapa banyak game yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_game);
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
        if (banyak_sewa_game == 1)
        {
            kalkulasi_rental_game_1(harga_sewa_3, lama_sewa_3, banyak_sewa_game, nama_paket_3, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 2)
        {
            kalkulasi_rental_game_2(harga_sewa_3, lama_sewa_3, banyak_sewa_game, nama_paket_3, judul_game[0], judul_game[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 3)
        {
            kalkulasi_rental_game_3(harga_sewa_3, lama_sewa_3, banyak_sewa_game, nama_paket_3, judul_game[0], judul_game[1], judul_game[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Restarting", 11);
            rental_game_rental();
        }
    }

    break;

    case 4:
    {
        char nama_paket_4[50] = "Sabtu-Minggu";
        const int harga_sewa_4 = 5000; // 10.000
        const int lama_sewa_4 = 2;
        printf("Game apa yang ingin kamu sewa?\n");
        scanf(" %[^\n]s", judul_game[0]);
        kalkulasi_rental_game_1(harga_sewa_4, lama_sewa_4, banyak_sewa_game, nama_paket_4, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        break;
    }

    case 5:
    {
        char nama_paket_5[50] = "Libur Panjang";
        const int harga_sewa_5 = 4000; // 120.000
        const int lama_sewa_5 = 30;
        printf("Berapa banyak game yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_game);
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
        if (banyak_sewa_game == 1)
        {
            kalkulasi_rental_game_1(harga_sewa_5, lama_sewa_5, banyak_sewa_game, nama_paket_5, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 2)
        {
            kalkulasi_rental_game_2(harga_sewa_5, lama_sewa_5, banyak_sewa_game, nama_paket_5, judul_game[0], judul_game[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 3)
        {
            kalkulasi_rental_game_3(harga_sewa_5, lama_sewa_5, banyak_sewa_game, nama_paket_5, judul_game[0], judul_game[1], judul_game[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Restarting", 11);
            rental_game_rental();
        }
    }

    break;
    case 6:
    {
        char nama_paket_6[50] = "Personal";
        const int harga_sewa_6 = 8000;
        int lama_sewa_6;
        printf("Berapa lama durasi sewa? \n");
        scanf("%d", &lama_sewa_6);
        printf("Berapa banyak game yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_game);
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
        if (banyak_sewa_game == 1)
        {
            kalkulasi_rental_game_1(harga_sewa_6, lama_sewa_6, banyak_sewa_game, nama_paket_6, judul_game[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 2)
        {
            kalkulasi_rental_game_2(harga_sewa_6, lama_sewa_6, banyak_sewa_game, nama_paket_6, judul_game[0], judul_game[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1, nama_game_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_game == 3)
        {
            kalkulasi_rental_game_3(harga_sewa_6, lama_sewa_6, banyak_sewa_game, nama_paket_6, judul_game[0], judul_game[1], judul_game[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_game_1,nama_game_2,nama_game_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Restarting", 11);
            rental_game_rental();
        }
    }

    break;
    default:
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_game_rental();
    }

    break;
    }
}

void kalkulasi_rental_game_1(long int harga_sewa, int lama_sewa, int banyak_sewa_game, char nama_paket[50], char nama_game[50], char nama_pinjam_[50], char tanggal_pinjam_[50]) // Operation
{
    printf("\e[1;1H\e[2J");
    struct data_rental_game s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_game) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_game);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_game);

    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    printf(" Game Yang Dipilih: %s \n", nama_game);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

void kalkulasi_rental_game_2(long int harga_sewa, int lama_sewa, int banyak_sewa_game, char nama_paket[50], char nama_game_1[50], char nama_game_2[50], char nama_pinjam[50], char tanggal_pinjam[50])
{
    printf("\e[1;1H\e[2J");
    struct data_rental_game s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_game) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_game);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_game);

    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    printf(" Game Yang Dipilih: %s, %s \n", nama_game_1, nama_game_2);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

void kalkulasi_rental_game_3(long int harga_sewa, int lama_sewa, int banyak_sewa_game, char nama_paket[50], char nama_game_1[50], char nama_game_2[50], char nama_game_3[50], char nama_pinjam[50], char tanggal_pinjam[50])
{
    printf("\e[1;1H\e[2J");
    struct data_rental_game s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_game) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_game);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_game);

    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    printf(" Game Yang Dipilih: %s, %s, %s \n", nama_game_1, nama_game_2, nama_game_3);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

// Rental Game Function END

// List Game Function START

void list_game_UI()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_game_UI();
        break;
    }
}

void list_game_1()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_game_1();
        break;
    }
}

void list_game_2()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_game_2();
        break;
    }
}

// List Game Function END

// Rental Film Function START

// UI+Sistem Menu Rental Film
void rental_film_menu()
{
    printf("\e[1;1H\e[2J");

    int pilihan;
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf("1. Rental Film \n");
    printf("2. Harga \n");
    printf("3. Peraturan\n");
    printf("4. Kembali\n");
    printf("==========================================\n");
    printf("Pilih salah satu untuk mengakses         |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        rental_film_rental();
        break;
    case 2:
        rental_film_harga();
        break;
    case 3:
        rental_film_peraturan();
        break;
    case 4:
        main_menu();
        break;
    default:
        break;
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_film_menu();
    }
} // Sistem Rental Film

void rental_film_harga()
{
    printf("\e[1;1H\e[2J");

    int pilihan;
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Film                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 5k 1 Film 1 Hari \n");
    printf("2. Paket 2: 8k 2 Film 1 Hari \n");
    printf("3. Paket 2: 25k 3 Film 3 Hari \n");
    printf("4. Personal: 8k Untuk Sehari Setiap 1 Film (Maksimal 30 Hari)\n");
    printf("====================================================================\n");
    printf("1. Kembali Ke Menu                                                 |\n");
    printf("====================================================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        rental_film_menu();
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_film_harga();
    }
}

void rental_film_peraturan()
{
    printf("\e[1;1H\e[2J");

    int pilihan;
    printf("=====================================================================================================\n");
    printf("|                                                Peraturan                                          |\n");
    printf("|                                               Rental Game                                         |\n");
    printf("=====================================================================================================\n");
    printf("1. Dilarang Merusak Kaset Film (Apabila terbukti melakukan akan dikenakan sanksi 2X harga kaset) \n");
    printf("2. Jaga Kaset Film Agar Tidak Lecet \n");
    printf("3. Apabila Telat Mengembalikan Akan Dikenakan Sanksi 20K Setiap Hari\n");
    printf("4. Maksimal Penyewaan 5 Film Secara Bersamaan\n");
    printf("Pilih salah satu untuk mengakses \n");
    printf("=====================================================================================================\n");
    printf("1. Kembali Ke Menu                                                                                  |\n");
    printf("=====================================================================================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        rental_film_menu();
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_film_peraturan();
    }
}

void rental_film_rental()
{
    struct data_rental_film s3;
    struct data_list_film s4;
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int banyak_sewa_film;
    char judul_film[3][50];
    int i;
    printf("Masukkan Nama Peminjam: \n");
    int c;
    /* discard all characters up to and including newline */
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    fgets(nama_pinjam, 50, stdin);
    printf("Masukkan Tanggal Pinjam: \n");
    scanf("%s", tanggal_pinjam);
    printf("\e[1;1H\e[2J");
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Film                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 5k Setiap Film 1 Hari \n");
    printf("2. Paket 2: 12k Setiap Film Film 3 Hari \n");
    printf("3. Paket 2: 25k Setiap Film Film 5 Hari \n");
    printf("4. Personal: 8k Untuk Sehari Setiap 1 Film (Maksimal 30 Hari)\n");
    printf("=================================================================== \n");
    printf("Pilih Jenis Paket                                                 |\n");
    printf("=================================================================== \n");
    scanf("%d", &s3.plhn_film_plh_pkt);
    printf("\e[1;1H\e[2J");
    switch (s3.plhn_film_plh_pkt)
    {
    case 1:
    {
        char nama_paket_1[10] = "Paket 1";
        const int harga_sewa_1 = 5000; // 5000*1 = 5000
        const int lama_sewa_1 = 1;
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        for (i = 0; i <= (banyak_sewa_film - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_film[i]);
        }
        if (banyak_sewa_film == 1)
        {
            kalkulasi_rental_film_1(harga_sewa_1, lama_sewa_1, banyak_sewa_film, nama_paket_1, judul_film[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            kalkulasi_rental_film_2(harga_sewa_1, lama_sewa_1, banyak_sewa_film, nama_paket_1, judul_film[0], judul_film[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            kalkulasi_rental_film_3(harga_sewa_1, lama_sewa_1, banyak_sewa_film, nama_paket_1, judul_film[0], judul_film[1], judul_film[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function((char *)"Restarting", 11);
            rental_film_rental();
        }
    }

    break;

    case 2:
    {
        char nama_paket_2[50] = "Paket 2";
        const int harga_sewa_2 = 4000; // 4000*3 = 12000
        const int lama_sewa_2 = 3;
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        for (i = 0; i <= (banyak_sewa_film - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_film[i]);
        }
        if (banyak_sewa_film == 1)
        {

            kalkulasi_rental_film_1(harga_sewa_2, lama_sewa_2, banyak_sewa_film, nama_paket_2, judul_film[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            kalkulasi_rental_film_2(harga_sewa_2, lama_sewa_2, banyak_sewa_film, nama_paket_2, judul_film[0], judul_film[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            kalkulasi_rental_film_3(harga_sewa_2, lama_sewa_2, banyak_sewa_film, nama_paket_2, judul_film[0], judul_film[1], judul_film[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function((char *)"Restarting", 11);
            rental_film_rental();
        }
    }

    break;

    case 3:
    {
        char nama_paket_3[10] = "Paket 3";
        const int harga_sewa_3 = 5000; // 5000*5 = 25000
        const int lama_sewa_3 = 5;
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        for (i = 0; i <= (banyak_sewa_film - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_film[i]);
        }
        if (banyak_sewa_film == 1)
        {
            kalkulasi_rental_film_1(harga_sewa_3, lama_sewa_3, banyak_sewa_film, nama_paket_3, judul_film[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            kalkulasi_rental_film_2(harga_sewa_3, lama_sewa_3, banyak_sewa_film, nama_paket_3, judul_film[0], judul_film[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            kalkulasi_rental_film_3(harga_sewa_3, lama_sewa_3, banyak_sewa_film, nama_paket_3, judul_film[0], judul_film[1], judul_film[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function((char *)"Restarting", 11);
            rental_film_rental();
        }
    }

    break;

    case 4:
    {
        char nama_paket_4[10] = "Personal";
        const int harga_sewa_4 = 8000;
        int lama_sewa_4;

        printf("Berapa lama durasi sewa? \n");
        scanf("%d", &lama_sewa_4);
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        for (i = 0; i <= (banyak_sewa_film - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_film[i]);
        }
        if (banyak_sewa_film == 1)
        {

            kalkulasi_rental_film_1(harga_sewa_4, lama_sewa_4, banyak_sewa_film, nama_paket_4, judul_film[0], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            kalkulasi_rental_film_2(harga_sewa_4, lama_sewa_4, banyak_sewa_film, nama_paket_4, judul_film[0], judul_film[1], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            kalkulasi_rental_film_3(harga_sewa_4, lama_sewa_4, banyak_sewa_film, nama_paket_4, judul_film[0], judul_film[1], judul_film[2], nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function((char *)"Restarting", 11);
            rental_film_rental();
        }

        break;
    }
    default:
    {
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_film_rental();
    }

    break;
    }
}

void kalkulasi_rental_film_1(long int harga_sewa, int lama_sewa, int banyak_sewa_film, char nama_paket[10], char nama_film[50], char nama_pinjam_[50], char tanggal_pinjam_[50])
{
    printf("\e[1;1H\e[2J");
    struct data_rental_film s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_film) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_film);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_film);

    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", banyak_sewa_film);
    printf(" Film Yang Dipilih: %s \n", nama_film);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

void kalkulasi_rental_film_2(long int harga_sewa, int lama_sewa, int banyak_sewa_film, char nama_paket[10], char nama_film_1[50], char nama_film_2[50], char nama_pinjam[50], char tanggal_pinjam[50])
{
    printf("\e[1;1H\e[2J");
    struct data_rental_film s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_film) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_film);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_film);
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", banyak_sewa_film);
    printf(" Film Yang Dipilih: %s, %s \n", nama_film_1, nama_film_2);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld \n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    printf("Silahkan memilih...\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

void kalkulasi_rental_film_3(long int harga_sewa, int lama_sewa, int banyak_sewa_film, char nama_paket[10], char nama_film_1[50], char nama_film_2[50], char nama_film_3[50], char nama_pinjam[50], char tanggal_pinjam[50])
{
    printf("\e[1;1H\e[2J");
    struct data_rental_film s3;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_film) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_film);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_film);
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", banyak_sewa_film);
    printf(" Film Yang Dipilih: %s, %s, %s \n", nama_film_1, nama_film_2, nama_film_3);
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld \n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main_menu();
    }
    else if (pilihan == 2)
    {
        exit(0);
    }
    else
    {
        printf("Input Salah\n");
        loading_function((char *)"Kembali Ke Main Menu", 21);
        main_menu();
    }
}

// Rental Film Function END

// List Film Function START

void list_film_UI()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_film_UI();
        break;
    }
}

void list_film_1()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_film_1();
        break;
    }
}

void list_film_2()
{
    printf("\e[1;1H\e[2J");

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
    printf("1. Selanjutnya                           |\n");
    printf("2. Sebelumnya                            |\n");
    printf("3. Kembali Ke Menu                       |\n");
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
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        list_film_2();
        break;
    }
}

// List Film Function END

// Diskon Special Function: START
void diskon_spesial()
{
    printf("\e[1;1H\e[2J");
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int pilihan_menu;
    long int harga_spesial[4][2] = {{7, 50000}, {3, 25000}, {3, 20000}, {2, 8000}};
    char nama_diskon_multiplayer[10][99] = {"Divinity Original Sin 2", "Diablo 3", "Shovel Knight",
                                            "It Takes Two", "Uncharted 4", "Lego Star Wars: The SkyWalker Saga", "Overcooked", "Portal 2", "A Way Out", "Borderland 3"};
    char nama_diskon_horror[10][99] = {"Prey", "Nope", "X", "The Excorcist", "The Hereditary", "The Conjuring",
                                       "The Shinning", "The Texas Chainsaw Massacre", "The Ring", "Sinister"};
    printf("====================================================================\n");
    printf("|                                Special                             |\n");
    printf("|                       Diskon Game dan Film Pilihan                 |\n");
    printf("====================================================================\n");
    printf("1. Red Dead Redemption 2 Paket Tamat 7 hari 50k \n");
    printf("2. Avenger Series, 25k 3 hari untuk seri Avenger 1 - EndGame \n");
    printf("3. Lets Play Together, diskon special untuk game 20k Multiplayer 2 Game 3Hari \n");
    printf("4. Horror Week End, diskon spesial untuk film horror 8k 3 Film 2 Hari \n");
    printf("=================================================================== \n");
    printf("| Pilih Jenis Paket                                               |\n");
    printf("=================================================================== \n");
    scanf("%d", &pilihan_menu);
    printf("Masukkan Nama Peminjam: \n");
    int c;
    /* discard all characters up to and including newline */
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    fgets(nama_pinjam, 50, stdin);
    printf("Masukkan Tanggal Pinjam: \n");
    scanf("%s", tanggal_pinjam);
    switch (pilihan_menu)
    {
    case 1:
    {
        printf("\e[1;1H\e[2J");
        int pilihan;
        printf("==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Game               |\n");
        printf("==========================================\n");
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Diskon Special\n");
        printf(" Lama Pinjam: %ld Hari\n", harga_spesial[0][0]);
        printf(" Banyak film Yang Disewa: 1\n");
        printf(" film Yang Dipilih: Red Dead Redemption 2 \n");
        printf(" Harga Sewa: Rp. %ld \n", harga_spesial[0][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan);
        if (pilihan == 1)
        {
            main_menu();
        }
        else if (pilihan == 2)
        {
            exit(0);
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Kembali Ke Main Menu", 21);
            main_menu();
        }
    };
    break;
    case 2:
    {
        printf("\e[1;1H\e[2J");
        int pilihan;
        printf("==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Film               |\n");
        printf("==========================================\n");
        printf("Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Diskon Special\n");
        printf(" Lama Pinjam: %ld Hari\n", harga_spesial[1][0]);
        printf(" Banyak film Yang Disewa: 4\n");
        printf(" Film Yang Dipilih: Avenger, Avenger: Age Of Ultron,\n Avenger: Infinity War, Avenger: EndGame \n");
        printf(" Harga Sewa: Rp. %ld \n", harga_spesial[1][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan);
        if (pilihan == 1)
        {
            main_menu();
        }
        else if (pilihan == 2)
        {
            exit(0);
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Kembali Ke Main Menu", 21);
            main_menu();
        }
    };
    break;
    case 3:
    {
        printf("\e[1;1H\e[2J");
        int pilihan;
        int pilihan_game_1;
        int pilihan_game_2;
        printf("==========================================\n");
        printf("|               List Game                |\n");
        printf("|           Lets Play Together           |\n");
        printf("==========================================\n");
        printf("1. Divinity Original Sin 2 \n");
        printf("2. Diablo 3 \n");
        printf("3. Shovel Knight \n");
        printf("4. It Takes Two\n");
        printf("5. Uncharted 4 \n");
        printf("6. Lego Star Wars: The SkyWalker Saga \n");
        printf("7. Overcooked \n");
        printf("8. Portal 2 \n");
        printf("9. A Way Out\n");
        printf("10. Borderland 3\n");
        printf("==========================================\n");
        printf("| Pilih 2 Game yang diinginkan           |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan_game_1);
        printf("Game Yang Kamu Pilih: %s \n", nama_diskon_multiplayer[pilihan_game_1 - 1]);
        scanf("%d", &pilihan_game_2);
        printf("Game Yang Kamu Pilih: %s \n", nama_diskon_multiplayer[pilihan_game_2 - 1]);
        printf("\e[1;1H\e[2J");
        printf("==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Game               |\n");
        printf("==========================================\n");
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Lets Play Together\n");
        printf(" Lama Pinjam: %ld Hari\n", harga_spesial[2][0]);
        printf(" Banyak film Yang Disewa: 2\n");
        printf(" film Yang Dipilih: %s, %s \n", nama_diskon_multiplayer[pilihan_game_1 - 1],
               nama_diskon_multiplayer[pilihan_game_2 - 1]);
        printf(" Harga Sewa: Rp. %ld \n", harga_spesial[2][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan);
        if (pilihan == 1)
        {
            main_menu();
        }
        else if (pilihan == 2)
        {
            exit(0);
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Kembali Ke Main Menu", 21);
            main_menu();
        }
    };

    break;
    case 4:
    {
        printf("\e[1;1H\e[2J");
        int pilihan;
        int pilihan_film_1;
        int pilihan_film_2;
        int pilihan_film_3;
        printf("==========================================\n");
        printf("|               List Game                |\n");
        printf("|             Horror Week End            |\n");
        printf("==========================================\n");
        printf("1. Prey \n");
        printf("2. Nope \n");
        printf("3. X \n");
        printf("4. The Excorcist\n");
        printf("5. The Hereditary \n");
        printf("6. The Conjuring \n");
        printf("7. The Shinning \n");
        printf("8. The Texas Chainsaw Massacre \n");
        printf("9. The Ring\n");
        printf("10. Sinister\n");
        printf("==========================================\n");
        printf("| Pilih 3 Film yang diinginkan           |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan_film_1);
        printf("Film Yang Kamu Pilih: %s \n", nama_diskon_horror[pilihan_film_1 - 1]);
        scanf("%d", &pilihan_film_2);
        printf("Film Yang Kamu Pilih: %s \n", nama_diskon_horror[pilihan_film_2 - 1]);
        scanf("%d", &pilihan_film_3);
        printf("Film Yang Kamu Pilih: %s \n", nama_diskon_horror[pilihan_film_3 - 1]);
        printf("\e[1;1H\e[2J");
        printf("==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Film               |\n");
        printf("==========================================\n"); // output string
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Horror Week End \n");
        printf(" Lama Pinjam: %ld Hari\n", harga_spesial[3][0]);
        printf(" Banyak film Yang Disewa: 2\n");
        printf(" film Yang Dipilih: %s, %s, %s \n", nama_diskon_horror[pilihan_film_1 - 1],
               nama_diskon_horror[pilihan_film_2 - 1], nama_diskon_horror[pilihan_film_3 - 1]);
        printf(" Harga Sewa: Rp. %ld \n", harga_spesial[3][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
        scanf("%d", &pilihan);
        if (pilihan == 1)
        {
            main_menu();
        }
        else if (pilihan == 2)
        {
            exit(0);
        }
        else
        {
            printf("Input Salah\n");
            loading_function((char *)"Kembali Ke Main Menu", 21);
            main_menu();
        }
    };

    break;

    default:
    {
        printf("Input Salah!!!\n");
        loading_function((char *)"Restarting", 11);
        diskon_spesial();
    };
    break;
    }
}
// Diskon Special Function: END

// Effect Section: START

// Animasi Loading
void loading_function(char *myString, size_t lengthMyString)
{
    printf(myString);
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(1);
}

// Effect Section END
