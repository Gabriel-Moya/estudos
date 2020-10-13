#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x[10];

    for(i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &x[i]);
        if(x[i]<0){
            x[i]=0;
        }
    }
    system("cls");
    for(i=0;i<10;i++){
        printf("\n%d", x[i]);
    }

    return 0;
}
