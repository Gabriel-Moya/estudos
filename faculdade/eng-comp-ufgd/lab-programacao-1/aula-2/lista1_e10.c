#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Armazene o valor 10 na vari�vel A e o valor 20 na vari�vel B, a seguir, troque
esses valores (Utilizando apenas atribui��es entre vari�veis) OBS: N�o pode usar
uma terceira vari�vel.
*/

int main(){

    setlocale(LC_ALL, "");

    int A, B;

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &A);

    printf("Insira um segundo n�mero inteiro: ");
    scanf("%d", &B);

    A = A+B;
    B = A-B;
    A = A-B;

    printf("O valor de A � %d e o valor de B � %d ", A, B);

    return 0;
}
