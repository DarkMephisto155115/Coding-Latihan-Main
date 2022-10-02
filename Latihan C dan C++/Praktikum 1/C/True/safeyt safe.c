

void rental_film_rental()
{
    struct data_rental_film s3;
    struct data_list_film s4;
    char nama_pinjam[50];
    char tanggal_pinjam[50];
    int banyak_sewa_film;
    printf("Masukkan Nama Peminjam: \n");
    int c;
    /* discard all characters up to and including newline */
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    fgets(nama_pinjam, 50, stdin);
    printf("Masukkan Tanggal Pinjam: \n");
    scanf("%s", tanggal_pinjam);
    system("CLS");
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
    system("CLS");
    switch (s3.plhn_film_plh_pkt)
    {
    case 1:
        char nama_paket_1[50] = "Paket 1";
        int harga_sewa_1 = 5000;
        int lama_sewa_1 = 1;
        char judul_film_11[50];
        char judul_film_21[50];
        char judul_film_31[50];
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        if (banyak_sewa_film == 1)
        {

            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_11);
            kalkulasi_rental_film_1(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_11);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_21);
            kalkulasi_rental_film_2(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, judul_film_21, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_11);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_21);
            printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
            scanf("%s", judul_film_31);
            kalkulasi_rental_film_3(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, judul_film_21, judul_film_31, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function("Restarting");
            rental_film_rental();
        }

        break;

    case 2:
        char nama_paket_2[50] = "Paket 2";
        int harga_sewa_2 = 12000;
        int lama_sewa_2 = 3;
        char judul_film_12[50];
        char judul_film_22[50];
        char judul_film_32[50];
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        if (banyak_sewa_film == 1)
        {

            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_12);
            kalkulasi_rental_film_1(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_12);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_22);
            kalkulasi_rental_film_2(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, judul_film_22, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_12);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_22);
            printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
            scanf("%s", judul_film_32);
            kalkulasi_rental_film_3(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, judul_film_22, judul_film_32, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function("Restarting");
            rental_film_rental();
        }

        break;

    case 3:
        char nama_paket_3[50] = "Paket 3";
        int harga_sewa_3 = 25000;
        int lama_sewa_3 = 5;
        char judul_film_13[50];
        char judul_film_23[50];
        char judul_film_33[50];
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        if (banyak_sewa_film == 1)
        {

            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_13);
            kalkulasi_rental_film_1(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_13);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_23);
            kalkulasi_rental_film_2(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, judul_film_23, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_13);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_23);
            printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
            scanf("%s", judul_film_33);
            kalkulasi_rental_film_3(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, judul_film_23, judul_film_33, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function("Restarting");
            rental_film_rental();
        }

        break;

    case 4:
        char nama_paket_6[50] = "Personal";
        int harga_sewa_6 = 8000;
        int lama_sewa_6;
        char judul_film_16[50];
        char judul_film_26[50];
        char judul_film_36[50];
        printf("Berapa lama durasi sewa? \n");
        scanf("%d", &lama_sewa_6);
        printf("Berapa banyak film yang ingin disewa?\n");
        scanf("%d", &banyak_sewa_film);
        if (banyak_sewa_film == 1)
        {

            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_16);
            kalkulasi_rental_film_1_personal(harga_sewa_6, lama_sewa_6, nama_paket_6, judul_film_16, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 2)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_16);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_26);
            kalkulasi_rental_film_2_personal(harga_sewa_6, lama_sewa_6, nama_paket_6, judul_film_16, judul_film_26, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
        }
        else if (banyak_sewa_film == 3)
        {
            printf("film apa yang ingin kamu sewa?\n");
            scanf("%s", judul_film_16);
            printf("Masukkan film Lainnya yang ingin kamu sewa\n");
            scanf("%s", judul_film_26);
            printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
            scanf("%s", judul_film_36);
            kalkulasi_rental_film_3_personal(harga_sewa_5, lama_sewa_5, nama_paket_5, judul_film_15, judul_film_25, judul_film_35, nama_pinjam, tanggal_pinjam); //(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
        }
        else
        {
            printf("Input Salah");
            loading_function("Restarting");
            rental_film_rental();
        }
        break;
    default:
        printf("Input Salah\n");
        loading_function("Restarting");
        rental_film_rental();

        break;
    }
}

