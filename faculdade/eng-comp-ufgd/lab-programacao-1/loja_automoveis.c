#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale (LC_ALL, "");

    int fabricacao, qtd_dono, qtd_parcelas;
    char imp_na, forma_pag;
    float vlr_carro, km;

    //Entrada dos dados
    printf("Digite o valor do carro: ");
    scanf("%f", &vlr_carro);

    printf("Qual o ano de fabrica��o? ");
    scanf("%d", &fabricacao);

    printf("O carro � importado ou nacional? (Digite 'i' para importado e 'n' para nacional) ");
    scanf("%s", &imp_na);

    printf("Insira a quilometragem do ve�culo: ");
    scanf("%f", &km);

    printf("Digite a quantidade de donos que o carro j� possuiu: ");
    scanf("%d", &qtd_dono);

    printf("O carro ser� pago � vista, parcelado ou com uma entrada? (Digite 'v' para � vista, 'p' para parcelado e 'e' para entrada+parcelamento) ");
    scanf("%s", &forma_pag);

    //Condi��es de parcelamentos
    if (vlr_carro>=50000 && imp_na=='n')
        printf("Escolha a quantidade de parcelas, pode parcelar at� 60x ");
        scanf("%d", qtd_parcelas);




    //Condi��es para descontos

    printf("final");

    system("pause");

    return 0;
}
