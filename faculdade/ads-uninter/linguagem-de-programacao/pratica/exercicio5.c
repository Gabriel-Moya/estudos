#include <stdio.h>

int main() {

    FILE *csv;
    char c;
    int i;

    struct dados {
        char nome[40];
        char CPF[11];
        char telefone[11];
        char email[40];
    };
    struct dados registro[6];

    // Captura dos dados 
    for (i = 0; i < 6; i++){
            printf("Digite o %d nome\n", i+1);
            scanf("%40[^\n]", &registro[i].nome);
            // Trata a leitura indevida do \n no próximo scanf
            c = getc(stdin); 
            if (c != '\n')
                ungetc(c, stdin);

            printf("Digite o %d CPF\n", i+1);
            scanf("%11[^\n]", &registro[i].CPF);
            // Trata a leitura indevida do \n no próximo scanf
            c = getc(stdin); 
            if (c != '\n')
                ungetc(c, stdin);

            printf("Digite o %d telefone\n", i+1);
            scanf("%11[^\n]", &registro[i].telefone);
            // Trata a leitura indevida do \n no próximo scanf
            c = getc(stdin); 
            if (c != '\n')
                ungetc(c, stdin);

            printf("Digite o %d email\n", i+1);
            scanf("%40[^\n]", &registro[i].email);
            // Trata a leitura indevida do \n no próximo scanf
            c = getc(stdin); 
            if (c != '\n')
                ungetc(c, stdin);
    }

    // Abre o arquivo em modo leitura e escrita (Apagando o conteúdo anterior, se já existir)
    csv = fopen("numero-ru.csv","w+");

    if(csv){
        // Faz as devidas gravações
        for (i = 0; i < 6; i++){
            fprintf(csv, "Nome;%s", i+1, registro[i].nome);
            fprintf(csv, "CPF;%s", i+1, registro[i].CPF);
            fprintf(csv, "Telefone;%s", i+1, registro[i].telefone);
            fprintf(csv, "Email;%s\n", i+1, registro[i].email);
        }

        // Fecha o arquivo
        fclose(csv);
    } else {
        printf("Erro ao abrir o arquivo\n");
    }

    return 0;
}