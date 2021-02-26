#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Calcule a área de uma pizza que possui um raio r (área é A = π r2). Declare PI=3.14
como constante.
*/

int main(){

    setlocale(LC_ALL, "");

    const float PI = 3.14;
    float r, a;

    printf("Insira o raio da pizza: ");
    scanf("%f", &r);

    a = PI*(r*r);

    printf("\nA área da pizza é %.2f ", a);

    return 0;

}
