#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> 
 
struct register_data
{
    char username_register[50];
    char password_register[50];
};

struct login_data
{
    char username_login[50];
    char password_login[50];
};



void register_function(struct register_data *s2);
void login_function(struct login_data s1, struct register_data *s2);
 
int main() 
{ 
    system("CLS");
    struct login_data s1;
    struct register_data s2;
    struct register_data *cptr = &s2;
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
        register_function(cptr);
    }else if(pilihan==2){
        login_function(s1,cptr);
    }else{
        printf("System error");
        main();
    }
 
    



    system("pause");
    return 0; 
 
} 



void register_function(){
    
    char username[50];
    char password[50];
    printf("Enter your username:\n"); 
    scanf("%s", username); 
 
    printf("Enter your password:\n"); 
    scanf("%s", password); 

    s2 = 
    main();
}



void login_function(struct login_data s1, struct register_data *s2){
    
    
    printf("Enter your username:\n"); 
    scanf("%s", s1.username_login); 
 
    printf("Enter your password:\n"); 
    scanf("%s", s1.password_login); 
 
    if(strcmp(s1.username_login,s2->username_register)==0 && strcmp(s1.password_login,s2->password_register)==0 || strcmp(s1.username_login, "admin") == 0 && strcmp(s1.password_login, "admin") == 0 ){
        printf("Login Berhasil!!!");
    }else{
        printf("Login Gagal!!!");
    }
}
