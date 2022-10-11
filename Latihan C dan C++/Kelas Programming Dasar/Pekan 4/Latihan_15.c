#include <stdio.h>
#include <string.h>

#define panjangMAX 20 

int main(){
    char string_1 [panjangMAX], string_2 [panjangMAX];
    strcpy(string_1, "Anjay");
    strcpy (string_2, " Mabar");
    strcat (string_1, string_2);
    printf ("%s", string_1);
    return 0;
}