#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x, v[10], maior, menor, posmaior, posmenor;

    for(i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    system("cls");
    printf("O vetor digitado foi: ");
    for(i=0;i<10;i++)
        printf(" %d", v[i]);

    for(i=0;i<10;i++){
        if(v[i]>maior)
            maior=v[i];
            posmaior=i;
        if(v[i]<menor)
            menor=v[i];
            posmenor=i;
    }

    printf("\nMaior: %d e está na posição %d.\n", maior, posmaior);
    printf("\nMenor: %d e está na posição %d.\n", menor, posmenor);

    return 0;
}
