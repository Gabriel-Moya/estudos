#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int p1, p2, p3, maior, menor, meio;

    printf("Digite os pontos dos 3 jogadores:\n");
    scanf("%d %d %d", &p1, &p2, &p3);
    system("cls");

    if(p1>p2 && p2>p3)
        maior=p1;
        menor=p3;
        meio=p2;
    else if(p2>p1 && p1>p3)
        maior=p2;

    else if(p3>p1 && p3>p2)
        maior=p3;

    if(prestacao<=salario*0.3)
        printf("Empréstimo concedido.");
    else
        printf("Empréstimo não concedido.");

    return 0;
}
