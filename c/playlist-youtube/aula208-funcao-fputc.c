#include <stdio.h>

int main(){

    FILE *file;
    char letra;

    file = fopen("funcao-fputc.txt", "w");

    if(file){
        printf("Digite um texto e pressione ENTER ao finalizar\n");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
    else{
        printf("Erro ao abrir o arquivo\n");
    }

    return 0;
}