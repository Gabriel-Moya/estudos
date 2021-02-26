#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");
    int x, mult;

    printf("Insira um número ou 0 para encerrar: ");
    scanf("%d", &x);

    while(x!=0)
    {
        for(mult=1;mult<=10;mult++)
        {
            printf("%d x %d = %d\n", x, mult, x*mult);
        }
        system("pause");
        system("cls");
        printf("Insira um número ou 0 para encerrar: ");
        scanf("%d", &x);
    }
    
    printf("Programa finalizado.\n");

    system("pause");
    return 0;
}