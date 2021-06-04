#include <stdio.h>
#include <stdlib.h>

void imprimir(int vet[], int tam){
    int i;
    
    for( i=0; i< tam; i++)
        printf("%d ", *(vet + i));
    printf("\n");
}

int main(){

    int vet[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    imprimir(vet, 10);

    return 0;
}