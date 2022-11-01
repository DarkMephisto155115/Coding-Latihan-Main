#include <stdio.h>

int setLevel(int nilai_TAEP);// Define Function

int main(){
    int nilai_TAEP_1, nilai_TAEP_2;
    int level_Peserta;
    char plhn;

    printf("Masukkan Nilai TAEP Pertama: ");
    scanf("%d", &nilai_TAEP_1);
    printf("Apakah Kamu Ingin Memperbaiki Nilai? (Y/N): ");
    scanf(" %c", &plhn);

    if (plhn == 'N' || plhn == 'n')
    {
        nilai_TAEP_2 = 0;
        level_Peserta = setLevel(nilai_TAEP_1);
        printf("Nilai Peserta adalah: %d\n", nilai_TAEP_1);
        printf("Level Peserta adalah: %d", level_Peserta);
    }else if (plhn == 'Y' || plhn == 'y')
    {
        printf("Masukkan Nilai TAEP Kedua: ");
        scanf("%d", &nilai_TAEP_2);
        if (nilai_TAEP_1 > nilai_TAEP_2)
        {
            level_Peserta = setLevel(nilai_TAEP_1);
            printf("Nilai Peserta adalah: %d\n", nilai_TAEP_1);
            printf("Level Peserta adalah: %d", level_Peserta);
        }else{
            level_Peserta = setLevel(nilai_TAEP_2);
            printf("Nilai Peserta adalah: %d\n", nilai_TAEP_2);
            printf("Level Peserta adalah: %d", level_Peserta);
        }
    }
    return 0;
}

setLevel(int nilai_TAEP){
    int lvl_Peserta;
    if (nilai_TAEP >= 80)
    {
        lvl_Peserta = 1;
    }else if (nilai_TAEP >= 70)
    {
        lvl_Peserta = 2;
    }else if (nilai_TAEP >= 60)
    {
        lvl_Peserta = 3;
    }else if (nilai_TAEP < 60)
    {
        lvl_Peserta = 4;
    }
    return lvl_Peserta;
}
