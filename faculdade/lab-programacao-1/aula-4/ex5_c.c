#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, b, c;
    int operacao;

    printf("Informe tr�s valores: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\n1. Calcular a m�dia.\n2. Somar\n3. Multiplicar\n");
    scanf("%d", &operacao);

    if(operacao==1)
        printf("M�dia = %.2f\n", (a+b+c)/3);

    else
        if(operacao==2)
        printf("Soma = %.2f\n", a+b+c);

    else
        if(operacao==3)
        printf("Multiplica��o = %.2f\n", a*b*c);

    else
        printf("Escolha inv�lida\n");

    system("pause");

    return 0;
}
