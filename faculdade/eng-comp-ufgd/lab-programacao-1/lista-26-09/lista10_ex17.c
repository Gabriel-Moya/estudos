#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");

    int v[12], x, y, i;

    for(i=0;i<12;i++){
        printf("Insira 12 n�meros para construir um vetor: ");
        scanf("%d", &v[i]);
    }

    printf("Digite o valor de x e de y para acessar a posi��o no vetor: ");
    scanf("%d %d", &x, &y);

    printf("A soma de %d e %d �: %d\n", v[x], v[y], v[x]+v[y]);

    system("pause");
    return 0;
}
