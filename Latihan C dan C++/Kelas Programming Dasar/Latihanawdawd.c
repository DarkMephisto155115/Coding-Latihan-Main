#include <stdio.h>
//Created By Dark_Mephisto :)

int main(){
    long int gaji;
    long int bonus;
    long int gaji_bonus;
    int cekhasil;
    printf("Masukkan Gaji! \n");
    scanf("%d", &gaji);
    printf("Gaji dan Bonus adalah \n");
    bonus = gaji * 0.2;
    gaji_bonus = gaji + bonus;
    printf("Gaji: %d \n", gaji);
    printf("Bonus: %d \n", bonus);
    printf("Gaji+Bonus= %d \n", gaji_bonus);
    system("Pause");
    return 0;
}