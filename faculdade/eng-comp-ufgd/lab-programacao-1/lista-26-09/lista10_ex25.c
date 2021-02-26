#include<stdio.h>
#include<stdlib.h>

int main(){

    float notas[10], soma=0, media;
    int alunos=0, i;

    //Captura das notas
    for(i=0;i<10;i++){
        printf("Insira a nota do aluno: ");
        scanf("%f", &notas[i]);
        soma=soma+notas[i];
    }
    system("cls");

    media=soma/10;

    /*
    trecho somente para verificação e visualização
    for(i=0;i<10;i++)
        printf("%f\n", notas[i]);
    */

    for(i=0;i<10;i++)
        if(notas[i]>media)
            alunos++;

    /*
    trecho somente para verificação e visualização
    printf("Soma %f, media %f, alunos %d\n", soma, media, alunos);
    */

    printf("A media da sala foi %.2f\n%d Conseguiram uma nota acima da media geral da sala.\n", media, alunos);


    system("pause");
    return 0;
}
