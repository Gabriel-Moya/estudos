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
Leia um número e escreva se ele é múltiplo de 3 ou não
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, resto;

    //Captura dos dados
    printf("Digite um número: ");
    scanf("%d", &x);

    resto = x%3;

    //condição para exibição dos dados
    if (resto==0)
        printf("%d é um múltiplo de 3\n", x);
    else
        printf("%d não é um múltiplo de 3\n", x);


    system("pause");

    return 0;
}
