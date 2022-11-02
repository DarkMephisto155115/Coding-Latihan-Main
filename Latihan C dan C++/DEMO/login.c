#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

char user_name_2[20];
char pass_word_2[20];

int cek_login_2(char username[20], char password[20], char username2[20], char password2[20])
{
    bool cek_login;
    if (strcmp(username, username2) == 0 && strcmp(password, password2) == 0) // cek_login
    {
        cek_login = true; // True apabila user_name dan pass_word betul
    }
    else
    {
        cek_login = false; // false apabila user_name dan pass_word salah
    }
    return cek_login;
}

int cek_login_1(char username[20], char password[20])
{
    bool cek_login;
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) // cek_login
    {
        cek_login = true; // True apabila user_name dan pass_word betul
    }
    else
    {
        cek_login = false; // false apabila user_name dan pass_word salah
    }
    return cek_login;
}

int main(void)
{
    char user_name[20];
    char pass_word[20];
    int cek_login1;
    int cek_login2;
    int pilihan;

    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        printf("\t\t\t\tEnter your username:\n"); // output string
        printf("\t\t\t\t");                       // ??????
        scanf("%s", user_name);                   // input user_name
        printf("\t\t\t\tEnter your password:\n"); // output string
        printf("\t\t\t\t");                       //?????
        scanf("%s", pass_word);                   // input pass_word
        cek_login1 = cek_login_1(user_name, pass_word);
        cek_login2 = cek_login_2(user_name, user_name_2, pass_word, pass_word_2);
        if (cek_login1 == 1 || cek_login2 == 1) // cek_login untuk akses Menu
        {
            sleep(1);
            printf("\n\t\t\t\tLogin Berhasil!!! \n");
            system("pause");
        }
        else // Apabila cek_login salah atau false
        {
            printf("\n\t\t\t\tLogin Gagal!!! \n");
            main();
        }
        break;
    case 2:
        scanf("%s", user_name_2);
        scanf("%s", pass_word_2);
        main();
        break;

    default:
        main();
        break;
    }
}
//