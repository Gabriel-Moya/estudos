#include <stdio.h>
#include <stdlib.h>

/*
            Cuidado ao usar o short pois ele está limitado a 16bits
            intervalo: -32.768 até 32.767
            Obs: Isso devido ao bit mais sigficativo que serve para sinal
*/

int main(){

    int x = 0;
    short int y = 32767;

    printf("Tamanho de um int na memoria: %d bytes\n", sizeof x);
    printf("Tamanho de um short int na memoria: %d bytes\n", sizeof y);

    printf("Valor de Y: %d\n", y);
    printf("Y++\n");
    y++;
    printf("Valor de Y: %d\n", y);


    return 0;
}