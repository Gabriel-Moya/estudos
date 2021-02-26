/*----------------------------------------*/
/*Exercício 1017 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1017*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int tempo, km;
    float litros;
    scanf("%d %d", &tempo, &km);
    litros=tempo*km;
    litros=litros/12;
    printf("%.3f\n", litros);
 
    return 0;
}