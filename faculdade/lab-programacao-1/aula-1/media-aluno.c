#include<stdio.h>
#include<stdlib.h>

int main(){

    float a, b, m;

    printf("\nInsira a primeira nota\n");
    scanf("%f", &a);
    printf("\nInsira a segunda nota\n");
    scanf("%f", &b);

    m = (a+b)/2;

    printf("\nA media do aluno e %f", m);

    return 0;
}