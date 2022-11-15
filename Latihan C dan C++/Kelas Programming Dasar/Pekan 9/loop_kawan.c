#include <stdio.h>





int main(){
    int total = 0;
    int x;
    for ( total ; total<= 1000 ; total = total + x )
    {
        printf("Masukkan Angka: \n");
        scanf("%d", &x);
    }
    printf("Total Nilai = %d", total);
    return 0;
}
