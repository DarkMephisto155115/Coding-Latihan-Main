#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

// Clear Display Start
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

void ClearScreen()
{
    HANDLE hStdOut;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD count;
    DWORD cellCount;
    COORD homeCoords = {0, 0};

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hStdOut == INVALID_HANDLE_VALUE)
        return;

    /* Get the number of cells in the current buffer */
    if (!GetConsoleScreenBufferInfo(hStdOut, &csbi))
        return;
    cellCount = csbi.dwSize.X * csbi.dwSize.Y;

    /* Fill the entire buffer with spaces */
    if (!FillConsoleOutputCharacter(
            hStdOut,
            (TCHAR)' ',
            cellCount,
            homeCoords,
            &count))
        return;

    /* Fill the entire buffer with the current colors and attributes */
    if (!FillConsoleOutputAttribute(
            hStdOut,
            csbi.wAttributes,
            cellCount,
            homeCoords,
            &count))
        return;

    /* Move the cursor home */
    SetConsoleCursorPosition(hStdOut, homeCoords);
}

#else // !_WIN32
#include <unistd.h>
#include <term.h>

void ClearScreen()
{
    if (!cur_term)
    {
        int result;
        setupterm(NULL, STDOUT_FILENO, &result);
        if (result <= 0)
            return;
    }

    putp(tigetstr("clear"));
}
#endif
// Clear Display End

//  THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)
//  Missing Feature Array and Loop @andika
//  Missing Loop Only now @andika
//  Idk how loop supposed to work in this project @Dark_Mephisto
//  wait we can create array push with loop @andika
//  Yeah, as long as there is loop i think LGTM @Dark_Mephisto
//  global data for login and register @andika
//  well thats was easy i think we played to much anime game to know how to use for loop @dark_mephisto
//  call .\Rental_GAME+FILM_FULL_UPGRADE.exe
//  For fuck sake your login function argument are all over the place thats why it giving me error everytime @andika

/*
To Do List
1. rework price calculation function [DONE]
2. rework choosing game name [DONE]?
3. rework nota[]
4. create push array function [DONE]?? kinda??
5. write nota to file as data[]
6. For Loop ???? [DONE]
7. Rework price calculation to function [DONE]
9. Simple login system [DONE]
10. disable 3 limit
11. more simple function
12. more array

*/

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
void kalkulasi_rental_game(long int, int, int, char[50], char *[][50], char[], char[50]);

// Sistem Diskon Spesial
void diskon_spesial();

// Global Data
char user_name[20];
char pass_word[20];
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
    start_menu();
    return 0;
}

// Start Menu Function Section: START

void login_function()
{
    {

        int cek_login;
        int cek_login2;

        printf("\n\t\t\t\tEnter your username:\n"); // output string
        printf("\t\t\t\t");                         // ??????
        scanf(" %s", user_name);                    // input user_name
        printf("\t\t\t\tEnter your password:\n");   // output string
        printf("\t\t\t\t");                         //?????
        scanf(" %s", pass_word);                    // input pass_word
        cek_login = cek_login_1(user_name, pass_word);
        cek_login2 = cek_login_2(user_name, pass_word, user_name_2, pass_word_2);
        if (cek_login == 1) // cek_login untuk akses Menu
        {
            sleep(1);
            printf("\n\t\t\t\tLogin Berhasil!!! \n");
            loading_function((char *)"\n\t\t\t\tLogging in", 15);
            main_menu();
        }
        else if (cek_login2 == 1)
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
            start_menu();
        }
    }
}

void start_menu()
{
    ClearScreen();
    int pilihan;
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
    printf("\t\t\t\tMasukkan Salah Satu!\n");
    printf("\t\t\t\t");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        login_function();
        break;
    case 2:
        printf("\n\t\t\t\tEnter your username:\n");
        printf("\t\t\t\t");
        scanf(" %s", user_name_2);
        printf("\t\t\t\tEnter your password:\n");
        printf("\t\t\t\t");
        scanf(" %s", pass_word_2);
        start_menu();
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
    ClearScreen();
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
    int pilihan;
    scanf("%d", &pilihan); // input
    switch (pilihan)
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
    ClearScreen();
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
        printf("Input Salah\n");
        loading_function((char *)"Restarting", 11);
        rental_game_menu();
        break;
    }
}

