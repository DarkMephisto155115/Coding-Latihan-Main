#include <stdio.h>

float waktu_tempuh(float s, float v)
{
    return s * v;
}

int main()
{
    float s;
    float s_2;
    float s_3;
    int v, v_2, v_3;

    printf("Masukkan data Percobaan 1\n");
    scanf("%d %f", &v, &s);
    printf("Masukkan data Percobaan 2\n");
    scanf("%d %f", &v_2, &s_3);
    printf("Masukkan data Percobaan 3\n");
    scanf("%d %f", &v_3, &s_3);
    printf("%d", v);
    float percobaan_1 = waktu_tempuh(s, v);
    float percobaan_2 = waktu_tempuh(s_2, v_2);
    float percobaan_3 = waktu_tempuh(s_3, v_3);
    float rata_rata = (percobaan_1 + percobaan_2 + percobaan_3) / 3;

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