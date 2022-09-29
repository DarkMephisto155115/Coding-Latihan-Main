#include <stdio.h>
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    int siswa_1, siswa_2, siswa_3;
    int rata_rata;

    printf("Masukkan Nilai siswa Pertama \n");
    scanf("%d", &siswa_1);
    printf("Masukkan Nilai siswa Kedua \n");
    scanf("%d", &siswa_2);
    printf("Masukkan Nilai siswa Ketiga \n");
    scanf("%d", &siswa_3);
    rata_rata = (siswa_1 + siswa_2 + siswa_3) / 3;
    printf("Rata-rata nilai yang diperoleh adalah: %d\n", rata_rata);
    return 0;
}