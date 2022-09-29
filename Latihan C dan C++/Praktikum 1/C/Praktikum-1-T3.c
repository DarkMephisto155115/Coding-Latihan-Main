#include <stdio.h>

int main(){
    int tanggal;
    int tanggal_[5];

    printf("Masukkan Tanggal lahir anda (dd/mm/yyyy) \n");
    scanf("%d", &tanggal);
    printf("Tanggal lahir anda: %d \n", tanggal);
    printf("Dengan format lain \n");
    printf("Masukkan Tanggal lahir anda dengan format (dd/mm/yyyy) \n");
    scanf("%d/%d/%d", &tanggal_[0],&tanggal_[1],&tanggal_[2]);
    printf("Tanggal lahir anda: %d/%d/%d \n", tanggal_[0], tanggal_[1], tanggal_[2]);
    return 0;
}