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
Leia um número e se ele for maior do que 20, então imprimir a metade do número.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    float x;

    //Captura dos dados
    printf("Digite um número inteiro: ");
    scanf("%f", &x);

    //condição para exibição dos dados
    if (x>20)
    {
        x=x/2;
        printf("%.2f\n", x);
    }
    else
        printf("%.2f\n", x);


    system("pause");

    return 0;
}
