#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[15], i;

    for(i=0;i<15;i++){
        printf("Insira 15 valores: ");
        scanf("%d", &a[i]);
    }

    for(i=0;i<15;i++){
        printf("\n%d", a[i]);
    }


    system("pause");
    return 0;
}
