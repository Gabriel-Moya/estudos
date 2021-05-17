#include <stdio.h>

void imprimir(int x){
    
    if(x > 0){
        printf("%d ", x);
        imprimir(x - 1);
    }
    else{
        printf("%d ", x);
    }
}

int main() {

    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}