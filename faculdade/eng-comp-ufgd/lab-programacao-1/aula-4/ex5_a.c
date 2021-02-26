#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float altura, peso;
    char sexo;

    printf("Informe sua altura e sexo (a altura em centímetros, e sexo m ou f) ");
    scanf("%f %c", &altura, &sexo);

    if (sexo=='m')
        peso = altura * 0.95 -95;
    else
        peso = altura * 0.85 -85;

    printf("\nO peso ideal é: %.2f\n", peso);

    system("pause");
    return 0;
}
