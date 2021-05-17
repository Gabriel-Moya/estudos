#include <stdio.h>

void imprimeDecrescente(int x){
    
    if(x == 0){
        printf("%d ", x);
    }
    else{
        printf("%d ", x);
        imprimeDecrescente(x - 1);
    }
}

void imprimeCrescente(int x){
    
    if(x == 0){
        printf("%d ", x);
    }
    else{
        imprimeCrescente(x - 1);
        printf("%d ", x);
    }
}

int main() {

    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimeDecrescente(n);
    printf("\n");
    imprimeCrescente(n);

    return 0;
}