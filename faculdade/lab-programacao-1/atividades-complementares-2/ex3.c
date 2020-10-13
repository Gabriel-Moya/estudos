#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.14

int main ()
{
    setlocale(LC_ALL, "");

    int qtd_cilindros, altura, raio, valor;
    float qtd_latas, ab, al, at, at_cilindros, qtd_litros;

    printf("Digite a quantidade de cilindros: ");
    scanf("%d", &qtd_cilindros);

    printf("Digite a altura do cilindro: ");
    scanf("%d", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%d", &raio);

    ab=PI*raio*raio;
    al=2*PI*raio*altura;
    at=2*ab+al;

    at_cilindros=at*qtd_cilindros;
    qtd_litros=at_cilindros/3;
    qtd_latas=qtd_litros/5;

    if (qtd_latas==(int)qtd_latas)
        valor=qtd_latas*50;
    else
        valor=((int)qtd_latas+1)*50;

    printf("Será necessário %.2f latas e custará R$ %d,00\n", qtd_latas, valor);

    system ("pause");

    return 0;
}
