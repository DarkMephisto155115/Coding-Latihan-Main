#include <stdio.h>

int main()
{
    int jumlah_percobaan;
    float s;
    int v = 30;
    float t;
    float total = 0;
    float rata_rata;
    int i = 0;
    printf("Masukkan Jumlah Percobaan: ");
    scanf("%d", &jumlah_percobaan);
    for (i; i < jumlah_percobaan; i++)
    {
        printf("Masukkan data percobaan ke-%d : ", (i + 1));
        scanf("%f", &t);
        s = v * t;
        total += s;
    }
    rata_rata = total / i;
    printf("%d \n", i);
    printf("Rata-rata jarak tempuh: %0.2f \n", rata_rata);
    if (rata_rata >= 28)
    {
        printf("Baterai Kategori: A\n");
    }
    else if (rata_rata <= 15)
    {
        printf("Baterai Kategori: C\n");
    }
    else
    {
        printf("Baterai Kategori: B\n");
    }

    return 0;
}