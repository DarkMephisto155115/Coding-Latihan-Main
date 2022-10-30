#include <stdio.h>

int main()
{
    char grade;

    printf("Masukkan Nilai: \n");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A': // apabila bukan angka maka harus menggunakan ("") atau('')
        printf("Sangat Baik");
        break;
    case 'B':
        printf("Baik");
        break;
    case 'C':
        printf("Rata-Rata");
        break;
    case 'D':
        printf("Sangat Baik");
        break;
    case 'E':
        printf("Sangat Baik");
        break;
    case 'F':
        printf("Sangat Baik");
        break;
    default:
        printf("Nilai tidak ada");
        break;
    }
    return 0;
}
