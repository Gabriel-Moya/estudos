#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Fa�a um programa para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o
aumento, desconte 8% de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento
e o sal�rio final
*/

int main(){

    setlocale(LC_ALL, "");

    float salario, aumento, imposto;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    aumento = salario+(salario*0.15);
    imposto = aumento-(aumento*0.08);

    printf("\n----------Sal�rio inicial----------");
    printf("\nR$ %.2f \n", salario);

    printf("\n--------Sal�rio com aumento--------");
    printf("\nR$ %.2f \n", aumento);

    printf("\n-----------Sal�rio Final-----------");
    printf("\nR$ %.2f \n", imposto);


    return 0;
}
