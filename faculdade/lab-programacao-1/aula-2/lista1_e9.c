#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Armazene o valor 10 na variável A e o valor 20 na variável B, a seguir, troque
esses valores (Utilizando apenas atribuições entre variáveis).
*/

int main(){

    setlocale(LC_ALL, "");

    int A, B, C;

    printf("Insira um número inteiro: ");
    scanf("%d", &A);

    printf("\nInsira um segundo número inteiro: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("\nO valor de A é %d e o valor de B é %d ", A, B);

    system("pause");

    return 0;
}
