/*----------------------------------------*/
/*Exercício 1018 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1018*/
/*----------------------------------------*/

#include <stdio.h>

int main() {

    int valor, nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, nota1=0;
    scanf("%d", &valor);

    printf("%d\n", valor);

    while(valor>0 && valor<1000000){
        if(valor>=100)
        {
            nota100=nota100+1;
            valor=valor-100;
        }
        else if(valor>=50)
        {
            nota50=nota50+1;
            valor=valor-50;
        }
        else if(valor>=20)
        {
            nota20=nota20+1;
            valor=valor-20;
        }
        else if(valor>=10)
        {
            nota10=nota10+1;
            valor=valor-10;
        }
        else if(valor>=5)
        {
            nota5=nota5+1;
            valor=valor-5;
        }
        else if(valor>=2)
        {
            nota2=nota2+1;
            valor=valor-2;
        }
        else if(valor==1)
        {
            nota1=nota1+1;
            valor=valor-1;
        }
    }

    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}