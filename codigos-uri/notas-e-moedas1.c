/*----------------------------------------------------------------------------------------------------------------------------------*/
/*Primeiro algoritmo*/
/*----------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, moeda1=0, moeda50=0, moeda25=0, moeda10=0, moeda05=0, moeda01=0;
    double valor;
    scanf("%lf", &valor);
    printf("%lf\n", valor);

    while(valor>0 && valor<1000000.00){
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
        else if(valor>=1)
        {
            moeda1=moeda1+1;
            valor=valor-1;
        }
        else if(valor>=0.50)
        {
            moeda50=moeda50+1;
            valor=valor-0.50;
        }
        else if(valor>=0.25)
        {
            moeda25=moeda25+1;
            valor=valor-0.25;
        }
        else if(valor>=0.10)
        {
            moeda10=moeda10+1;
            valor=valor-0.10;
        }
        else if(valor>=0.05)
        {
            moeda05=moeda05+1;
            valor=valor-0.05;
        }
        else if(valor>=0.01)
        {
            moeda01=moeda01+1;
            valor=valor-0.01;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", moeda1);
    printf("%d moeda(s) de R$ 0,50\n", moeda50);
    printf("%d moeda(s) de R$ 0,25\n", moeda25);
    printf("%d moeda(s) de R$ 0,10\n", moeda10);
    printf("%d moeda(s) de R$ 0,05\n", moeda05);
    printf("%d moeda(s) de R$ 0,01\n", moeda01);

    return 0;
}