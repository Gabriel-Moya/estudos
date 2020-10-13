#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n1, n2, n3, maior;
    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    printf("Insira o terceiro numero: ");
    scanf("%d", &n3);

    verifica(maior);

    printf("Maior = %d", maior);

    return 0;
}

int verifica(n1, n2, n3, maior)
{
    if (n1>n2 && n1>n3)
        maior=n1;
    
    if (n2>n1 && n2>n3)
        maior=n2;
    
    if (n3>n1 && n3>n2)
        maior=n3;

    return(maior);
}