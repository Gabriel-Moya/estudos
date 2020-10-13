#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL, "");
    int qtdprodutos, cxgrande=0, cxmedia=0, cxpequena=0, resto=0;
    printf("Insira a quantidade de produtos: ");
    scanf("%d", &qtdprodutos);
    if(qtdprodutos<13)
        cxgrande++;
    else{
        cxgrande=qtdprodutos/13;
        resto=qtdprodutos%13;
        if(resto>0 && resto<7)
            cxmedia++;
        else{
            cxmedia=resto/7;
            resto=resto%7;
            if(resto>0 && resto<7)
                cxpequena++;
            else
                cxpequena=resto/4;
            }
        }
    printf("%d Cx grande.\n%d Cx média.\n%d Cx pequena.\n", cxgrande, cxmedia, cxpequena);
    system("pause");
    return 0;
}
