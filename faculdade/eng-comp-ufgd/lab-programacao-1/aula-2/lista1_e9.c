#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Armazene o valor 10 na vari�vel A e o valor 20 na vari�vel B, a seguir, troque
esses valores (Utilizando apenas atribui��es entre vari�veis).
*/

int main(){

    setlocale(LC_ALL, "");

    int A, B, C;

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &A);

    printf("\nInsira um segundo n�mero inteiro: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("\nO valor de A � %d e o valor de B � %d ", A, B);

    system("pause");

    return 0;
}
