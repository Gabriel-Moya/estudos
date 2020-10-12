/*----------------------------------------*/
/*Exercício 1015 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1015*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    float x1, y1, x2, y2, saida;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    saida=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%.4f\n", saida);
 
    return 0;
}