/*----------------------------------------*/
/*Exercício 1014 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1014*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int X;
    float Y, media;
    scanf("%d %f", &X, &Y);
    media=X/Y;
    printf("%.3f km/l\n", media);
 
    return 0;
}