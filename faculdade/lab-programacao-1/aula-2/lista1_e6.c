#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//

int main(){

    setlocale(LC_ALL, "");

    int qntd_paes, qntd_broas;
    float vlr_paes, vlr_broas, total_vendido, poupanca;

    //quantidades inseridas pelo usuário
    printf("insira a quantidade de pães vendidos: ");
    scanf("%d", &qntd_paes);

    printf("\ninsira a quantidade de broas vendidas: ");
    scanf("%d", &qntd_broas);

    //calculos
    vlr_paes = qntd_paes*0.55;
    vlr_broas = qntd_broas*1.5;

    total_vendido = vlr_paes+vlr_broas;
    poupanca = total_vendido*0.1;

    //exibição para o usuário
    system("cls");
    printf("\nO total vendido de pães e broas são R$ %.2f ", total_vendido);
    printf("\nO valor a ser poupado será de R$ %.2f ", poupanca);

    system("pause");

    return 0;
}
