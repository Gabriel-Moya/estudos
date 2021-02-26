/*
Calcule a média de 2 notas de um aluno, exiba a média e uma mensagem se foi aprovado ou reprovado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//definição
int main(){
    setlocale(LC_ALL, "");
    float n1, n2, media;
    printf("Valor da nota 1: ");
    scanf("%f", &n1);
    printf("\nValor da nota 2: ");
    scanf("%f", &n2);

    media=(n1+n2)/2;

    if(media>6)
        printf("Média do aluno: %.2f\nAluno aprovado.\n", media);
    else
        printf("Média do aluno: %.2f\nAluno reprovado.\n", media);

    system("pause");
    return 0;
}