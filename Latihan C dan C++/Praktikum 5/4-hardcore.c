#include <stdio.h>


int main()
{
    float sum;
    double average;
    int banyak_siswa;
    printf("Masukkan Banyak Siswa:\n");
    scanf("%d", &banyak_siswa);
    int tinggi_badan[banyak_siswa];
    float total = sizeof(tinggi_badan) / sizeof(tinggi_badan[0]);
    for (int i = 0; i < banyak_siswa; i++)
    {
        printf("Masukkan Tinggi Badan ke-%d (cm): ", (i+1));
        scanf("%d", &tinggi_badan[i]);
        sum = sum + tinggi_badan[i];
    }
    average = sum / total;
    printf("rata-ratanya adalah: %0.2lf", average);
    return 0;
}
