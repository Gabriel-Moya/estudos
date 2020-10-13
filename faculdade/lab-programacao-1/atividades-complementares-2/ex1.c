#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    float peso_morangos, peso_macas, valor_morangos, valor_macas, peso_total, total_parcial, valor_total;

    printf("Digite o peso em kg de morangos: ");
    scanf("%f", &peso_morangos);

    printf("Digite o peso em kg de maças: ");
    scanf("%f", &peso_macas);

        if
            (peso_morangos <= 5)
            valor_morangos = peso_morangos*2.5;
        else
            valor_morangos = peso_morangos*2.2;

        if
            (peso_macas <= 5)
            valor_macas = peso_macas*1.8;
        else
            valor_macas = peso_macas*1.5;

    peso_total = peso_macas+peso_morangos;
    total_parcial = valor_macas+valor_morangos;

    valor_total = total_parcial;

    if
        (total_parcial > 25 || peso_total > 8)
        valor_total = total_parcial-(total_parcial*0.1);

    printf("Valor total da compra é de R$ %.2f\n", valor_total);

    system ("pause");

    return 0;
}