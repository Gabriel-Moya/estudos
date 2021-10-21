/*
*
*       https://www.youtube.com/watch?v=lgPgknuUK-s
*
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
    int tamanhoLista;
} Lista;


void inserirInicio(Lista *lista, int valor);
void imprimirLista(Lista *lista);
void inserirFinal(Lista *lista, int valor);

int main() {

    Lista lista;
    int opcao, valor;

    lista.inicio = NULL;
    lista.tamanhoLista = 0;

    do{
        printf("1 - Inserir inicio\n2 - Imprimir lista\n3 - Inserir no final\n0 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;
            case 2:
                imprimirLista(&lista);
                break;
            case 3:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirFinal(&lista, valor);
                break;
            case 0:
                printf("Finalizando...\n");
                break;
            
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 5);

    return 0;
}


void inserirInicio(Lista *lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tamanhoLista++;
}


void inserirFinal(Lista *lista, int valor) {
    No *no, *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;

    if (lista->inicio == NULL){
        lista->inicio = novo;
    } else {
        no = lista->inicio;
        while(no->proximo != NULL) {
            no = no->proximo;
        }
        no->proximo = novo;
    }

    lista->tamanhoLista++;
}


void imprimirLista(Lista *lista) {
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tamanhoLista);
    while(inicio != NULL) {
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}