#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero
de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um
representa em rela��o ao total de eleitores.
*/

int main(){

    setlocale(LC_ALL, "");

    float eleitores, brancos, nulos, validos, pbrancos, pnulos, pvalidos;

    printf("Digite a quantidade de eleitores do munic�pio: ");
    scanf("%d", &eleitores);

    printf("\nDigite a quantidade de votos brancos do munic�pio: ");
    scanf("%d", &brancos);

    printf("\nDigite a quantidade de votos nulos do munic�pio: ");
    scanf("%d", &nulos);

    printf("\nDigite a quantidade de votos validos do munic�pio: ");
    scanf("%d", &validos);

    pbrancos = 100/eleitores*brancos;
    pnulos = 100/eleitores*nulos;
    pvalidos = 100/eleitores*validos;

    printf("\nS�o %.0f%% de votos brancos, %.0f%% de votos nulos e %.0f%% de votos v�lidos", pbrancos, pnulos, pvalidos);


    return 0;

}
