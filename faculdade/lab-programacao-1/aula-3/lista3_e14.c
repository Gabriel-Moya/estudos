#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite a idade do eleitor\n");
    scanf("%d", &idade);

    if(idade<16)
        printf("N�o eleitor.");
    else if(idade>=18 && idade<=65)
        printf("Eleitor obrigat�rio.");
    else
        printf("Eleitor facultativo.");

    return 0;
}
