#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-�gua      11 = Verde-�gua claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lil�s
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Leia dois n�meros e informe se eles s�o iguais ou diferentes.
*/

int main ()
{
    system("color 3");
    setlocale(LC_ALL, "");

    int x, y;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    printf("Digite um segundo n�mero inteiro: ");
    scanf("%d", &y);

    if (x==y)
        printf("Os dois s�o n�meros iguais.\n");
    else
        printf("Os dois s�o n�meros diferentes.\n");


    system("pause");

    return 0;
}
