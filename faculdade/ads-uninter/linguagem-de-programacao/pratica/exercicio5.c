#include <stdio.h>

int main() {

    FILE *csv;
    char letra;
    int i;

    struct dados {
        char nome[40];
        char CPF[11];
        char telefone[11];
        char email[40];
    };
    struct dados registro[2];

    for (i = 0; i < 2; i++){
            printf("Digite o %d nome\n", i+1);
            scanf("%s", &registro[i].nome);
            printf("Digite o %d CPF\n", i+1);
            scanf("%s", &registro[i].CPF);
            printf("Digite o %d telefone\n", i+1);
            scanf("%s", &registro[i].telefone);
            printf("Digite o %d email\n", i+1);
            scanf("%s", &registro[i].email);
    }

    csv = fopen("numero-ru.csv","w+");

    if(csv){
        for (i = 0; i < 2; i++){
            fprintf(csv, "%d Nome: %s;", i+1, registro[i].nome);
            fprintf(csv, "%d CPF: %s;", i+1, registro[i].CPF);
            fprintf(csv, "%d Telefone: %s;", i+1, registro[i].telefone);
            fprintf(csv, "%d Email: %s\n", i+1, registro[i].email);
        }
        
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, csv);
            scanf("%c", &letra);
        }
        fclose(csv);
    } else {
        printf("Erro ao abrir o arquivo\n");
    }

    return 0;
}