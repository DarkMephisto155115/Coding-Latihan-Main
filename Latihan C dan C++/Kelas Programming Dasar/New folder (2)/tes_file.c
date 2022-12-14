#include <stdio.h>

int main()
{
    FILE *pf;
    char isifile[50];

    pf = fopen("Brain_Dance.txt", "r");
    if (pf == NULL)
    {
        printf("File Tidak Ada\n");
    }
    else
    {
        printf("File Berhasil Dibuka!!!\n");
        fgets(isifile, 30, pf);
        printf("%s\n", isifile);
        fgets(isifile, 30, pf);
        printf("%s\n", isifile);
        fgets(isifile, 30, pf);
        printf("%s\n", isifile);
    }
    fclose(pf);
    return 0;
}
