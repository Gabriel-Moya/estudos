#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{       int ano,alt1,alt2,alt3,alt4,alt5,alt6,parce,desc,kms;
        float entrada,valor,desconto,emprestimo;
        char nac[10]="NACIONAL",impor[10]="IMPORTADO",dono1[3]="SIM",dono2[3]="NÃO";
        setlocale(LC_ALL,"");


    printf("entre com o valor do carro: \n");
    scanf("%f",&valor);

    printf("o carro e nacional ou importado\n1.para nacional\n2.para importado\n");
    scanf("%d",&alt1);

    printf("\nano do veiculo e a quilometragem.\n");
    scanf("%d%d",&ano,&kms);
    if(kms>10000)
    {
        printf("carro com quilometragem superior a 10000\n deseja um desconto de 5 porcento ou elevar o numero maximo de parcelas para 60\ndesconto não acumulativo\n\n 1.para o desconto\n 2.para as parcelas\n");
        scanf("%d",&alt6);
    }

    printf("pertenceu a um unico dono\n 1.para sim\n 2.para não\n");
    scanf("%d",&alt2);

    printf("deseja pagar o veiculo a vista?\n 1.para sim\n 2.para não\n");
    scanf("%d",&alt3);

    if(alt3==1)
    {
    //para o caso de ser a vista
       printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\ndesconto de 15% total de: %.2f\nComissão do vendedor de sete porcento total de: %.2f \nAno de fabricação %d\nQuilometragem: %d\n",valor,valor*0.85,valor*0.15,valor*0.07,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico do no:NÃO\n");


    }
    else
    {
        printf("deseja dar entrada?\n 1.para sim\n 2.para não\n");
        scanf("%d",&alt4);
            if(alt4==1)
        {
            printf("entre com o valor da entrada");
            scanf("%f",&entrada);
        }

        printf("deseja financiar o restante?\n 1.para sim\n 2.para não\n");
        scanf("%d",&alt5);
            if(alt5==1)
            {
                valor=valor+(valor*0.08);
                if((ano<2010)&&(alt2==2)&&(alt6==2))
                {
                desconto=0.10;
                printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\ndesconto de 10% total de: %.2f\nComissão do vendedor de 7% total de: %.2f \nAno de fabricação %d\nQuilometragem: %d\n",valor,valor-(valor*desconto),valor*desconto,valor*0.07,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico do no:NÃO\n");

                }
                else if((ano>2010)&&(alt2==1)&&(alt6==1))
                {
                    desconto=0.05;
                printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\ndesconto de 5% total de: %.2f\nComissão do vendedor de 7% total de: %.2f \nAno de fabricação %d\nQuilometragem: %d\n",valor,valor-(valor*desconto),valor*desconto,valor*0.07,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico do no:NÃO\n");

                 //desconto de 5%

                }
                    else
                    {
        printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\n\nComissão do vendedor de 7% total de: %.2f \nAno de fabricação %d\nQuilometragem: %d\n",valor,valor,valor*0.07,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico dono:NÃO\n");
                        //sem desconto
                    }

                //para o caso do financiamento
            }
            else
            {
                printf("Entre com o numero desejado de parcelas\n");
                if((valor>50000)&&(alt1==1)||(alt1==2)||(alt6==2))
                   {
                    printf("maximo de parcelas = 60\n");
                    scanf("%d",&parce);
                   }
                else{
                    printf("maximo de parcelas = 24\n");
                    scanf("%d",&parce);
                    }
                if((ano<2010)&&(alt2==2)&&(alt6==2))
                {
                desconto=0.10;
                          printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\ndesconto de 10% total de: %.2f\nAno de fabricação %d\nQuilometragem: %d\n",valor,valor-(valor*desconto),valor*desconto,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico dono: NÃO\n");

                }
                else if((ano>2010)&&(alt2==1)&&(alt6==1))
                {
                    desconto=0.05;

        printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\ndesconto de 5% total de: %.2f\nAno de fabricação %d\nQuilometragem: %d\n",valor,valor-(valor*desconto),valor*desconto,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico dono: NÃO\n");

                }
                    else
                    {

        printf("Valor do veiculo: %.2f\nValor total a pagar: %.2f\nAno de fabricação %d\nQuilometragem: %d\n",valor,valor,ano,kms);
        if(alt1==1)
            printf("modelo: nacional\n");
        else
            printf("modelo: importado\n");

        if(alt2==1)
            printf("Unico dono: SIM\n");
        else
            printf("Unico dono: NÃO\n");
                    }

        if(parce<=12)
            printf("comissão do vendedor:%f\n",valor*0.07);
        else
            if(parce<24)
            printf("comissão do vendedor:%f\n",valor*0.05);
            else
                printf("comissão do vendedor:%f\n",valor*0.02);
        if(alt4==1)
            printf("valor da entrada de : %f",entrada);


        system("pause");
        return 0;


}
}}
