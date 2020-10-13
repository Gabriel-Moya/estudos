#include <stdio.h>
#include <string.h>
#include "vetaluno.h"

int main()
{
    Aluno lista[MAX];
    int tam = 0;
    int opt;

    inicializar(lista);

    printf("\nDigite 1 para novo, 2 para listar os alunos ou 0 para sair: ");
    scanf("%d",&opt);
    while(opt!=0)
    {
        switch (opt)
        {
            case 1:
                inserir(lista,&tam);
                printf("\nDigite 1 para novo, 2 para listar os alunos ou 0 para sair: ");
                scanf("%d",&opt);
                break;
            
            case 2:
                printf("\nDigite 1 para novo, 2 para listar os alunos ou 0 para sair: ");
                scanf("%d",&opt);
                printf("", imprimirLista());
                break;

            default:
                printf("opção inválida, tente novamente\n");
                printf("\nDigite 1 para novo, 2 para listar os alunos ou 0 para sair: ");
                scanf("%d",&opt);
                break;
        }
    }

    for(;opt!=0;)
    {
        inserir(lista,&tam);
        printf("\nDigite 1 para novo, 2 para listar os alunos ou 0 para sair: ");
        scanf("%d",&opt);
    }

    return 0;
}

Aluno criarAluno(char nome[], int CPF, int RGA, float IDA, Status status)
{
    Aluno novo;
    strcpy(novo.nome,nome);
    novo.CPF = CPF;
    novo.RGA = RGA;
    novo.IDA = IDA;
    novo.status = status;
    return novo;
}

//inicializa o vetor com valores padr�o
void inicializar(Aluno lista[])
{
    int i;
    for (i=0;i<MAX;i++)
    {
        lista[i] = criarAluno("", 0, 0, 0.0, inativo);
    }
}

//insere novo aluno no fim do vetor
void inserir(Aluno lista[], int *tam)
{
    char nome[50];
    int RGA, CPF;
    float IDA=0;
    Status status = ativo;
    printf("Nome: ");
    scanf("%s",nome);
    printf("\nCPF: ");
    scanf("%d",&CPF);
    printf("\nRGA: ");
    scanf("%d",&RGA);
    lista[*tam] = criarAluno(nome,CPF,RGA,IDA,status);
    *tam++;
    
}

void imprimirLista(Aluno lista[], int *tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        Aluno aux = lista[i];
        printf("%s - %d - %d - %.2f - %s\n", lista[i].nome, lista[i].CPF, lista[i].RGA, lista[i].IDA, lista[i].status);
    }
}

#if COMPLETO==1
//remove aluno na posi��o pos
void removerAluno(Aluno lista[], int *tam, int pos);
#endif
