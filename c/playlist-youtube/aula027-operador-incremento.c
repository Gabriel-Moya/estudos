#include <stdio.h>

int main() {

    int resultado, contador = 10;

    // Sinônimas
    contador++;
    contador += 1;
    contador = contador +1;

    printf("Valor: %d\n", contador++);
    printf("Valor: %d\n", contador);

    resultado = contador++;
    printf("Valor: %d\n", resultado);
    resultado = ++contador;
    printf("Valor: %d\n", resultado);

    return 0;
}