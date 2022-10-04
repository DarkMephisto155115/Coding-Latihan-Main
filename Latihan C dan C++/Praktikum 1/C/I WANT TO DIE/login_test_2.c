#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> 
 





 
int main() 
{ 
    system("CLS");
    char username_register[50];
    char password_register[50];
    char username_login[50];
    char password_login[50];
    int pilihan;
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\tPilih salah satu:\n");
    printf("\t\t\t\t1.Register\n");
    printf("\t\t\t\t2.login\n");
    scanf("%d", &pilihan);
    if (pilihan == 1)
    {
        printf("Enter your username:\n"); 
        scanf("%s", username_register); 
 
        printf("Enter your password:\n"); 
        scanf("%s", password_register); 

        main();
    }else if(pilihan==2){
         printf("Enter your username:\n"); 
         scanf("%s", username_login); 
 
         printf("Enter your password:\n"); 
         scanf("%s", password_login); 
 
        if(strcmp(username_login,username_register)==0 && strcmp(password_login,password_register)==0 || strcmp(username_login, "admin") == 0 && strcmp(password_login, "admin") == 0 ){
        printf("Login Berhasil!!!");
        }else{
        printf("Login Gagal!!!");
        }
    }else{
        printf("System error");
        main();
    }
 
    



    system("pause");
    return 0; 
 
} 







