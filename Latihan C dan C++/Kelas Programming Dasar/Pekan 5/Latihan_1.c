#include <stdio.h>
#include <unistd.h>

int main()
{
    int x;
    int y;
    printf("Masukkan Nilai X: ");
    scanf("%d", &x);
    printf(" \nMasukkan Nilai Y: ");
    scanf("%d", &y);
    printf("\nNilai %d > %d adalah: ", x, y);
    if (x>y)
    {
        printf("Benar \n");
    }else{
        printf("Salah \n");
    }
    system("pause");
    return 0;
}
