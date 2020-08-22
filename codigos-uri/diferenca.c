/*----------------------------------------*/
/*Exercício 1007 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1007*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int A, B, C, D, DIFERENCA;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    DIFERENCA=(A*B-C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}