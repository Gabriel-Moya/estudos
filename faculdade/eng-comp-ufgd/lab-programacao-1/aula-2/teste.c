#include<stdio.h>
#include<stdlib.h>

int main (){

    int idade;
    char codigo;

    printf("\nIdade ");
    scanf("%d", &idade);

    fflush(stdin);

    printf("\nCodigo: A, B, C\n");
    scanf("%c", &codigo);

    printf("\nIdade %d, Codigo %c ", idade, codigo);

    system("pause");

    return 0;

}
