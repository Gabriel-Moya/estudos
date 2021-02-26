#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Escreva um algoritmo para ler o número total de eleitores de um município, o número
de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores.
*/

int main(){

    setlocale(LC_ALL, "");

    float eleitores, brancos, nulos, validos, pbrancos, pnulos, pvalidos;

    printf("Digite a quantidade de eleitores do município: ");
    scanf("%d", &eleitores);

    printf("\nDigite a quantidade de votos brancos do município: ");
    scanf("%d", &brancos);

    printf("\nDigite a quantidade de votos nulos do município: ");
    scanf("%d", &nulos);

    printf("\nDigite a quantidade de votos validos do município: ");
    scanf("%d", &validos);

    pbrancos = 100/eleitores*brancos;
    pnulos = 100/eleitores*nulos;
    pvalidos = 100/eleitores*validos;

    printf("\nSão %.0f%% de votos brancos, %.0f%% de votos nulos e %.0f%% de votos válidos", pbrancos, pnulos, pvalidos);


    return 0;

}
