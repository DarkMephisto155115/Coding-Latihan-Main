void rental_film_rental(){
   struct data_rental_film s3;
   struct data_list_film s4;
   char nama_pinjam[50];
   char tanggal_pinjam[50];
   int banyak_sewa_film;
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
   char nama_paket_1[50]= "Paket 1";
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
        kalkulasi_rental_film_1(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==2)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_11);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_21);
        kalkulasi_rental_film_2(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, judul_film_21, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==3)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_11);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_21);
        printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_film_31);
        kalkulasi_rental_film_3(harga_sewa_1, lama_sewa_1, nama_paket_1, judul_film_11, judul_film_21, judul_film_31, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
    }else{
      printf("Input Salah");
      loading_function("Restarting");
      rental_film_rental();
    }
    
    
    
    break;

   case 2:
   char nama_paket_2[50]= "Paket 2";
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
        kalkulasi_rental_film_1(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==2)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_12);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_22);
        kalkulasi_rental_film_2(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, judul_film_22, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==3)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_12);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_22);
        printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_film_32);
        kalkulasi_rental_film_3(harga_sewa_2, lama_sewa_2, nama_paket_2, judul_film_12, judul_film_22, judul_film_32, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
    }else{
      printf("Input Salah");
      loading_function("Restarting");
      rental_film_rental();
    }
    
    
    
    break;

   case 3:
   char nama_paket_3[50]= "Paket 3";
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
        kalkulasi_rental_film_1(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==2)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_13);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_23);
        kalkulasi_rental_film_2(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, judul_film_23, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1, nama_film_2, nama_pinjam, tanggal_pinjam)
    }else if (banyak_sewa_film==3)
    {
        printf("film apa yang ingin kamu sewa?\n");
        scanf("%s", judul_film_13);
        printf("Masukkan film Lainnya yang ingin kamu sewa\n");
        scanf("%s", judul_film_23);
        printf("Masukkan film Lainnya lagi yang ingin kamu sewa\n");
        scanf("%s", judul_film_33);
        kalkulasi_rental_film_3(harga_sewa_3, lama_sewa_3, nama_paket_3, judul_film_13, judul_film_23, judul_film_33, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film_1,nama_film_2,nama_film_3, nama_pinjam, tanggal_pinjam)
    }else{
      printf("Input Salah");
      loading_function("Restarting");
      rental_film_rental();
    }
    
    
    
    break;

   case 4:
   char nama_paket_4[50]= "Personal";
   int harga_sewa_4 = 80000;
   int lama_sewa_4;
   char judul_film_14[50];
   printf("film apa yang ingin kamu sewa?\n");
   scanf("%s", judul_film_14);
   kalkulasi_rental_film_1(harga_sewa_4, lama_sewa_4, nama_paket_4, judul_film_14, nama_pinjam, tanggal_pinjam);//(harga_sewa, lama_sewa, nama_paket, nama_film, nama_pinjam, tanggal_pinjam)
    break;
