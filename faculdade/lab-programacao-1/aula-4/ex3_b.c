#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "");

    float area, r;

    printf("Digite o raio do c�rculo ");
    scanf("%f", &r);

    area = pi*(r*r);

    printf("A �rea do c�rculo � %.2f. ", area);

    system("pause");

    return 0;
}
