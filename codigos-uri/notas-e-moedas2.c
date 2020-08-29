/*----------------------------------------------------------------------------------------------------------------------------------*/
/*Segundo algoritmo*/
/*----------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    float valor, vetIn[12]={100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.10, 0.05, 0.01};
    int i, vetOut[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%f", &valor);

    for(i=0; i<12; i++){
        while(valor >= vetIn[i]){
            valor -= vetIn[i];
            vetOut[i]++;
        }
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