#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//ler um numero e elevar ele ao quadrado

int main() {

    setlocale(LC_ALL,"");

    float n, q;

    printf("Insira um número para elevarmos ao quadrado\n");
    scanf("%f", &n);

    q = n*n;

    printf("\n%.0f ", n);
    printf("ao quadrado é: %.2f \n", q);

    return 0;

}