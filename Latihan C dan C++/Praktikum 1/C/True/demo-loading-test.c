#include <stdio.h>

void loading_function(char loading[20]){
    printf(loading); 
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(1);
    return 0;
}

int main (){
    loading_function("loading");
    system("pause");
}