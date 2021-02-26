/*
Calcule a média de 2 notas de um aluno, exiba a média e uma mensagem se foi aprovado ou reprovado.
usando modularidade.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Protótipo
float media(float,float);
void situacao(float);

//definição
int main(){
    setlocale(LC_ALL, "");
    float n1, n2, c;
    printf("Valor da nota 1: ");
    scanf("%f", &n1);
    printf("\nValor da nota 2: ");
    scanf("%f", &n2);

    c=media(n1,n2);
    situacao(c);

    return 0;
}

float media (float a, float b)
{
    return ((a+b)/2);
}

void situacao(float s){
    if(s>6)
        printf("Média: %.2f\nAprovado.", s);
    else
        printf("Média: %.2f\nReprovado.", s);
}