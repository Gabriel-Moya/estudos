#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 23

/*=====================ESTRUTURA DE ARMAZENAMENTO DOS DADOS=====================*/
typedef struct Students {
    char name[30];
    char email[30];
    int RU;
} Students;


/*=====================CABEÇALHOS DE FUNÇÕES E PROCEDIMENTOS=====================*/
void printStudent(Students student);
void initializeTable(Students t[]);
int hashFunction(int key);
void insertStudent(Students t[], Students student);
Students* search(Students t[], int key);


int main() {
    
    Students *find, students[TAM];
    int RU;
    char name[30], email[30], c; // c = variável utilizada para limpeza do buffer do teclado quando necessário
    
    initializeTable(students);

    /*=====================INSERÇÃO DOS DADOS=====================*/
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

    /*=====================CAPTURA DO RU PARA REALIZAR A BUSCA=====================*/
    printf("Qual RU deseja buscar? ");
    scanf("%d", &RU);
    find = search(students, RU);
    if(find){
        printf("\nRU encontrado:\n");
        printStudent(*find);
        printf("\n\nDigite qualquer tecla para continuar...");
        while ((c = getchar()) != '\n' && c != EOF);
        scanf("%c", &c);
    } else {
        printf("RU nao encontrado...\n");
        printf("\n\nDigite qualquer tecla para continuar...");
        while ((c = getchar()) != '\n' && c != EOF);
        scanf("%c", &c);
    }

    return 0;
}


/*=====================IMPRESSÃO RESULTANTE DA BUSCA=====================*/
void printStudent(Students student){
    printf("\tNome: %s", student.name);
    printf("\n\tEmail: %s", student.email);
    printf("\n\tRU: %d", student.RU);
}


/*=====================INICIALIZAÇÃO DA TABELA HASH=====================*/
void initializeTable(Students t[]) {
    int i;

    for(i = 0; i < TAM; i++) {
        t[i].RU = 0;
    }
}


/*=====================FUNÇÃO RESPONSÁVEL POR CALCULAR O HASH=====================*/
int hashFunction(int key) {
    return key % TAM;
}


/*=====================INSERÇÃO DE ESTUDANTES=====================*/
void insertStudent(Students t[], Students student) {
    int id = hashFunction(student.RU);

    while(t[id].RU != 0) {
        id = hashFunction(id + 1);
    }

    t[id] = student;
}


/*=====================BUSCA NA TABELA HASH=====================*/
Students* search(Students t[], int key){
    int id = hashFunction(key);

    while(t[id].RU != 0){
        if(t[id].RU == key){
            return &t[id];
        } else {
            id = hashFunction(id + 1);
        }
    }

    return NULL;
}