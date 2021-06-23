#include <stdio.h>

/*
                Aula 11
        Ler sexo, idade, peso e altura
*/

int main(){

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sexo (f, F, m ou M), idade, peso e altura\n");
    scanf("%c %d %f %f", &sexo, &idade, &peso, &altura);

    printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f", sexo, idade, peso, altura);

    return 0;
}