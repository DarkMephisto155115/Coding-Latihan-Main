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
        for (i = 0; i < 29; i++)
        {

            fscanf(KATA, "%s", kata[i]);
            printf("%s\n", kata[i]);
            if (strcmp(kata[i], "down") == 0)
            {
                printf("DATA DITEMUKAN");
                break;
            }
        }
    }
    return 0;
}
