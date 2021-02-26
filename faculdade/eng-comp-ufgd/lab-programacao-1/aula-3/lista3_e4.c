#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-água      11 = Verde-água claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lilás
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Dados 3 números escreva-os em ordem crescente, suponha números diferentes.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, y, z;

    //Captura dos dados
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite um segundo número inteiro: ");
    scanf("%d", &y);

    printf("Digite um terceiro número inteiro: ");
    scanf("%d", &z);

    //condições para exibição dos dados ordenados
    if (x<y&&y<z)
        printf("Os números em ordem crescente são %d, %d e %d\n", x, y, z);

    else if (x<z&&z<y)
        printf("Os números em ordem crescente são %d, %d e %d\n", x, z, y);

    else if (y<z&&z<x)
        printf("Os números em ordem crescente são %d, %d e %d\n", y, z, x);

    else if (y<x&&x<z)
        printf("Os números em ordem crescente são %d, %d e %d\n", y, x, z);

    else if (z<x&&x<y)
        printf("Os números em ordem crescente são %d, %d e %d\n", z, x, y);

    else
        printf("Os números em ordem crescente são %d, %d e %d\n", z, y,x );


    system("pause");

    return 0;
}
