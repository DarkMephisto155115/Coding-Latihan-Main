#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

struct login
{
    char nama_dpn [30];
    char nama_blkng[30];
    char user_name[30];
    char pass_word[20];
};

void login (void);
void registration (void);
void start_menu(void);

int main (void)
{
    int pil_start;
    start_menu();
    scanf("%d",&pil_start);

    getchar();           // catching newline.

    if(pil_start == 1)
        {
            system("CLS");
            registration();
        }

    else if(pil_start == 2)
        {
            system("CLS");
            login();
        }
    printf("STOP \n");
    system("pause");
}

void login (void)
{
    char user_name[30],pass_word[20];
    FILE *log;

    log = fopen("login.txt","r");
    if (log == NULL)
    {
        fputs("Error saat membuka file!", stderr);
        exit(1);
    }

    struct login s1;

    printf("\nMasukkan Username dan Password untuk Login\n\n");
    printf("Username:  ");
    fgets(user_name, 30, stdin);
    printf("\nPassword: ");
    printf("\n");
    fgets(pass_word, 20, stdin);
    printf("%s", s1.user_name);
    printf("%s", s1.pass_word);
    system("pause");
    while(fread(&s1,sizeof(s1),1,log))
        {
        if(strcmp(user_name,s1.user_name)==0 && strcmp(pass_word,s1.pass_word)==0)

            {   
                printf("\nLogin berhasil!!!\n");
            }
        else 
            {
                printf("\nLogin gagal!!!\nUsername atau Password salah\n");
            }
        }

    fclose(log);

    return;
}




void registration(void)
{
    FILE *log;

    log=fopen("login.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    struct login s1;

    printf("\nSelamat datang, silahkan masukkan data yang diperlukan untuk proses registrasi\n\n");
    printf("\nMasukkan Nama Depan: \n");
    scanf("%s",s1.nama_dpn);
    printf("\nMasukkan Nama Belakang: \n");
    scanf("%s",s1.nama_blkng);

    printf("\nTerima kasih, %s %s \n", s1.nama_dpn, s1.nama_blkng); 
    printf("Tolong masukkan Username dan Password yang akan digunakan untuk login \n");
    printf("Pastikan Username tidak lebih dari 30 karakter \n");
    printf("Dan Password setidaknya lebih dari 8 karakter, dengan menggunakan huruf besar dan kecil serta angka dan huruf spesial \n");

    printf("\nMasukkan Username:\n");
    scanf("%s",s1.user_name);
    printf("\nMasukkan Password:\n");
    scanf("%s",s1.pass_word);

    fwrite(&s1,sizeof(s1),1,log);
    fclose(log);

    printf("\nConfirming details...\n...\nWelcome, %s %s!\n\n",s1.nama_dpn,s1.nama_blkng);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("pause");
    system("CLS");
    login();
}



void start_menu()
{
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t Silahkan Login atau Register akun anda \n");
    printf("\t\t\t\t 1. Register \n");
    printf("\t\t\t\t 2. Login \n");
}