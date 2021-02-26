#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, n2, n3, maior, menor, soma;

    printf("\nDigite 3 valores inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    maior=n1;
    menor=n1;

    if(n1 >= n2 && n1 >= n3){//n1 é o maior
        maior = n1;
        if(n2<n3)
            menor=n2;
        else
            menor=n3;
    }
    else
        if(n2>=n1 && n2>=n3){//n2 é o maior
            maior = n2;
            if(n1<n3)
                menor=n1;
            else
                menor=n3;
        }
    else
    if(n3>=n1 && n3>=n2){//n3 é o maior
        maior=n3;
        if(n1<n2)
            menor=n1;
        else
            menor=n2;
    }

    soma = maior+menor;

    printf("Menor %d + maior %d = %d ", menor, maior, soma);


    return 0;
}
