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
Leia um n�mero inteiro de 3 algarismos e escreva se o algarismo da casa da centena �
par ou �mpar.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, centena, resto;

    //Captura dos dados
    printf("Digite um n�mero inteiro de 3 algarismos: ");
    scanf("%d", &x);

    centena = x/100;

    resto = centena%2;

    system("cls");

    //condi��o para exibi��o dos dados
    if (resto==0)
        system("color 1");
        printf("\nA casa da centena do n�mero %d � um n�mero par\n", x);
    else
        system("color 4");
        printf("\nA casa da centena do n�mero %d � um n�mero �mpar\n", x);


    system("pause");

    return 0;
}
