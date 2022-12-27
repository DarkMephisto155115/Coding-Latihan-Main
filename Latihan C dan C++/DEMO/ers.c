#include <stdio.h>

int main()
{
    char kata[50];
    int n, i;
    printf("Masukkan Sebuah Kata: ");
    scanf(" %s", kata);
    printf("MAsukkan Sebuah Angka Integer: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%s\n", kata);
    }
    return 0;
}