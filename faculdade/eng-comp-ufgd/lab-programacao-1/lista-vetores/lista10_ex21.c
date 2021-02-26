#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");

    int v[10], i, aux;

    for(i=0;i<10;i++){
        printf("Insira 10 números para construir um vetor: ");
        scanf("%d", &v[i]);
    }

    for(i=0;i<10;i++){
        v[i+1]=v[i+1]+v[i];
        printf("%d ", v[i]);
    }

    system("pause");
    return 0;
}
