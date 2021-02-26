#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x[15];

    for(i=0;i<15;i++){
        printf("Digite um número: ");
        scanf("%d", &x[i]);
    }
    system("cls");
    for(i=0;i<15;i++){
        printf("\n%d", x[i]);
    }

    return 0;
}
