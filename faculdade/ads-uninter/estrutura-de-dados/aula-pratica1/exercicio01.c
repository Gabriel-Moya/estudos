/*
*
*   Implementar em linguagem de programação C o algoritmo de ordenação:
*       Bubble sort crescente
*       Bubble sort decrescente
*
*   Requisitos:
*   - A ordenação deve ser feita em um vetor de dimensão N (onde N é escolhido pelo usuário)
*   - Preencha o vetor com valores numéricos gerados aleatoriamente
*   - Crie uma função separada para fazer a ordenação
*
*/

#include <stdio.h>
#include <time.h>

void BubbleSort (int vet[]);

#define TAMANHOVETOR 10

int main() {

    int vet[TAMANHOVETOR] = { 0 };
    srand(time(NULL));

    // Inserção de dados
    for (int i = 0; i < TAMANHOVETOR; i++){
        vet[i] = rand() % 100;
    }

    printf("VETOR NAO ORDENADO:\n");
    for (int i = 0; i < TAMANHOVETOR; i++){
        printf("%d\n", vet[i]);
    }

    BubbleSort(vet);

    printf("\nVETOR ORDENADO:\n");
    for (int i = 0; i < TAMANHOVETOR; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}


void BubbleSort (int vet[]) {

    int aux;

    for (int i = 0; i < TAMANHOVETOR; i++){
        for (int j = 0; j < (TAMANHOVETOR - 1); j++){
            // Bubble sort CRESCENTE | Para bubble sort DECRESCENTE, basta inverter o sinal de > para < dentro do if
            if(vet[j] > vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

}