#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){

    setlocale(LC_ALL, "");

    int x, q;
    double rq;

    printf("Digite um número inteiro\n");
    scanf("%d", &x);

    if(x>0){
        rq=sqrt(x);
        printf("A raíz quadrada de %d é: %f", x, rq);
    }
    else if(x<0){
        q=x*x;
        printf("O quadrado de %d é: %d", x, q);
    }

    return 0;
}
