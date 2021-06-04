/*----------------------------------------*/
/*Exercício 1009 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1009*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    char vendedor;
    double salario, vendas, salariototal;
    scanf("%s %lf %lf", &vendedor, &salario, &vendas);
    salariototal=salario+(vendas*0.15);
    printf("TOTAL = R$ %.2f\n", salariototal);
 
    return 0;
}