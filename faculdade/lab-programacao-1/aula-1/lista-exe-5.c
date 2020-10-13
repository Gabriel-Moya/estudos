#include<stdio.h>
#include<stdlib.h>
//receba o peso de uma pessoa em kg, calcule e mostre esse peso em gramas

int main(){

    float kg, g;

    printf("\nDigite o seu peso\n");
    scanf("%f", &kg);

    g = kg*1000;

    printf("\nO seu peso em gramas sera: %.2f", g);

    return 0;
}
