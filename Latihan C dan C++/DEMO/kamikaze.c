#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    fflush stdin;
    system("CLS");
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int pilihan_menu;
    int harga_spesial[4][2] = {{7, 50000}, {3, 25000}, {3, 20000}, {2, 8000}};
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
        printf("\n\n\n==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Game               |\n");
        printf("==========================================\n");
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Diskon Special\n");
        printf(" Lama Pinjam: %d Hari\n", harga_spesial[0][0]);
        printf(" Banyak film Yang Disewa: 1\n");
        printf(" film Yang Dipilih: Red Dead Redemption 2 \n");
        printf(" Harga Sewa: Rp. %d \n", harga_spesial[0][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
    };
    break;
    case 2:
    {
        printf("\n\n\n==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Film               |\n");
        printf("==========================================\n");
        printf("Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Diskon Special\n");
        printf(" Lama Pinjam: %d Hari\n", harga_spesial[1][0]);
        printf(" Banyak film Yang Disewa: 4\n");
        printf(" Film Yang Dipilih: Avenger, Avenger: Age Of Ultron,\n Avenger: Infinity War, Avenger: EndGame \n");
        printf(" Harga Sewa: Rp. %d \n", harga_spesial[1][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
    };
    break;
    case 3:
    {
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
        printf("\n\n\n==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Game               |\n");
        printf("==========================================\n");
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Lets Play Together\n");
        printf(" Lama Pinjam: %d Hari\n", harga_spesial[2][0]);
        printf(" Banyak film Yang Disewa: 2\n");
        printf(" film Yang Dipilih: %s, %s \n", nama_diskon_multiplayer[pilihan_game_1 - 1],
               nama_diskon_multiplayer[pilihan_game_2 - 1]);
        printf(" Harga Sewa: Rp. %d \n", harga_spesial[2][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
    };

    break;
    case 4:
    {
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
        printf("\n\n\n==========================================\n");
        printf("|            Nota Pembayaran             |\n");
        printf("|              Rental Film               |\n");
        printf("==========================================\n");
        printf(" Nama : %s ", nama_pinjam);
        printf("Tanggal Pinjam: %s\n", tanggal_pinjam);
        printf(" Jenis Paket: Lets Play Together\n");
        printf(" Lama Pinjam: %d Hari\n", harga_spesial[3][0]);
        printf(" Banyak film Yang Disewa: 2\n");
        printf(" film Yang Dipilih: %s, %s, %s \n", nama_diskon_horror[pilihan_film_1 - 1],
               nama_diskon_horror[pilihan_film_2 - 1], nama_diskon_horror[pilihan_film_3 - 1]);
        printf(" Harga Sewa: Rp. %d \n", harga_spesial[3][1]);
        printf("==========================================\n");
        printf("1. Kembali Ke Main Menu                  |\n");
        printf("2. Exit                                  |\n");
        printf("==========================================\n");
    };

    break;

    default:
    {
    };
    break;
    }
    system("pause");
    return 0;
}

/*
List Game
1. Divinity Original Sin 2
2. Diablo 3
3. Shovel Knight
4. It Takes Two
5. Uncharted 4
6. Lego Star Wars: The SkyWalker Saga
7. Overcooked
8. Portal 2
9. A Way Out
10. Borderland 3

List Film
1. Prey
2. Nope
3. X
4. The Excorcist
5.  Hereditary
6. The Conjuring
7. The Shinning
8. The Texas Chainsaw Massacre
9. The Ring
10. Sinister
*/