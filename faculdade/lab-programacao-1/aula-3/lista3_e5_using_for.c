#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//EST� ERRADO REFAZER

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-�gua      11 = Verde-�gua claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lil�s
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Leia 5 n�meros e escreva o maior e o menor.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int leitura, maior, menor, i;

    //Captura dos dados
    printf("Digite cinco n�meros inteiros: ");
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

        printf("O maior � %d e o menor � %d\n", maior, menor);


    system("pause");

    return 0;
}
