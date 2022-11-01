#include <stdio.h>
#include <stdbool.h>

int main (){
    int suhu_1, suhu_2, suhu_3, suhu_4, suhu_5;
    int rata_rata_suhu;
    bool status_AC;

    printf("Masukkan Suhu Pada Menit 2\n");
    scanf("%d", &suhu_1);
    printf("Masukkan Suhu Pada Menit 4\n");
    scanf("%d", &suhu_2);
    printf("Masukkan Suhu Pada Menit 6\n");
    scanf("%d", &suhu_3);
    printf("Masukkan Suhu Pada Menit 8\n");
    scanf("%d", &suhu_4);
    printf("Masukkan Suhu Pada Menit 10\n");
    scanf("%d", &suhu_5);
    rata_rata_suhu = (suhu_1+suhu_2+suhu_3+suhu_4+suhu_5)/5;
    if (rata_rata_suhu >= 25)
    {
        status_AC = true;
        printf("Status AC %d / ON", status_AC);
    }else{
        status_AC = false;
        printf("Status AC %d / OFF", status_AC);
    }
    return 0;
}
