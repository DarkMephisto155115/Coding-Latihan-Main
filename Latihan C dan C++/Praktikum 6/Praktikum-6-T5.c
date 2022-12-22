#include <stdio.h>


void myFunction(char fname[], int age){
    printf("Hello %s. You are %d years old.\n", fname, age);
}
int main()
{
    myFunction("Azka", 22);
    myFunction("Jenny", 21);
    myFunction ("Alif", 21);
    myFunction("Putro", 20);
    return 0;
}
