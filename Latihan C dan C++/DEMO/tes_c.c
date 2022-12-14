#include <stdio.h>
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

void kalkulasi_rental_game(long int harga_sewa, int lama_sewa, int banyak_sewa_game, char nama_paket[], char *nama_game[][50], char nama_pinjam_[], char tanggal_pinjam_[]) // Operation
{
    ClearScreen();
    printf("Masukkan Nama:\n");
    char pfname[30];
    scanf(" %[^\n]s", pfname);
    strcat(pfname, ".txt");
    FILE *pf;
    pf = fopen(pfname, "a");
    if (pf == NULL)
    {
        printf("File gagal dibuat\n");
    }
    else
    {
        printf("File bisa dibuat\n");
    }
    int pilihan;
    int i = 0;
    long int biaya = (harga_sewa * banyak_sewa_game) * lama_sewa;
    long int diskon = Kalkulasi_Diskon(harga_sewa, lama_sewa, banyak_sewa_game);
    long int total_biaya = Kalkulasi_Biaya(harga_sewa, lama_sewa, banyak_sewa_game);
    printf("==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Game               |\n");
    printf("==========================================\n");
    printf(" Nama : %s \n", nama_pinjam_);
    printf(" Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    printf(" Game yang dipilih: ");
    for (i = 0; i < banyak_sewa_game; i++)
    {
        printf("%s", nama_game[i]);
        if (i < (banyak_sewa_game - 1))
        {
            printf(", ");
        }
    }
    printf("\n");
    printf(" Harga Sewa: Rp. %ld \n", biaya);
    printf(" Diskon: %ld\n", diskon);
    printf(" Total Biaya: Rp. %ld\n", total_biaya);
    printf("==========================================\n");
    printf("1. Kembali Ke Main Menu                  |\n");
    printf("2. Exit                                  |\n");
    printf("==========================================\n");
    // file print
    fprintf(pf, "==========================================\n");
    fprintf(pf, "|            Nota Pembayaran             |\n");
    fprintf(pf, "|              Rental Game               |\n");
    fprintf(pf, "==========================================\n");
    fprintf(pf, " Nama : %s\n", nama_pinjam_);
    fprintf(pf, " Tanggal Pinjam: %s\n", tanggal_pinjam_);
    fprintf(pf, " Jenis Paket: %s\n", nama_paket);
    fprintf(pf, " Lama Pinjam: %d Hari\n", lama_sewa);
    fprintf(pf, " Banyak Game Yang Disewa: %d\n", banyak_sewa_game);
    fprintf(pf, " Game yang dipilih: ");
    for (i = 0; i < banyak_sewa_game; i++)
    {
        fprintf(pf, "%s", nama_game[i]);
        if (i < (banyak_sewa_game - 1))
        {
            fprintf(pf, ", ");
        }
    }
    fprintf(pf, "\n");
    fprintf(pf, " Harga Sewa: Rp. %ld \n", biaya);
    fprintf(pf, " Diskon: %ld\n", diskon);
    fprintf(pf, " Total Biaya: Rp. %ld\n", total_biaya);
    fprintf(pf, "==========================================\n");
    fclose(pf);
}

int main()
{

    char nama_paket_5[50] = "Libur Panjang";
    long int harga_sewa_5 = 4000; // 120.000
    int lama_sewa_5 = 30;
    int banyak_sewa_game;
    int i = 0;
    int x;
    printf("Berapa banyak game yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_game);
    char *judul_game[banyak_sewa_game][50];
    for (i = 0; i <= (banyak_sewa_game - 1); i++)
    {
        printf("Masukkan game yang ingin disewa! \n");
        scanf(" %[^\n]50s", judul_game[i]);
    }
    kalkulasi_rental_game(harga_sewa_5, lama_sewa_5, banyak_sewa_game, nama_paket_5, judul_game, "Andika", "10-12-2022");
    scanf(" %d", &x);
    return 0;
}