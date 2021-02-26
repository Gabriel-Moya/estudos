#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, escolha;

    printf("Informe um valor: ");
    scanf("%f", &a);

    printf("\n1. Calcular o dobro do número.");
    printf("\n2. Calcular o triplo do número.\n");
    scanf("%f", &escolha);

    if(escolha==1){
        a=a*2;
        printf("Dobro = %.2f", a);
        }
    else{
            a=a*3;
            printf("Triplo = %.2f", a);
        }


    system("pause");

    return 0;
}
