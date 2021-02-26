#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "");

    float area, r;

    printf("Digite o raio do círculo ");
    scanf("%f", &r);

    area = pi*(r*r);

    printf("A área do círculo é %.2f. ", area);

    system("pause");

    return 0;
}
