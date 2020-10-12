/*----------------------------------------*/
/*Exercício 1008 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1008*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int NUMBER, HORAS;
    float VALOR, SALARIO;
    scanf("%d %d %f", &NUMBER, &HORAS, &VALOR);
    SALARIO=HORAS*VALOR;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARIO);
 
    return 0;
}