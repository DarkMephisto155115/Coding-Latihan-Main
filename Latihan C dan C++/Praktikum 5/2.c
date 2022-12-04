#include <stdio.h>



int main(){
    int nilai[5];

    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    for (int  i = 0; i < 5; i++)
    {
        printf("Nilai ke-%d: %d\n", (i+1), nilai[i]);
    }
    return 0;
}
