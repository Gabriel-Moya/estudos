/*----------------------------------------*/
/*Exercício 1021 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1021*/
/*----------------------------------------*/

/*----------------------------------------------------------------------------------------------------------------------------------*/
/*Terceiro algoritmo*/
/*----------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    float valor;
    int inteiro, auxNotas, auxMoedas;

    scanf("%f", &valor);

    inteiro = (int)valor;
    valor *= 100;
    auxMoedas = (int)valor;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inteiro/100);
    auxNotas = (inteiro % 100);
    printf("%d nota(s) de R$ 50.00\n", auxNotas/50);
    auxNotas %= 50;
    printf("%d nota(s) de R$ 20.00\n", auxNotas/20);
    auxNotas %= 20;
    printf("%d nota(s) de R$ 10.00\n", auxNotas/10);
    auxNotas %= 10;
    printf("%d nota(s) de R$ 5.00\n", auxNotas/5);
    auxNotas %= 5;
    printf("%d nota(s) de R$ 2.00\n", auxNotas/2);
    auxNotas %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", auxNotas/1);
    auxMoedas %= 100;
    printf("%d moeda(s) de R$ 0.50\n", auxMoedas/50);
    auxMoedas %= 50;
    printf("%d moeda(s) de R$ 0.25\n", auxMoedas/25);
    auxMoedas %= 25;
    printf("%d moeda(s) de R$ 0.10\n", auxMoedas/10);
    auxMoedas %= 10;
    printf("%d moeda(s) de R$ 0.05\n", auxMoedas/5);
    auxMoedas %= 5;
    printf("%d moeda(s) de R$ 0.01\n", auxMoedas);

    return 0;
}