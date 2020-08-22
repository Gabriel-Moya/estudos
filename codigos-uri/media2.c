/*----------------------------------------*/
/*Exercício 1006 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1006*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    double MEDIA, A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA=((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1lf\n", MEDIA);
 
    return 0;
}