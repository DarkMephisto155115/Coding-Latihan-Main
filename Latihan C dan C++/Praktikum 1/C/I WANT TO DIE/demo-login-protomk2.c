#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
 
//created by chaitanya 
 
int main() 
{ 
    char username[15]; 
    char password[12]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0 ){
        printf("Login Berhasil!!!");
    }else{
        printf("Login Gagal!!!");
    }
    system("pause");
    return 0; 
 
} 