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
Dados 3 n�meros escreva-os em ordem crescente, suponha n�meros diferentes.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, y, z;

    //Captura dos dados
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    printf("Digite um segundo n�mero inteiro: ");
    scanf("%d", &y);

    printf("Digite um terceiro n�mero inteiro: ");
    scanf("%d", &z);

    //condi��es para exibi��o dos dados ordenados
    if (x<y&&y<z)
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", x, y, z);

    else if (x<z&&z<y)
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", x, z, y);

    else if (y<z&&z<x)
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", y, z, x);

    else if (y<x&&x<z)
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", y, x, z);

    else if (z<x&&x<y)
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", z, x, y);

    else
        printf("Os n�meros em ordem crescente s�o %d, %d e %d\n", z, y,x );


    system("pause");

    return 0;
}
