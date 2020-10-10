/*----------------------------------------*/
/*Exercício 1038 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1038*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {

    int x, qtd;
    float total;
 
    scanf("%d %d", &x, &qtd);

    switch (x) {
        case 1:
            total = qtd*4;
            printf("Total: R$ %.2f\n", total);
            break;
        case 2:
            total = qtd*4.5;
            printf("Total: R$ %.2f\n", total);
            break;
        case 3:
            total = qtd*5;
            printf("Total: R$ %.2f\n", total);
            break;
        case 4:
            total = qtd*2;
            printf("Total: R$ %.2f\n", total);
            break;
        case 5:
            total = qtd*1.5;
            printf("Total: R$ %.2f\n", total);
            break;
    }
 
    return 0;
}