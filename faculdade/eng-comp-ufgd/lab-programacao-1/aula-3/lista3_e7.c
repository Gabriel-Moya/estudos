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
Leia um n�mero e se ele for maior do que 20, ent�o imprimir a metade do n�mero.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    float x;

    //Captura dos dados
    printf("Digite um n�mero inteiro: ");
    scanf("%f", &x);

    //condi��o para exibi��o dos dados
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
