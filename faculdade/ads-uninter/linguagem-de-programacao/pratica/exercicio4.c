#include <stdio.h>

// Função recursiva
int multiplica(int a, int b){

    if(a == 0 || b == 0){
        return 0;
    }
    else if(b == 1){
        return a;
    }

    return a + multiplica(a, --b);
}

int main() {

    int x, y, resultado;

    printf("Digite dois numeros para realizar uma multiplicacao");

    // Captura as informações necessárias
    printf("\nBase: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &y);

    // Chama a função recursiva e armazena o retorno
    resultado = multiplica(x, y);

    // Exibe o resultado da operação
    printf("Resultado: %d", resultado);

    return 0;
}