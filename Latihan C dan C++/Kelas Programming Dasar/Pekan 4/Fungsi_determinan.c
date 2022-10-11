#include <stdio.h>
#include <unistd.h>

int function_deter(int , int , int );
int main(){
    fflush stdin;
    system ("CLS");
    int a;
    int b;
    int c;
    printf ("Masukkan Nilai a:\n");
    scanf("%d", &a);
    printf ("Masukkan Nilai b:\n");
    scanf("%d", &b);
    printf ("Masukkan Nilai c:\n");
    scanf("%d", &c);
    int hasil = function_deter(a, b, c);
    printf("Hasil Determinan: %d\n", hasil);
    system ("pause");
    main();
}



int function_deter(int a, int b, int c){
    return ((b*b) - (4*a*c));
}
