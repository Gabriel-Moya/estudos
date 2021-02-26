#include <stdio.h>
//structs
int main()
{
    struct aluno {
        char nome[50];
        int rga, cpf;
        float ida;
    };

    struct aluno Aluno1;
    Aluno1.rga = 2019;
    Aluno1.cpf = 4432;
    Aluno1.ida = 0.0;

    scanf("%s", &Aluno1.nome);

    printf("%s - %d - %i - %.2f\n",Aluno1.nome,Aluno1.cpf,Aluno1.rga,Aluno1.ida);

    return 0;
}


typedef struct {
    char nome[50];
    int rga, cpf;
    float ida;
} Aluno;
