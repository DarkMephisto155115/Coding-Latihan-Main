#include <stdio.h>
#include <unistd.h>

int main()
{
    int x_1;
    int x_2;
    int y_1;
    int y_2;
    printf("Masukkan Nilai Pecahan dengan format (x/y) contoh (3/4 atau 5/6) ");
    printf("\nMasukkan Nilai Pecahan Pertama : ");
    scanf("%d/%d", &x_1, &x_2 );
    printf("\nMasukkan Nilai Pecahan Kedua: ");
    scanf("%d/%d", &y_1, &y_2 );
    float hasil_x = (float)x_1/x_2;
    float hasil_y = (float)y_1/y_2;
    if (hasil_x > hasil_y)
    {
        printf("\nPecahan: %d/%d Adalah Bilangan Terbesar \n", x_1, x_2);
    }else{
        printf("\nPecahan: %d/%d Adalah Bilangan Terbesar \n", y_1, y_2);
    }
    system("pause");// Untuk Cek Hasil Agar Program Tidak Tertutup
    return 0;
}
