#include <stdio.h>
//Created By Dark_Mephisto :)

int main(){
    long long int total_belanja;
    long long int diskon;
    long long int diskon_belanja;
    int cekhasil;
    printf("Masukkan Total Belanjaan! \n");
    scanf("%d", &total_belanja);
    printf("Total Belanjaan dan Diskon adalah \n");
    diskon = total_belanja * 0.1;
    diskon_belanja = total_belanja - diskon;
    printf("Total Belanja: Rp.%d \n", total_belanja);
    printf("Diskon: Rp.%d \n", diskon);
    printf("Belanja dan Diskon= Rp.%d \n", diskon_belanja);
    system("Pause");
    return 0;
}