/*----------------------------------------*/
/*Exercício 1020 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1020*/
/*----------------------------------------*/

#include <stdio.h>

int main() {
    int inDias, outAnos, outMeses, outDias;

    scanf("%d", &inDias);

    outAnos = inDias/365;
    outMeses = (inDias%365)/30;
    outDias = ((inDias%365)%30)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", outAnos, outMeses, outDias);

    return 0;
}