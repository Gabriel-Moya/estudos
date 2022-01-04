/*----------------------------------------*/
/*Exercício 1044 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1044*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int a, b;

    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0){
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}