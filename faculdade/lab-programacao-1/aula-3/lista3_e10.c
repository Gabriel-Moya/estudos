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
Dada a altura e a base de 3 paredes, elaborar um algoritmo
que escreva quantas áreas são maiores que 100 m2.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");


    float h1, h2, h3, b1, b2, b3, a1, a2, a3, qntd_areas;

    //Captura dos dados
    printf("Digite a altura e a base da primeira parede: ");
    scanf("%f" "%f", &h1, &b1);

    printf("Digite a altura e a base da segunda parede: ");
    scanf("%f" "%f", &h2, &b2);

    printf("Digite a altura e a base da segunda parede: ");
    scanf("%f" "%f", &h3, &b3);

    a1 = h1*b1;
    a2 = h2*b2;
    a3 = h3*b3;

    if (a1>100)
        qntd_areas = 1;

    if (a2>100)
        qntd_areas = qntd_areas+1;

    if (a3>100)
        qntd_areas = qntd_areas+1;

    printf("\nA quantidade de áreas maior do que 100m² é: %.0f\n", qntd_areas);

    //condição para exibição dos dados


    system("pause");

    return 0;
}
