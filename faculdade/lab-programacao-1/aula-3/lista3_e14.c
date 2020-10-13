#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite a idade do eleitor\n");
    scanf("%d", &idade);

    if(idade<16)
        printf("Não eleitor.");
    else if(idade>=18 && idade<=65)
        printf("Eleitor obrigatório.");
    else
        printf("Eleitor facultativo.");

    return 0;
}
