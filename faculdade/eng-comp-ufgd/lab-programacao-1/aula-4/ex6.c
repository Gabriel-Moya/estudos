#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int semana;

    printf("Insira um número referente ao dia da semana (0 para domingo, 1 para segunda e etc...)\n");
    scanf("%d", &semana);

    if(semana==0)
        printf("\n%d = Domingo\n", semana);

    else
        if(semana==1)
        printf("\n%d = segunda\n", semana);

    else
        if(semana==2)
        printf("\n%d = terça\n", semana);

    else
        if(semana==3)
        printf("\n%d = quarta\n", semana);

    else
        if(semana==4)
        printf("\n%d = quinta\n", semana);

    else
        if(semana==5)
        printf("\n%d = sexta\n", semana);

    else
        if(semana==6)
        printf("\n%d = sábado\n", semana);

    else
        printf("Escolha inválida\n");

    system("pause");

    return 0;
}

