#include <stdio.h>

int main()
{
    int banyak_siswa;
    float tinggi_siswa;
    float rata_rata;
    float total = 0;
    int i;
    printf("Masukkan Jumlah siswa: ");
    scanf("%d", &banyak_siswa);
    for (i = 0; i < banyak_siswa; i++)
    {
        printf("Data tinggi siswa ke-%d: ", (i + 1));
        scanf("%f", &tinggi_siswa);
        total += tinggi_siswa;
    }
    rata_rata = total / i;
    printf("Rata-rata tinggi badan siswa di kelas: %0.2f", rata_rata);
    return 0;
}