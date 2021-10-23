#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Musics {
    char musicName[30];
    char artist[30];
    int time;
    struct Musics* next;
} Musics;

typedef struct {
    Musics* start;
    int sizeList;
} List;

void menu();
void insertMusic(List* list, char* music, char* artist, int time);
void listMusics(List* list);

int main() {

    List list;
    int option, time;
    char music[30], artist[30], c;

    list.start = NULL;
    list.sizeList = 0;

    do{
        menu();
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Digite o nome da musica: ");
            gets(&music);

            printf("Digite o nome do artista: ");
            gets(&artist);

            printf("Digite o tempo de duracao da musica: ");
            scanf("%d", &time);

            insertMusic(&list, &music, &artist, time);
            break;
        case 2:
            listMusics(&list);
            break;
        case 3:
            printf("Finalizando...\n");
            break;
        default:
            printf("Opcao invalida...\n");
        }

    } while (option != 3);

    return 0;
}


/*=====================MENU=====================*/
void menu() {
    printf("\n\t+---------------------------+\n");
    printf("\t|                           |\n");
    printf("\t|     Escolha uma opcao     |\n");
    printf("\t|                           |\n");
    printf("\t|     1. Inserir musica     |\n");
    printf("\t|     2. Listar musicas     |\n");
    printf("\t|     3. Sair               |\n");
    printf("\t|                           |\n");
    printf("\t+---------------------------+\n\n");
}


void insertMusic(List* list, char* music, char* artist, int time) {
    Musics* newMusic = (Musics*)malloc(sizeof(Musics));
    strcpy(newMusic->musicName, music);
    strcpy(newMusic->artist, artist);
    newMusic->time = time;
    newMusic->next = list->start;
    list->start = newMusic;
    list->sizeList++;
}


void listMusics(List* list) {
    Musics* start = list->start;
    printf("Lista de musicas:\n");
    printf("Musica | Artista | Tempo de duracao\n");

    while (start != NULL) {
        printf("%s | %s | %d\n", start->musicName, start->artist, start->time);
        start = start->next;
    }

    printf("\n\n");
}