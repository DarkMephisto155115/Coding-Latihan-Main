#include <stdio.h>
#include <string.h>



int main(){
    char string_1 [] = "HELLO";
    char string_2 [] = "Hello";
    char string_3 [] = "HELLO";
    printf("Hasil perbandingan dari %s dengan %s --> %d\n", 
    string_1, string_2, strcmp(string_1, string_2));
    printf("Hasil perbandingan dari %s dengan %s --> %d\n", 
    string_2, string_1, strcmp(string_2, string_1));
    printf("Hasil perbandingan dari %s dengan %s --> %d\n", 
    string_1, string_3, strcmp(string_1, string_3));
    return 0;
}