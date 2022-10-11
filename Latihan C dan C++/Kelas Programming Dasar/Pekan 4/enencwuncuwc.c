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
    function_deter(a, b, c);
    system ("pause");
    main();
}



int function_deter(int a, int b, int c){
    int hasil = (b*b) - (4*a*c) ;
    printf ("Nilai a: %d \n", a);
    printf ("Nilai b: %d \n", b);
    printf ("Nilai c: %d \n", c);
    printf ("Nilai Determinan: %d \n", hasil);
}
