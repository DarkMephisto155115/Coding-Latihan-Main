#include <stdio.h>

int main(){
    double panjang;
    double lebar;
    int tes;
    double sum;
    printf("Tuliskan Panjang: ");
    scanf("%lf", &panjang);
    printf("Tuliskan Lebar: ");
    scanf("%lf", &lebar);
    sum =panjang*lebar;
    printf("Hasilnya adalah: %lf", &sum);
    scanf("%d", &tes);
}