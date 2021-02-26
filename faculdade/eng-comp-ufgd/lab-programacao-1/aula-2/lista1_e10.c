#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Armazene o valor 10 na variável A e o valor 20 na variável B, a seguir, troque
esses valores (Utilizando apenas atribuições entre variáveis) OBS: Não pode usar
uma terceira variável.
*/

int main(){

    setlocale(LC_ALL, "");

    int A, B;

    printf("Insira um número inteiro: ");
    scanf("%d", &A);

    printf("Insira um segundo número inteiro: ");
    scanf("%d", &B);

    A = A+B;
    B = A-B;
    A = A-B;

    printf("O valor de A é %d e o valor de B é %d ", A, B);

    return 0;
}
