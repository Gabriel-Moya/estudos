#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    char nome[15], sexo;
    int idade;

    printf("Digite o nome da pessoa:\n");
    scanf("%s", &nome);
    system("cls");

    printf("Digite o sexo (Use F para feminino e M para masculino)\n");
    scanf("%s", &sexo);
    system("cls");

    printf("Digite a idade da pessoa.\n");
    scanf("%d", &idade);
    system("cls");

    if(sexo=='F' && idade<25)
        printf("Aceita.");
    else
        printf("Não aceita.");


    return 0;
}
