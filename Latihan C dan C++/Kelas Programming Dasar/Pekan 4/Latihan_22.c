#include <stdio.h>
#include <string.h>

#define panjangMAX 20 

int main(){
    char string_1 [] = "ABcde";
    char *hasil_1,*hasil_2;
    hasil_1 = strchr(string_1, 'B');
    hasil_2 = strchr(string_1, 'X');

    printf ("Dari String %s \n", string_1);
    printf ("Mencari karakter B = %s \n", hasil_1);
    printf ("Mencari karakter X = %s \n", hasil_2);
    return 0;
}