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
Leia um n�mero e escreva se ele � m�ltiplo de 3 ou n�o
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, resto;

    //Captura dos dados
    printf("Digite um n�mero: ");
    scanf("%d", &x);

    resto = x%3;

    //condi��o para exibi��o dos dados
    if (resto==0)
        printf("%d � um m�ltiplo de 3\n", x);
    else
        printf("%d n�o � um m�ltiplo de 3\n", x);


    system("pause");

    return 0;
}
