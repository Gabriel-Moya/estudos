#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Protótipo
int ano(int);

int main ()
{
    setlocale(LC_ALL, "");
    int idade, nasc;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    nasc=ano(idade);
    printf("%d", nasc);

    return 0;
}

int ano(int x)
{
    return (2019-x);
}
