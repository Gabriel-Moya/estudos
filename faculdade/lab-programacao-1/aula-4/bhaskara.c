#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>

/*
Cores:
    0 = Preto          8 = Cinza
    1 = Azul           9 = Azul claro
    2 = Verde        10 = Verde claro
    3 = Verde-água   11 = Verde-água claro
    4 = Vermelho     12 = Vermelho claro
    5 = Roxo         13 = Lilás
    6 = Amarelo      14 = Amarelo claro
    7 = Branco       15 = Branco brilhante
*/

    int main()
{
    system("color 6");
    setlocale(LC_ALL,"");

        int a, b, c;
        float x1, x2, D;

        printf("\n Calculadora de equações do segundo grau por bhaskara. \n");
        printf("Insira o valor de a: ");
        scanf("%i", &a);

        printf("Insira o valor de b: ");
        scanf("%i", &b);

        printf("Insira o valor de c: ");
        scanf("%i", &c);

        D=(b*b)-4*a*c;
        x1=(0-b+sqrt(D))/2*a;
        x2=(0-b-sqrt(D))/2*a;

        if(D<0){
            system("color 4");
            printf("\n A equação não possui raíz real. \n");
        } else {
            system("color 2");
            printf("\n As raízes são %.2f e %.2f. \n", x1, x2);}

        system("pause");
        system("cls");
        return 0;

        }
