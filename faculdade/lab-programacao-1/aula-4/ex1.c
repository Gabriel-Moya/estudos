#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
 Escreva uma solu��o para ler as dimens�es de um ret�ngulo (base e altura),
calcular e escrever a �rea do ret�ngulo. Se os lados forem iguais, escreva
�QUADRADO�, caso contr�rio escreva �RET�NGULO�.
*/

int main ()
{
    setlocale(LC_ALL, "");

    float h, b, area;

    printf("Insira a altura da figura ");
    scanf("%f", &h);

    printf("Insira a base da figura ");
    scanf("%f", &b);

    area = h*b;

    if (h==b)
    printf("A figura � um quadrado, e sua �rea � %.2f ", area);

    else
    printf("A figura � um ret�ngulo, e sua �rea � %.2f ", area);



    system("pause");

    return 0;
}
