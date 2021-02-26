#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

int main(){

    float r, a;

    printf("\nInsira o raio de um circulo\n");
    scanf("%f", &r);

    a = (pi * r * r);

    printf("\nArea de circulo: %f", a);

    return 0;
}