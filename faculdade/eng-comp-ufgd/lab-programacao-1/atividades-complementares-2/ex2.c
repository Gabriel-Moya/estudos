#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    int id_h1, id_h2, id_m1, id_m2, id_hmaior, id_mmaior, id_hmenor, id_mmenor, soma, produto;

    printf("Insira a idade dos dois homens: ");
    scanf("%d %d", &id_h1, &id_h2);
        if (id_h1 > id_h2)
        {
            id_hmaior=id_h1;
            id_hmenor=id_h2;
        }
        else
        {
            id_hmaior=id_h2;
            id_hmenor=id_h1;
        }

    printf("Insira a idade dos dois homens: ");
    scanf("%d %d", &id_m1, &id_m2);
        if (id_m1 > id_m2)
        {
            id_mmaior=id_m1;
            id_mmenor=id_m2;
        }
        else
        {
            id_mmaior=id_m2;
            id_mmenor=id_m1;
        }

    soma = id_mmaior+id_hmenor;
    produto = id_hmenor*id_mmaior;

    printf("Soma = %d\nProduto = %d\n", soma, produto);

    system ("pause");

    return 0;
}