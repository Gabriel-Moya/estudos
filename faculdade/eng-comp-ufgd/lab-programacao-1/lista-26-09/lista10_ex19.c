#include<stdio.h>
#include<stdlib.h>

int main(){

    int v[20], i, x;

    for(i=0;i<20;i++){
        printf("Insira um valor: ");
        scanf("%d", &v[i]);
    }

    printf("Insira o valor de x: ");
    scanf("%d", &x);
    //system("cls");

    for(i=0;i<20;i++)
        if(v[i]==x)
            printf("O valor de x foi encontrado na posicao %d\n", i);



    system("pause");
    return 0;
}
