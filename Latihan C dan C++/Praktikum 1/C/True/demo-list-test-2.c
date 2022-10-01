#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


void list_film_UI();
void list_film_1();
void list_film_2();




int main (void){
    list_film_UI();
    system("pause");
    return 0;
}


void list_film_UI(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("1. Top Gun Maverick\n");
    printf("2. The Batman\n");
    printf("3. Everything Everywhere All At Once \n");
    printf("4. The Northman \n");
    printf("5. Turning Red \n");
    printf("6. Prey \n");
    printf("7. Happening \n");
    printf("8. Fire Of Love \n");
    printf("9. X\n");
    printf("10. Nope\n");
    printf("Page: 1\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        return list_film_1();
        break;
    
    case 2:
        return list_film_UI();
        break;

    case 3:
        printf("Tes Berhasil");
        break;
    default:
        printf("Tes Gagal");
        break;
    }
    return 0;
}





void list_film_1(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("11. Black Panther \n");
    printf("12. Avengers: Endgame \n");
    printf("13. Iron Man \n");
    printf("14. Thor: Ragnarok \n");
    printf("15. Spider-Man: No Way Home \n");
    printf("16. Spider-Man: Homecoming \n");
    printf("17. Guardians Of The Galaxy \n");
    printf("18. The Avengers \n");
    printf("19. Shang-Chi And The Legend Of Ten Ring\n");
    printf("20. Spider-Man: Far From Home\n");
    printf("Page: 2\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        list_film_2();
        break;
    
    case 2:
        list_film_UI();
        break;

    case 3:
        printf("Tes Berhasil");
        break;
    default:
        printf("Tes Gagal");
        break;
    }
    return 0;
}

void list_film_2(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Film                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("21. Captain America: Civil War \n");
    printf("22. Captain America: The Winter Soldier \n");
    printf("23. Doctor Strange \n");
    printf("24. Ant-Man and The Wasp \n");
    printf("25. Avengers: Infinity War \n");
    printf("26. Guardians of The Galaxy Vol.2 \n");
    printf("27. Ant-Man \n");
    printf("28. Captain Marvel \n");
    printf("29. Black Widow\n");
    printf("30. Avengers: Endgame\n");
    printf("Page: 3\n");
    printf("==========================================\n");
    printf("1. Selanjutnya\n");
    printf("2. Sebelumnya\n");
    printf("3. Kembali Ke Menu\n");
    printf("==========================================\n");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        list_film_2();
        break;
    
    case 2:
        list_film_1();
        break;

    case 3:
        printf("Tes Berhasil");
        break;
    default:
        printf("Tes Gagal");
        break;
    }
    return 0;
}