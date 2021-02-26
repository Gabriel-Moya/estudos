#include<stdio.h>

//Protótipo
int soma(int,int);

int soma(int a, int b)
{
    return (a+b);
}

//definição
int main(){
    int a, b, c;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("\nValor de B: ");
    scanf("%d", &b);
    c=soma(a,b);
    printf("\nResultado da soma: %d", c);
}