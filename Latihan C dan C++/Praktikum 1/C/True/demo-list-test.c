#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


void list_game_UI();
void list_game_1();
void list_game_2();




int main (void){
    list_game_UI();
    system("pause");
    return 0;
}


void list_game_UI(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("1. Red Dead Redemption 2 \n");
    printf("2. Grand Theft Auto V \n");
    printf("3. The Last Of Us Remastered \n");
    printf("4. God Of War \n");
    printf("5. The last Of Us Part 2 \n");
    printf("6. Persona 5 Royal \n");
    printf("7. Metal Geat Solid V \n");
    printf("8. Uncharted 4 \n");
    printf("9. Journey\n");
    printf("10. Bloodborne\n");
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
        return list_game_1();
        break;
    
    case 2:
        return list_game_UI();
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





void list_game_1(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("11. Undertale \n");
    printf("12. The Witcher 3 \n");
    printf("13. Divinity Original Sin 2 \n");
    printf("14. Shadow Of The Colossus \n");
    printf("15. Celeste \n");
    printf("16. Inside \n");
    printf("17. Nier Automata \n");
    printf("18. Resident Evil 2 \n");
    printf("19. Dragon Xuest XI\n");
    printf("20. Diablo 3\n");
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
        list_game_2();
        break;
    
    case 2:
        list_game_UI();
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

void list_game_2(){
    system("CLS");
    int pilihan;
    printf("==========================================\n");
    printf("|               List Game                |\n");
    printf("|             Yang Tersedia              |\n");
    printf("==========================================\n");
    printf("21. Shovel Knight \n");
    printf("22. Reyman Legends \n");
    printf("23. Fez \n");
    printf("24. Monster Hunter World: Iceborne \n");
    printf("25. Sekiro: Shadow Die Twice \n");
    printf("26. Titan Fall 2 \n");
    printf("27. Elden Ring \n");
    printf("28. Dark Soul III \n");
    printf("29. Demon Soul\n");
    printf("30. It Takes Two\n");
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
        list_game_2();
        break;
    
    case 2:
        list_game_1();
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