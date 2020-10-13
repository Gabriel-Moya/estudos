/*
Deixe o usuário inserir 2 valores, e escolher um tipo de operação com os valores
usando switch case.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float n1, n2, result;
    int op;

    printf("Digite o valor de A: ");
    scanf("%f", &n1);
    printf("Digite o valor de B: ");
    scanf("%f", &n2);
    system("cls");
    printf("Digite a operação:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        result=n1+n2;
        break;
    case 2:
        result=n1-n2;
        break;
    case 3:
        result=n1*n2;
        break;
    case 4:
        result=n1/n2;
        break;
    }
    system("cls");

    printf("\nResultado = %.2f\n", result);

    system("pause");
    return 0;
}