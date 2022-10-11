#include <stdio.h>
#include <unistd.h>

int main (){
    int array_nomor[4][2] = {{24,66},{78,99}, {69,70}, {89,88}};
    printf("%d", array_nomor [2] [0]);
    return 0;
}