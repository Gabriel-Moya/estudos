#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 23

typedef struct Students {
    char name[30];
    char email[30];
    int RU;
} Students;


// ---------- IMPRESSAO ----------
void printStudent(Students student){
    printf("\tNome: %s", student.name);
    printf("\n\tEmail: %s", student.email);
    printf("\n\tRU: %d", student.RU);
}


// TABELA HASH
void initializeTable(Students t[]) {
    int i;

    for(i = 0; i < TAM; i++) {
        t[i].RU = 0;
    }
}

int hashFunction(int chave) {
    return chave % TAM;
}

void insertStudent(Students t[], Students student) {
    int id = hashFunction(student.RU);

    while(t[id].RU != 0) {
        id = hashFunction(id + 1);
    }

    t[id] = student;
}

Students* search(Students t[], int chave){
    int id = hashFunction(chave);

    while(t[id].RU != 0){
        if(t[id].RU == chave){
            return &t[id];
        } else {
            id = hashFunction(id + 1);
        }
    }

    return NULL;
}


int main() {
    
    Students *find, students[TAM];
    int RU;
    char name[30], email[30], c;
    
    initializeTable(students);
    Students homer = {"Homer Simpson", "homer@testmail.com", 1122333};
    insertStudent(students, homer);

    Students marge = {"Marge Simpson", "marge@testmail.com", 1122334};
    insertStudent(students, marge);

    Students bart = {"Bart Simpson", "bart@testmail.com", 1122335};
    insertStudent(students, bart);

    Students lisa = {"Lisa Simpson", "lisa@testmail.com", 1122336};
    insertStudent(students, lisa);

    Students gabriel = {"Gabriel Moya", "gabrielmoya123@gmail.com", 1234567};
    insertStudent(students, gabriel);

    Students milhouse = {"Milhouse Van Houten", "milhouse@testmail.com", 1122338};
    insertStudent(students, milhouse);

    Students ned = {"Ned Flanders", "ned@testmail.com", 1122339};
    insertStudent(students, ned);

    Students moe = {"Moe Szyslak", "moe@testmail.com", 1122340};
    insertStudent(students, moe);

    Students edna = {"Edna Krabappel", "edna@testmail.com", 1122341};
    insertStudent(students, edna);

    Students nelson = {"Nelson Muntz", "nelson@testmail.com", 1122342};
    insertStudent(students, nelson);

    Students barney = {"Barney Gumble", "barney@testmail.com", 1122343};
    insertStudent(students, barney);

    Students allison = {"Allison Taylor", "allison@testmail.com", 1122344};
    insertStudent(students, allison);

    Students lenny = {"Lenny Leonard", "lenny@testmail.com", 1122345};
    insertStudent(students, lenny);

    printf("Qual RU deseja buscar? ");
    scanf("%d", &RU);
    find = search(students, RU);
    if(find){
        printf("\nRU encontrado:\n");
        printStudent(*find);
    } else {
        printf("RU nao encontrado...\n");
    }

    return 0;
}
