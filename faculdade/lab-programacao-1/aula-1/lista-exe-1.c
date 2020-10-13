#include<stdio.h>
#include<stdlib.h>
//receba dois numeros e divida o primeiro pelo segundo, exibindo o resultado no final
int main(){

    float a, b, r;

    printf("\nDigite o primeiro numero\n");
    scanf("%f", &a);
    printf("\nDigite o segundo numero\n");
    scanf("%f", &b);

    r = a/b;

    printf("\nO primeiro numero dividido pelo segundo resulta em: %.2f", r);

    return 0;
}