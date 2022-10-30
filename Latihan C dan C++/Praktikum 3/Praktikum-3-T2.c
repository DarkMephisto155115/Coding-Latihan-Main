#include <stdio.h>


int main(){
    int nilai;

    printf("Masukkan Nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai >= 60)
    {
        printf("Anda lulus dengan nilai: %d", nilai);
    }else{
        printf("Maaf anda tidak lulus");
    }
    return 0;
}
