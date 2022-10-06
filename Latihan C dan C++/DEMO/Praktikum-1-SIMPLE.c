#include <stdio.h>
#include <unistd.h>

// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

void persegi_panjang();
void persegi();
void segitiga();
void lingkaran();
void jajar_genjang();

int main()
{
    system("CLS"); // Menghilang Display
    fflush stdin;  // Menghapus Input Yang Sudah Dimasukkan
    int pilihan_menu;
    printf("===========================================\n");
    printf("|  Pilih Bangun datar yang ingin dihitung |\n");
    printf("===========================================\n");
    printf("1. Persegi Panjang\n");
    printf("2. Persegi\n");
    printf("3. Segitiga\n");
    printf("4. Lingkaran\n");
    printf("5. Jajar Genjang\n");
    printf("===========================================\n");
    scanf("%d", &pilihan_menu);
    switch (pilihan_menu) // If tapi lebih keren dan efektif
    {
    case 1:
        persegi_panjang();
        break;
    case 2:
        persegi();
        break;
    case 3:
        segitiga();
        break;
    case 4:
        lingkaran();
        break;
    case 5:
        jajar_genjang();
        break;

    default:
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
        break;
    }
}

// Function Luas dan Keliling Persegi Panjang
void persegi_panjang()
{
    fflush stdin;
    system("CLS");
    int panjang;
    int lebar;
    int luas;
    int keliling;
    int pilihan;
    printf("Masukkan Panjang: \n");
    scanf("%d", &panjang);
    printf("Masukkan Lebar: \n");
    scanf("%d", &lebar);
    luas = panjang * lebar;
    keliling = (2 * panjang) + (2 * lebar);
    printf("Luas: %d \n", luas);
    printf("Keliling: %d \n", keliling);
    printf("============================\n");
    printf("1. Kembali Ke Menu\n");
    printf("2. Ulang\n");
    printf("============================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main();
    }
    else if (pilihan == 2)
    {
        persegi_panjang();
    }
    else
    {
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
    }
}
// Function Luas dan Keliling Persegi
void persegi()
{
    fflush stdin;
    system("CLS");
    int sisi;
    int luas;
    int keliling;
    int pilihan;
    printf("Masukkan Sisi: \n");
    scanf("%d", &sisi);
    luas = sisi * sisi;
    keliling = 4 * sisi;
    printf("Luas: %d \n", luas);
    printf("Keliling: %d \n", keliling);
    printf("============================\n");
    printf("1. Kembali Ke Menu\n");
    printf("2. Ulang\n");
    printf("============================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main();
    }
    else if (pilihan == 2)
    {
        persegi();
    }
    else
    {
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
    }
}

// Function Luas dan Keliling Segitiga
void segitiga()
{
    fflush stdin;
    system("CLS");
    int alas;
    int tinggi;
    int panjang_sisi_kiri;
    int panjang_sisi_kanan;
    int sisi;
    int luas;
    int keliling;
    int pilihan;
    printf("Masukkan Alas: \n");
    scanf("%d", &alas);
    printf("Masukkan Tinggi: \n");
    scanf("%d", &tinggi);
    printf("Masukkan Panjang Sisi Kiri: \n");
    scanf("%d", &panjang_sisi_kiri);
    printf("Masukkan Panjang Sisi Kanan: \n");
    scanf("%d", &panjang_sisi_kanan);
    luas = (alas * tinggi) * 1 / 2;
    keliling = alas + panjang_sisi_kanan + panjang_sisi_kiri;
    printf("Luas: %d \n", luas);
    printf("Keliling: %d \n", keliling);
    printf("============================\n");
    printf("1. Kembali Ke Menu\n");
    printf("2. Ulang\n");
    printf("============================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main();
    }
    else if (pilihan == 2)
    {
        segitiga();
    }
    else
    {
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
    }
}

// Function Luas dan Keliling Lingkaran
void lingkaran()
{
    fflush stdin;
    system("CLS");
    int jari_jari;
    const float phi = 3.14;
    float luas;
    float keliling;
    int pilihan;
    printf("Masukkan Jari-jari: \n");
    scanf("%d", &jari_jari);
    luas = phi * (jari_jari * jari_jari);
    keliling = 2 * (phi * jari_jari);
    printf("Luas: %f \n", luas);
    printf("Keliling: %f \n", keliling);
    printf("============================\n");
    printf("1. Kembali Ke Menu\n");
    printf("2. Ulang\n");
    printf("============================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main();
    }
    else if (pilihan == 2)
    {
        lingkaran();
    }
    else
    {
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
    }
}

// Function Luas dan Keliling Jajar Genjang
void jajar_genjang()
{
    fflush stdin;
    system("CLS");
    int alas;
    int tinggi;
    int panjang_sisi_kiri;
    int panjang_sisi_kanan;
    int sisi;
    int luas;
    int keliling;
    int pilihan;
    printf("Masukkan Alas: \n");
    scanf("%d", &alas);
    printf("Masukkan Tinggi: \n");
    scanf("%d", &tinggi);
    printf("Masukkan Panjang Sisi Kiri: \n");
    scanf("%d", &panjang_sisi_kiri);
    printf("Masukkan Panjang Sisi Kanan: \n");
    scanf("%d", &panjang_sisi_kanan);
    luas = alas * tinggi;
    keliling = 2 * (panjang_sisi_kanan + panjang_sisi_kiri);
    printf("Luas: %d \n", luas);
    printf("Keliling: %d \n", keliling);
    printf("============================\n");
    printf("1. Kembali Ke Menu\n");
    printf("2. Ulang\n");
    printf("============================\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        main();
    }
    else if (pilihan == 2)
    {
        jajar_genjang();
    }
    else
    {
        printf("Input Salah \n");
        printf("Kembali ke menu \n");
        sleep(2);
        main();
    }
}