/*----------------------------------------*/
/*Exercício 1002 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1002*/
/*----------------------------------------*/

#include <stdio.h>

int main() {

    double area, raio;
    scanf("%lf", &raio);
    area=(raio*raio)*3.14159;
    printf("A=%.4lf\n", area);
    return 0;
}
