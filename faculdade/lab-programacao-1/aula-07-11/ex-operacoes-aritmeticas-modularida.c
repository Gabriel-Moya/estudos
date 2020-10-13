/*
Deixe o usuário inserir 2 valores, e escolher um tipo de operação com os valores
usando modularidade.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Protótipo
float soma(float,float);
float subtrai(float,float);
float divide(float,float);
float multiplica(float,float);

//definição
int main(){
    setlocale(LC_ALL, "");
    float a, b, c;
    int op;
    printf("Valor de A: ");
    scanf("%f", &a);
    printf("\nValor de B: ");
    scanf("%f", &b);
    printf("Digite a operação:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &op);
    switch(op)
    {
    case 1:
        c=soma(a,b);
        break;
    case 2:
        c=subtrai(a,b);
        break;
    case 3:
        c=multiplica(a,b);
        break;
    case 4:
        c=divide(a,b);
        break;
    }
    printf("\nResultado = %.2f", c);
    return 0;
}

float soma (float a, float b)
{
    return (a+b);
}

float subtrai (float a, float b)
{
    return (a-b);
}

float multiplica (float a, float b)
{
    return (a*b);
}

float divide (float a, float b)
{
    return (a/b);
}