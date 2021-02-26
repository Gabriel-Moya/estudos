#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");

    int op;
    float n1, n2;

    printf("1. adicao\n");
    printf("2. subtracao\n");
    printf("3. multiplicacao\n");
    printf("4. divisao\n\n");
    scanf("%d", &op);

    if (op>4||op<1)
    {
        printf("Operacao nao encontrada\n");
    }

    if(op==1||op==2||op==3||op==4){
        printf("Digite dois números: ");
        scanf("%f %f", &n1, &n2);
    }

    switch(op){
        case 1: printf("%.1f + %.1f = %.1f\n", n1, n2,n1 + n2) ;break;
        case 2: printf("%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);break;
        case 3: printf("%.1f * %.1f = %.1f\n", n1, n2, n1 * n2);break;
        case 4: printf("%.1f / %.1f = %.1f\n", n1, n2, n1 / n2);break;
        default: printf("Operacao nao encontrada\n");break;
    }

    system ("pause");

    return 0;
}