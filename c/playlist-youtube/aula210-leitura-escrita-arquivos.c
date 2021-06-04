#include <stdio.h>

void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char letra;

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
        printf("\nERRO ao abrir arquivo\n");
    }
}

void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char letra;

    while(!feof(file)){
        letra = fgetc(file);
        printf("%c", letra);
    }
    
    fclose(file);
}

int main(){
    
    char nome[] = {"aula210-leitura-escrita-arquivos.txt"};

    escrever(nome);
    ler(nome);

    return 0;
}