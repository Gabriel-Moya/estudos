#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int semana;

    printf("Insira um n�mero referente ao dia da semana (0 para domingo, 1 para segunda e etc...)\n");
    scanf("%d", &semana);

    if(semana==0)
        printf("\n%d = Domingo\n", semana);

    else
        if(semana==1)
        printf("\n%d = segunda\n", semana);

    else
        if(semana==2)
        printf("\n%d = ter�a\n", semana);

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
        printf("\n%d = s�bado\n", semana);

    else
        printf("Escolha inv�lida\n");

    system("pause");

    return 0;
}

