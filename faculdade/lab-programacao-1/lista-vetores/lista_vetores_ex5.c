#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, cont=0, x[10];

    for(i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &x[i]);
        if(x[i]%2==0)
            cont++;
    }
    system("cls");
    printf("O vetor A, possui %d números pares.\n", cont);

    return 0;
}
