/*
*
*   Implementar em linguagem de programação C o algoritmo de ordenação:
*       Quick sort crescente
*       Quick sort decrescente
*
*   Requisitos:
*   - A ordenação deve ser feita em um vetor de dimensão N (onde N é escolhido pelo usuário)
*   - Preencha o vetor com valores numéricos gerados aleatoriamente
*   - Crie uma função separada para fazer a ordenação
*
*/

#include <stdio.h>
#include <time.h>

void QuickSort (int vet[], int p, int u);
int particao(int vet[], int p, int u);
void troca (int vet[], int i, int j);

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

    QuickSort(vet, 0, TAMANHOVETOR - 1);

    printf("\nVETOR ORDENADO:\n");
    for (int i = 0; i < TAMANHOVETOR; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}


void QuickSort (int vet[], int p, int u) {

    int m;

    if(p < u) {
        m = particao(vet, p, u);
        QuickSort(vet, p, m); // Esquerdo
        QuickSort(vet, m + 1, u); // Direito
    }

}

int particao(int vet[], int p, int u) {
    
    int pivo, pivo_pos, i, j;
    
    pivo_pos = (p + u) / 2;
    pivo = vet[pivo_pos];

    i = p - 1;
    j = u + 1;

    // Ordenação CRESCENTE
    while (i < j) {
        // TESTA LADO DIREITO
        do {
            j--;
        } while (vet[j] > pivo);

        // TESTA LADO ESQUERDO
        do {
            i++;
        } while (vet[i] < pivo);

        if(i < j){
            troca(vet, i, j);
        }

    }

    /*// Ordenação DECRESCENTE
    while (i < j) {
        // TESTA LADO DIREITO
        do {
            j--;
        } while (vet[j] < pivo);

        // TESTA LADO ESQUERDO
        do {
            i++;
        } while (vet[i] > pivo);

        if(i < j){
            troca(vet, i, j);
        }

    }*/

    return j;

}

void troca (int vet[], int i, int j) {
    int aux;

    aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}
