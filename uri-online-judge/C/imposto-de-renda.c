/*----------------------------------------*/
/*Exercício 1051 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1051*/
/*----------------------------------------*/

#include <stdio.h>
 
int main() {

    float salario, imposto;

    scanf("%f", &salario);

    if(salario <= 2000) {
        printf("Isento\n");
    } else if (salario > 2000 && salario <= 3000) {
        salario -= 2000;
        imposto = salario*0.08;
        printf("R$ %.2f\n", imposto);
    } else if (salario > 3000 && salario <= 4500) {
        salario -= 3000;
        imposto = salario*0.18;
        imposto += 1000*0.08;
        printf("R$ %.2f\n", imposto);
    } else if (salario > 4500) {
        salario -= 4500;
        imposto = salario*0.28;
        imposto += 1000*0.08;
        imposto += 1500*0.18;
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
