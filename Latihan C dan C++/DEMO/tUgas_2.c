#include <stdio.h>
#include <string.h>

int main()
{
    char kata[30][50];
    char kata_2[50];
    int angka;
    int i;
    float rata2;
    int total = 0;
    int jumlah_data = 0;
    FILE *NOMOR;
    NOMOR = fopen("nilai.txt", "r");
    if (NOMOR == NULL)
    {
        printf("File tidak ada");
    }
    else
    {
        while (!feof(NOMOR))
        {
            fscanf(NOMOR, "%d", &angka);
            printf("%d\n", angka);
            total += angka;
            jumlah_data++;
        }
        rata2 = ((float)total / (float)jumlah_data);
        printf("Total: %d\n", total);
        printf("Jumlah data: %d\n", jumlah_data);
        printf("Rata-Rata: %0.2f\n", rata2);
    }
    fclose(NOMOR);
    return 0;
}