void rental_game_harga()
{
    ClearScreen();
    int pilihan;
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
    ClearScreen();
    int pilihan;
    printf("=====================================================================================================\n");
    printf("|                                                Peraturan                                          |\n");
    printf("|                                               Rental Game                                         |\n");
    printf("=====================================================================================================\n");
    printf("1. Dilarang Merusak Kaset Game (Apabila terbukti melakukan akan dikenakan sanksi 2X harga game) \n");
    printf("2. Jaga Kaset Game Agar Tidak Lecet \n");
    printf("3. Apabila Telat Mengembalikan Akan Dikenakan Sanksi 20K Setiap Hari\n");
    printf("4. Apabila Terjadi Error Bukan Tnaggung Jawab Kami\n");
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
    ClearScreen();
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int banyak_sewa_game;
    const long int harga_lama_sewa[6][2] = {{7000, 3}, {6000, 7}, {5000, 14}, {5000, 2}, {4000, 30}, {8000, 0}};
    char nama_paket[6][50] = {"Paket 1", "Paket 2", "Paket 3", "Paket Sabtu-Minggu", "Paket Libur Panjang", "Paket Personal"};
    int i;
    int pilihan;
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
    ClearScreen();
    printf("====================================================================\n");
    printf("|                                Harga                             |\n");
    printf("|                             Rental Game                          |\n");
    printf("====================================================================\n");
    printf("1. Paket 1: 21k Setiap Game 3 Hari  \n");
    printf("2. Paket 2: 50k Setiap Game 7 Hari\n");
    printf("3. Paket 3: 80k Setiap Game 14 Hari\n");
    printf("4. Paket Sabtu-Minggu: 10k Untuk 1 Game (Maksimal 1 Game) \n");
    printf("5. Paket Libur Panjang: 150k Setiap Game 30 Hari\n");
    printf("6. Personal: 10k Untuk Sehari Setiap 1 Game (Maksimal 30 Hari)\n");
    printf("=================================================================== \n");
    printf("Pilih Jenis Paket                                                 |\n");
    printf("=================================================================== \n");
    scanf("%d", &pilihan);
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    char *judul_game[banyak_sewa_game][50];
    if (pilihan == 4)
    {
        printf("Masukkan game yang ingin disewa! \n");
        scanf(" %[^\n]s", judul_game[i]);
    }
    else
    {
        for (i = 0; i <= (banyak_sewa_game - 1); i++)
        {
            printf("Masukkan game yang ingin disewa! \n");
            scanf(" %[^\n]s", judul_game[i]);
        }
    }
    switch (pilihan)
    {
    case 1:
    {
        kalkulasi_rental_game(harga_lama_sewa[0][0], harga_lama_sewa[0][1], banyak_sewa_game, nama_paket[0], judul_game, nama_pinjam, tanggal_pinjam);
    }

    break;

    case 2:
    {
        kalkulasi_rental_game(harga_lama_sewa[1][0], harga_lama_sewa[1][1], banyak_sewa_game, nama_paket[1], judul_game, nama_pinjam, tanggal_pinjam);
    }

    break;

    case 3:
    {
        kalkulasi_rental_game(harga_lama_sewa[2][0], harga_lama_sewa[2][1], banyak_sewa_game, nama_paket[2], judul_game, nama_pinjam, tanggal_pinjam);
    }

    break;

    case 4:
    {
        kalkulasi_rental_game(harga_lama_sewa[3][0], harga_lama_sewa[3][1], banyak_sewa_game, nama_paket[3], judul_game, nama_pinjam, tanggal_pinjam);
    }
    break;
    case 5:
    {
        kalkulasi_rental_game(harga_lama_sewa[4][0], harga_lama_sewa[4][1], banyak_sewa_game, nama_paket[4], judul_game, nama_pinjam, tanggal_pinjam);
    }

    break;
    case 6:
    {
        printf("Berapa lama durasi sewa? \n");
        scanf("%d", &harga_lama_sewa[5][1]);
        kalkulasi_rental_game(harga_lama_sewa[5][0], harga_lama_sewa[5][1], banyak_sewa_game, nama_paket[5], judul_game, nama_pinjam, tanggal_pinjam);
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

void kalkulasi_rental_game(long int harga_sewa, int lama_sewa, int banyak_sewa_game, char nama_paket[50], char *nama_game[][50], char nama_pinjam_[], char tanggal_pinjam_[50]) // Operation
{
    ClearScreen();
    int i = 0;
    int pilihan;
    long int biaya = (harga_sewa * banyak_sewa_game) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_game);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_game);
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama: %s", nama_pinjam_);
    printf(" Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s\n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    printf(" Game Yang Dipilih: ");
    for (i = 0; i < banyak_sewa_game; i++)
    {
        printf("%s", nama_game[i]);
        if (i < (banyak_sewa_game - 1))
        {
            printf(", ");
        }
    }
    printf(".");
    printf("\n");
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Save File                             |\n");
    printf("2. Kembali Ke Main Menu                  |\n");
    printf("3. Exit                                  |\n");
    printf("==========================================\n");

    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        // file print
        printf("Masukkan Nama File:\n");
        char gmfname[30];
        scanf(" %[^\n]s", gmfname);
        strcat(gmfname, ".txt");
        FILE *gamef;
        gamef = fopen(gmfname, "a");
        if (gamef == NULL)
        {
            loading_function("\nFile gagal dibuat", 18);
        }
        else
        {
            loading_function("\nSaving Data", 14);
        }

        fprintf(gamef, "==========================================\n");
        fprintf(gamef, "|            Nota Pembayaran             |\n");
        fprintf(gamef, "|              Rental Game               |\n");
        fprintf(gamef, "==========================================\n");
        fprintf(gamef, " Nama : %s", nama_pinjam_);
        fprintf(gamef, " Tanggal Pinjam: %s\n", tanggal_pinjam_);
        fprintf(gamef, " Jenis Paket: %s\n", nama_paket);
        fprintf(gamef, " Lama Pinjam: %d Hari\n", lama_sewa);
        fprintf(gamef, " Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
        fprintf(gamef, " Game yang dipilih: ");
        for (i = 0; i < banyak_sewa_game; i++)
        {
            fprintf(gamef, "%s", nama_game[i]);
            if (i < (banyak_sewa_game - 1))
            {
                fprintf(gamef, ", ");
            }
        }
        fprintf(gamef, "\n");
        fprintf(gamef, " Harga Sewa: Rp. %ld \n", biaya);
        fprintf(gamef, " Diskon: %ld\n", diskon);
        fprintf(gamef, " Total Biaya: Rp. %ld\n", total_biaya);
        fprintf(gamef, "==========================================\n");
        if (gamef != NULL)
        {
            loading_function("Data Saved", 14);
        }
        fclose(gamef);
        main_menu();
    }
    else if (pilihan == 2)
    {
        main_menu();
    }
    else if (pilihan == 3)
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
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
    ClearScreen();
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
    ClearScreen();
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
    ClearScreen();
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int banyak_sewa_film;
    char judul_film[3][50];
    int i;
    int pilihan;
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
    scanf("%d", &pilihan);
    printf("\e[1;1H\e[2J");
    switch (pilihan)
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
    ClearScreen();
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
    ClearScreen();
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
    ClearScreen();
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
    int pilihan;
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
    scanf("%d", &pilihan);
    switch (pilihan)
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
    ClearScreen();
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
        ClearScreen();
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
        ClearScreen();
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
        ClearScreen();
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
        ClearScreen();
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
