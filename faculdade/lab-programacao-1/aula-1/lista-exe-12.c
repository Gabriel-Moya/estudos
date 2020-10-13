#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Converter um valor lido em real R$ para dólar U$
o programa deve solicitar a cotação do dólar e quantidade em reais disponíveis
com o usuário*/

int main(){

    setlocale(LC_ALL,"");

    float cous, rsd, rstous;

    printf("\nInsira a cotação atual do dólar\n");
    scanf("%f", &cous);

    printf("\nInsira a quantidade de reais disponível\n");
    scanf("%f", &rsd);

    rstous = rsd/cous;

    printf("\nO valor convertido de reais para dólar será: %.2f", rstous);

    return 0;
}