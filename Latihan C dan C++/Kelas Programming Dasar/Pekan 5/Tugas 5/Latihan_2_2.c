#include <stdio.h>
#include <unistd.h>

int main()
{
    int curah_hujan;
    printf("Masukkan Curah Hujan: ");
    scanf("%d", &curah_hujan);
    if (curah_hujan < 1)
    {
        printf("Hujan Sangat Ringan\n");
    }else if (1 <= curah_hujan && curah_hujan <= 5)
    {
        printf("Hujan Ringan\n");
    }else if (5 <= curah_hujan && curah_hujan <= 10)
    {
        printf("Hujan Normal\n");
    }else if (10 <= curah_hujan && curah_hujan <= 20)
    {
        printf("Hujan Lebat\n");
    }else if (20 < curah_hujan)
    {
        printf("Hujan Sangat Lebat\n");
    }


    system("pause");// Untuk Cek Hasil Agar Program Tidak Tertutup
    return 0;
}
