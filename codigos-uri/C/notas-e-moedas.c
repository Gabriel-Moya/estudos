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
    int aux;
    int vetIn[12]={10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int i, vetOut[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%f", &valor);
    aux = valor*100;

    for(i=0; i<12; i++){
        vetOut[i] = aux/vetIn[i];
        aux = aux % vetIn[i];
    }

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", vetOut[0]);
    printf("%i nota(s) de R$ 50.00\n", vetOut[1]);
    printf("%i nota(s) de R$ 20.00\n", vetOut[2]);
    printf("%i nota(s) de R$ 10.00\n", vetOut[3]);
    printf("%i nota(s) de R$ 5.00\n", vetOut[4]);
    printf("%i nota(s) de R$ 2.00\n", vetOut[5]);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", vetOut[6]);
    printf("%i moeda(s) de R$ 0.50\n", vetOut[7]);
    printf("%i moeda(s) de R$ 0.25\n", vetOut[8]);
    printf("%i moeda(s) de R$ 0.10\n", vetOut[9]);
    printf("%i moeda(s) de R$ 0.05\n", vetOut[10]);
    printf("%i moeda(s) de R$ 0.01\n", vetOut[11]);

    return 0;
}