#include <stdio.h>
#include <unistd.h>

int main()
{
    int x;
    printf("Masukkan Nilai: ");
    scanf("%d", &x);
    printf("\nNilai %d adalah: ", x);
    if ((x%2) == 1)
    {
        printf("Ganjil \n");
    }else if ((x%2) == 0)
    {
        printf("Genap \n");
    }
    system("pause");
    return 0;
}
