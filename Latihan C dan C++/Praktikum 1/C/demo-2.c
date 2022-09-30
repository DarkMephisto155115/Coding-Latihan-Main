#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


struct start_menu_data
{
    int pil_start;
    char user_name [20];
    int pass_word ;
    char user_name_login [20];
    int pass_word_login ;
};


int main()
{
    char user_name [20] = "admin";
    int pass_word = 123;
    int value;
    struct start_menu_data s1;
    system ("cls");
    start_menu();
    return 0;
}

void start_menu()
{
    int value;
    struct start_menu_data s1;
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t Silahkan Login kedalam akun anda \n");
    printf("Username: ");
    scanf("%s", s1.user_name_login);
    printf("password: ");
    scanf("%d", s1.pass_word_login);
    value =strcmp(s1.user_name, s1.user_name_login);
    if ( value == 0 && s1.pass_word==s1.user_name_login)
    {
    printf("login berhasil");
    system("pause");
    return 0;
    }else{
    printf("login gagal");
    system("pause");
    return 0;
    }
}