void kalkulasi_rental_film_1(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film[50], char nama_pinjam_[50], char tanggal_pinjam_[50])
{
    struct data_rental_film s3;
    int z = 1;
    long int x = harga_sewa;
    int y = lama_sewa;
    int pilihan;

    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s \n", nama_film);
    printf(" Harga Sewa: Rp. %d \n", harga_sewa);
    printf(" Diskon: 0 \n");
    printf(" Total Biaya: Rp. %d\n", harga_sewa);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}

void kalkulasi_rental_film_2(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film_1[50], char nama_film_2[50], char nama_pinjam_2[50], char tanggal_pinjam_2[50])
{
    struct data_rental_film s3;
    int z = 2;
    long int x = harga_sewa * z;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon = x * 0.05;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_2);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_2);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s, %s \n", nama_film_1, nama_film_2);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}

void kalkulasi_rental_film_3(int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film_1[50], char nama_film_2[50], char nama_film_3[50], char nama_pinjam_3[50], char tanggal_pinjam_3[50])
{
    struct data_rental_film s3;
    int z = 3;
    long int x = harga_sewa * z;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon = x * 0.1;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_3);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_3);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s, %s, %s \n", nama_film_1, nama_film_2, nama_film_3);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}

void kalkulasi_rental_film_1_personal(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film[50], char nama_pinjam_[50], char tanggal_pinjam_[50])
{
    struct data_rental_film s3;
    int z = 1;
    long int x = harga_sewa * lama_sewa;
    int y = lama_sewa;
    long int total_biaya;
    int pilihan;

    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s \n", nama_film);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: 0 \n");
    printf(" Total Biaya: Rp. %d\n", x);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}

void kalkulasi_rental_film_2_personal(long int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film_1[50], char nama_film_2[50], char nama_pinjam_2[50], char tanggal_pinjam_2[50])
{
    struct data_rental_film s3;
    int z = 2;
    long int x = (harga_sewa * z) * lama_sewa;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon = x * 0.05;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_2);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_2);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s, %s \n", nama_film_1, nama_film_2);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}

void kalkulasi_rental_film_3_personal(int harga_sewa, int lama_sewa, char nama_paket[50], char nama_film_1[50], char nama_film_2[50], char nama_film_3[50], char nama_pinjam_3[50], char tanggal_pinjam_3[50])
{
    struct data_rental_film s3;
    int z = 3;
    long int x = (harga_sewa * z) * lama_sewa;
    int y = lama_sewa;
    int pilihan;
    long int diskon;
    long int total_biaya;
    diskon = x * 0.1;
    total_biaya = x - diskon;
    printf("\n\n\n==========================================\n");
    printf("|            Nota Pembayaran             |\n");
    printf("|              Rental Film               |\n");
    printf("==========================================\n");
    printf(" Nama : %s ", nama_pinjam_3);
    printf("Tanggal Pinjam: %s\n", tanggal_pinjam_3);
    printf(" Jenis Paket: %s \n", nama_paket);
    printf(" Lama Pinjam: %d Hari\n", lama_sewa);
    printf(" Banyak film Yang Disewa: %d\n", z);
    printf(" film Yang Dipilih: %s, %s, %s \n", nama_film_1, nama_film_2, nama_film_3);
    printf(" Harga Sewa: Rp. %d \n", x);
    printf(" Diskon: %d \n", diskon);
    printf(" Total Biaya: Rp. %d\n", total_biaya);
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
        loading_function("Kembali Ke Main Menu");
        main_menu();
    }
}
