#include <stdio.h>

int main() {

    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi;
    printf("Valor de A: %d\n", a);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (float)a / b);

    return 0;
}