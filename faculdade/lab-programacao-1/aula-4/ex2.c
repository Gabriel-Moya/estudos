#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
 Escreva uma solução para ler os coeficientes da equação do 2º grau (ax
2 + bx +
c). Se delta (Δ) >= 0, exiba as raízes; caso contrário, mostre a mensagem “Não
há raiz real”.
*/

int main ()
{
    setlocale(LC_ALL, "");

    int a, b, c;
    float x1, x2, delta;

    printf("Digite o valor de A ");
    scanf("%d", &a);

    printf("Digite o valor de B ");
    scanf("%d", &b);

    printf("Digite o valor de C ");
    scanf("%d", &c);

    delta=(b*b)-4*a*c;
    x1=(0-b+sqrt(delta))/2*a;
    x2=(0-b-sqrt(delta))/2*a;

    if(delta<0)
        printf("\n A equação não possui raíz real.\n");
    else
        printf("\n As raízes são %.2f e %.2f. \n", x1, x2);


    system("pause");

    return 0;
}
