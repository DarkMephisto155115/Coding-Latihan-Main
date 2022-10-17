#include <stdio.h>

int main()
{
    int v = 3;
    int w = 5;
    if (v++ > 3)
    {
        printf("GG \n");
    }
    else
    {
        printf("NT \n");
    }

    printf("%d", v);
}