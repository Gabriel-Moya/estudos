/*----------------------------------------*/
/*Exercício 1005 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1005*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    float A, B;
    double MEDIA;
    scanf("%f %f", &A, &B);
    MEDIA=((A*3.5)+(B*7.5))/11;
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}