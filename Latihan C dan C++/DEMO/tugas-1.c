#include <stdio.h>
#include <string.h>

int main()
{
    char kata[30][50];
    char kata_2[50];
    int i;
    FILE *KATA;
    KATA = fopen("words.txt", "r");
    if (KATA == NULL)
    {
        printf("File tidak ada");
    }
    else
    {
        printf("Masukkan kata yang dicari: ");
        scanf(" %s", kata_2);
        while (!feof(KATA))
        {

            fscanf(KATA, "%s", kata[i]);
            printf("%s\n", kata[i]);
            if (strcmp(kata[i], kata_2) == 0)
            {
                printf("DATA DITEMUKAN \n");
                break;
            }
            i++;
        }
        if (strcmp(kata[i], kata_2) != 0)
        {
            printf("DATA TIDAK DITEMUKAN \n");
        }
    }
    fclose(KATA);
    return 0;
}
