#ifndef VETOR_ALUNOS_H
#define VETOR_ALUNOS_H
#define COMPLETO 0

#define MAX 100

typedef enum status{ativo,inativo} Status;

typedef struct {
    char nome[50];
    int RGA, CPF;
    float IDA;
    Status status;
} Aluno;

//inicializa o vetor com valores padrão
void inicializar(Aluno lista[]);

//insere novo aluno no fim do vetor
void inserir(Aluno lista[], int *tam);

#if COMPLETO==1
//remove aluno na posição pos
void removerAluno(Aluno lista[], int *tam, int pos);
#endif // COMPLETO

#endif // VETOR_ALUNOS_H
