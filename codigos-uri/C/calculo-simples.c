/*----------------------------------------*/
/*Exercício 1010 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1010*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {
 
    int codigo1, qtd1, codigo2, qtd2;
    float preco1, preco2, total;
    scanf("%d %d %f", &codigo1, &qtd1, &preco1);
    scanf("%d %d %f", &codigo2, &qtd2, &preco2);
    total=(qtd1*preco1)+(qtd2*preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}