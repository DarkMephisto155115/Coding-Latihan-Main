#include <stdio.h>

int main(){
    int nilai;

    printf("Masukkan Nilai Anda: ");
    scanf("%d", nilai);
    if (nilai >= 75)
    {
        printf("Anda lulus dengan nilai %d ", nilai);
    }
    else if (nilai >= 60)
    {
        printf("Anda mengikuti remedial");
    }
    else
    {
        printf("Anda mengulang di semester depan!!!");
    }
    system("pause");
    return 0;
}
}
