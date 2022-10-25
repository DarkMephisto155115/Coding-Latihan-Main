#include <stdio.h>
#include <unistd.h>

int main()
{
    int x;
    printf("Masukkan Nilai Intreger: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("Bilangan %d merupakan bilangan Negatif\n", x);
    }else if (x > 0)
    {
        printf("Bilangan %d merupakan bilangan Positif\n", x);
    }else{
        printf("Bilangan %d merupakan Bukan bilangan Positif atau Negatif \n", x);
    }
    system("pause");// Untuk Cek Hasil Agar Program Tidak Tertutup
    return 0;
}
