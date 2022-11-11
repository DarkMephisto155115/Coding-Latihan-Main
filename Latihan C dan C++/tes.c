#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Masukkan No Pertama: ");
    scanf("%d", &x);
    printf("Masukkan No Kedua: ");
    scanf("%d", &y);
    int total = x * y;
    printf("\e[1;1H\e[2J");
    printf("Hasilnya Adalah: %d", total);
    scanf("%d", &z);
    return 0;
}