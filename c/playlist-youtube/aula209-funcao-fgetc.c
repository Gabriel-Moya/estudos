#include <stdio.h>

int main(){

    FILE *file;
    char letra;

    file = fopen("aula209-funcao-fgetc.txt", "r");

    if(file){
        printf("\n\tTexto lido do arquivo:\n");

        rewind(file);
        
        while(!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }

        fclose(file);
    }
    else{
        printf("Erro ao abrir o arquivo\n");
    }

    return 0;
}