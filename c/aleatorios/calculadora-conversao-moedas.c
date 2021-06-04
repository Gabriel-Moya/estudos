#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float cotacaoDolar, cotacaoGuarani;
    float valorCompra, compraDolar, compraGuarani;

    //Recebe valor da cotação atual do dólar
    printf("Cotação dólar: ");
    scanf("%f", &cotacaoDolar);

    //Recebe valor da cotação atual do guarani
    printf("Cotação guarani: ");
    scanf("%f", &cotacaoGuarani);

    system("cls");

    do
    {
        //Painel com a cotação atual
        printf("Cotação do dólar: %.2f\t\t\t", cotacaoDolar);
        printf("Cotação do guarani: %.2f\n", cotacaoGuarani);
        
        //Recebe o valor total da compra e executa a conversão das moedas
        printf("Digite o valor da compra em R$: ");
        scanf("%f", &valorCompra);
        compraDolar = valorCompra/cotacaoDolar;
        compraGuarani = valorCompra*cotacaoGuarani;

        //Exibe os resultados
        printf("R$ %.2f\n", valorCompra);
        printf("U$ %.2f\n", compraDolar);
        printf("G$ %.2f\n", compraGuarani);
        system("pause");
        system("cls");
        opcao=1;
    } while (opcao==1);

    return 0;
}