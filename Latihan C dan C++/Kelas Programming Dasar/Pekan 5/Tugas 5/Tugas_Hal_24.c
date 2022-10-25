#include <stdio.h>
#include <unistd.h>

int main()
{
    int jam;
    int menit;
    int detik;
    printf("Masukkan Jam: ");
    scanf("%d", &jam);
    printf("Masukkan Menit: ");
    scanf("%d", &menit);
    printf("Masukkan Detik: ");
    scanf("%d", &detik);
    if (jam >= 0 && jam <= 23)
    {
        printf("Nilai Jam Valid\n");
    }else{
        printf("Nilai Jam Tidak Valid\n");
    }
    if (menit >= 0 && menit <= 59)
    {
        printf("Nilai Menit Valid\n");
    }else{
        printf("Nilai Menit Tidak Valid\n");
    }
    if (detik >= 0 && detik <= 59)
    {
        printf("Nilai Detik Valid\n");
    }else{
        printf("Nilai Detik Tidak Valid\n");
    }


    system("pause");// Untuk Cek Hasil Agar Program Tidak Tertutup
    return 0;
}
