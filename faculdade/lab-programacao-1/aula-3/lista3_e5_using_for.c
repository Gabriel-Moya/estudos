#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//ESTÁ ERRADO REFAZER

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-água      11 = Verde-água claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lilás
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Leia 5 números e escreva o maior e o menor.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int leitura, maior, menor, i;

    //Captura dos dados
    printf("Digite cinco números inteiros: ");
    scanf("%d", leitura);

    maior = leitura;
    menor = leitura;

    i = 0;
    while (i<5)
        {
        scanf("%d", leitura);

        if (leitura>maior)
            maior=leitura;
        if (leitura<menor)
            menor=leitura;
        i++;
    }

        printf("O maior é %d e o menor é %d\n", maior, menor);


    system("pause");

    return 0;
}
