#include<stdio.h>
#include<stdlib.h>

float calc(float kg, float h)
{
    return kg/(h*h);
}

int main(void){

    float h, kg, imc;

    printf("\nInsira seu peso\n");
    scanf("%f", &kg);

    printf("\nInsira sua altura\n");
    scanf("%f", &h);

    imc=calc(kg, h);

    printf("\nSeu imc é %.2f", imc);

    if(imc<=18.5)
        printf("\nSeu peso está abaixo do normal");

    else if(imc<=24.9)
        printf("\nSeu peso é considerado normal");

    else if(imc<=29.9)
        printf("\nSeu peso é considerado sobrepeso");

    else if(imc<=34.9)
        printf("\nSeu peso é considerado obesidade classe I");

    else if(imc<=39.9)
        printf("\nSeu peso é considerado obesidade classe II");

    else if(imc>40)
        printf("\nSeu peso é considerado obesidade classe III");

    return 0;
}