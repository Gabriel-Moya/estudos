/*----------------------------------------*/
/*Exercício 1078 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1078*/
/*----------------------------------------*/


// Primeira opção
/*
#include <stdio.h>
 
int main() {
 
    int N;

    scanf("%d", &N);

    printf("1 x %d = %d\n", N, 1*N);
    printf("2 x %d = %d\n", N, 2*N);
    printf("3 x %d = %d\n", N, 3*N);
    printf("4 x %d = %d\n", N, 4*N);
    printf("5 x %d = %d\n", N, 5*N);
    printf("6 x %d = %d\n", N, 6*N);
    printf("7 x %d = %d\n", N, 7*N);
    printf("8 x %d = %d\n", N, 8*N);
    printf("9 x %d = %d\n", N, 9*N);
    printf("10 x %d = %d\n", N, 10*N);
 
    return 0;
}*/

// Segunda opção

#include <stdio.h>

int main () {
    int i, N;

    scanf("%d", &N);

    for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", i, N, i*N);
        }

    return 0;
}