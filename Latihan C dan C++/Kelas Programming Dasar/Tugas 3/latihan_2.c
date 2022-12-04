#include <stdio.h>

int main()
{
    int tahun_rthujan_arr[4][2] = {{2010, 500},
                                   {2011, 557},
                                   {2012, 480},
                                   {2013, 490}};
    printf("============\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%d|", tahun_rthujan_arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("============\n");

    return 0;
}