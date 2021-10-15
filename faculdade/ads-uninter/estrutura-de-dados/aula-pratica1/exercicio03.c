/*
*
*   Implementar em linguagem de programação C os algoritmos de busca:
*       Sequencial
*       Binária
*
*   Requisitos:
*   - Crie uma função separada para cada algoritmo de busca
*   - Mostre na tela quantas iterações foram necessárias para buscar um valor em cada um dos métodos
*
*/

#include <stdio.h>
#include <time.h>

int BuscaSequencial(int vet[], int buscado);
void QuickSort (int vet[], int p, int u);
int particao(int vet[], int p, int u);
void troca (int vet[], int i, int j);
int BuscaBinaria(int tamanho, int* v, int buscado);

#define TAMANHOVETOR 10

int main() {

    int vet[TAMANHOVETOR] = { 0 };
    int buscado, achou;
    srand(time(NULL));

    // Inserção de dados
    for (int i = 0; i < TAMANHOVETOR; i++){
        vet[i] = rand() % 100;
    }

    printf("VETOR GERADO: ");
    for (int i = 0; i < TAMANHOVETOR; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\nSelecione um valor para buscar: ");
    scanf("%d", &buscado);

    // ========== BUSCA SEQUENCIAL ==========
    achou = BuscaSequencial(vet, buscado);
    printf("\nBusca sequencial:\n");
    if (achou == -1){
        printf("Valor nao encontrado\n");
    } else {
        printf("Valor encontrado na posicao: %d.\n\n", achou);
    }

    // ========== ORDENACAO PARA BUSCA ==========
    QuickSort(vet, 0, TAMANHOVETOR - 1);
    printf("VETOR ORDENADO: ");
    for (int i = 0; i < TAMANHOVETOR; i++){
        printf("%d ", vet[i]);
    }

    // ========== BUSCA BINARIA ==========
    achou = BuscaBinaria(TAMANHOVETOR, vet, buscado);
    printf("\n\nBusca binaria (com vetor ordenado):\n");
    if (achou == -1){
        printf("Valor nao encontrado\n");
    } else {
        printf("Valor encontrado na posicao: %d.\n", achou);
    }

    return 0;
}

int BuscaSequencial(int vet[], int buscado) {

    int achou, i;
    achou = 0;
    i = 0;

    while ( (i <= TAMANHOVETOR) && (achou == 0) ){

        if (vet[i] == buscado){
            achou = 1;
        } else {
            i++;
        }

    }

    if (achou == 0){
        return -1;
    } else {
        return i+1;
    }
    
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

    return j;

}

void troca (int vet[], int i, int j) {
    int aux;

    aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int BuscaBinaria(int tamanho, int* v, int buscado) {

    int init = 0;
    int final = tamanho - 1;
    int meio;

    while(init <= final) {

        meio = (init + final)/2;

        if(buscado < v[meio]) {
            final = meio - 1;
        } else if (buscado > v[meio]) {
            init = meio + 1;
        } else {
            return meio+1;
        }

    }

    return -1;

}
