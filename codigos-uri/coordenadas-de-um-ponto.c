/*----------------------------------------*/
/*Exercício 1041 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1041*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {

    float x, y;

    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else if (x > 0 && y < 0) {
        printf("Q4\n");
    }
 
    return 0;
}