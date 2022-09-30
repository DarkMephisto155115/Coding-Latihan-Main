#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


struct data_login
{
    char user_name[15]; 
    char pass_word[12];
};

struct data_main_menu
{
    int plhn_menu;
};


void login_function();
void start_menu();
void main_menu();
void loading_function();
void case_switch_menu();


int main(){
    start_menu();
    login_function();
    main_menu();
    case_switch_menu();




    system ("pause");
    return 0;
}









void login_function(){
    struct data_login s1;
 
 
    printf("\t\t\t\tEnter your username:\n"); 
    printf("\t\t\t\t"); 
    scanf("%s",&s1.user_name); 
 
    printf("\t\t\t\tEnter your password:\n");
    printf("\t\t\t\t");  
    scanf("%s",&s1.pass_word); 
 
    if(strcmp(s1.user_name,"admin")==0 && strcmp(s1.pass_word,"admin")==0 ){
        printf("\t\t\t\tLogin Berhasil!!! \n");
    }else{
        printf("\t\t\t\tLogin Gagal!!! \n");
        loading_function("\t\t\t\tRestarting");
        return main();
    }
    
    return 0; 
}

void start_menu()
{
    system("CLS");
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\tSilahkan Login dengan akun anda\n");
    return 0;
}


void main_menu(){
    struct data_main_menu s2;
    system("CLS");
    printf("==========================================\n");
    printf("|               Main Menu                |\n");
    printf("|          Rental Game dan Film          |\n");
    printf("==========================================\n");
    printf("1. \n");
    printf("2. \n");
    printf("3. \n");
    printf("4. \n");
    printf("5. \n");
    printf("6. \n");
    printf("Pilih salah satu untuk mengakses \n");
    scanf("%d", &s2.plhn_menu);
    return 0;
}

void loading_function(char loading [20] ){
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

void case_switch_menu(){
    struct data_main_menu s2;
    switch (s2.plhn_menu)
    {
    case 1:
        printf("anjay mabar");
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    
    default:
     printf("anjay no mabar");
        break;
    } 
}