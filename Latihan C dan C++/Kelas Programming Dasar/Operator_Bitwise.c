#include <stdio.h>

int main()
{
    int a, b, hasil;

    a = ;
    b = ;

    printf("=== Operator Bitwise ===\n\n");
    printf("Nilai a = %d", a);
    printf("Nilai b = %d", b);
    hasil = a & b;
    printf("a & b: %d \n", hasil);

    hasil = a | b;
    printf("a | b: %d \n", hasil);

    hasil = a ^ b;
    printf("a ^ b: %d \n", hasil);

    hasil = ~a;
    printf("~a: %d \n", hasil);

    hasil = a >> 1;
    printf("a >> 1: %d \n", hasil);

    hasil = b << 1;
    printf("b << 1: %d \n", hasil);
    return 0;
}