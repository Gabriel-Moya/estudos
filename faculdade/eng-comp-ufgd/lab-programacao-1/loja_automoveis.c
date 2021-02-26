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

    printf("Qual o ano de fabricação? ");
    scanf("%d", &fabricacao);

    printf("O carro é importado ou nacional? (Digite 'i' para importado e 'n' para nacional) ");
    scanf("%s", &imp_na);

    printf("Insira a quilometragem do veículo: ");
    scanf("%f", &km);

    printf("Digite a quantidade de donos que o carro já possuiu: ");
    scanf("%d", &qtd_dono);

    printf("O carro será pago à vista, parcelado ou com uma entrada? (Digite 'v' para à vista, 'p' para parcelado e 'e' para entrada+parcelamento) ");
    scanf("%s", &forma_pag);

    //Condições de parcelamentos
    if (vlr_carro>=50000 && imp_na=='n')
        printf("Escolha a quantidade de parcelas, pode parcelar até 60x ");
        scanf("%d", qtd_parcelas);




    //Condições para descontos

    printf("final");

    system("pause");

    return 0;
}
