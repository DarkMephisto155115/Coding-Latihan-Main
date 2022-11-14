#include <stdio.h>

int main()
{
    int banyak_sewa_film;
    char judul_film[3][50];
    int i;

    printf("Berapa banyak film yang ingin disewa?\n");
    scanf("%d", &banyak_sewa_film);
    for (i = 0; i <= (banyak_sewa_film - 1); i++)
    {
        printf("Masukkan game yang ingin disewa! \n");
        scanf("%s", judul_film[i]);
    }

    if (i == 1)
    {
        printf("List game: %s", judul_film[0]);
    }
    else if (i == 2)
    {
        printf("List game: %s, %s", judul_film[0], judul_film[1]);
    }
    else if (i == 3)
    {
        printf("List game: %s, %s, %s", judul_film[0], judul_film[1], judul_film[2]);
    }
    else
    {
        printf("Input Salah\n");
    }

    return 0;
}