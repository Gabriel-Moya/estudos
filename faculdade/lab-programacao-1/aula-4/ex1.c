#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
 Escreva uma solução para ler as dimensões de um retângulo (base e altura),
calcular e escrever a área do retângulo. Se os lados forem iguais, escreva
“QUADRADO”, caso contrário escreva “RETÂNGULO”.
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
    printf("A figura é um quadrado, e sua área é %.2f ", area);

    else
    printf("A figura é um retângulo, e sua área é %.2f ", area);



    system("pause");

    return 0;
}
