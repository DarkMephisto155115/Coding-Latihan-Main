#include <stdio.h>

int main()
{
    char nama_lengkap[50];

    fgets(nama_lengkap, 30, stdin);
    puts(nama_lengkap);
    printf("%s", nama_lengkap);
    return 0;
}