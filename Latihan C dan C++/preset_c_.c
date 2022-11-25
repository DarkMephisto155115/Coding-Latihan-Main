#include <stdio.h>
#include <unistd.h>

int main()
{
    int x = 0;
    char i;
    for ( i ; i != 'n';)
    {
        fflush(stdin);
        scanf("%c", &i);
        printf("ANJAY MABAR\n");
    }

    system("pause");
    return 0;
}
