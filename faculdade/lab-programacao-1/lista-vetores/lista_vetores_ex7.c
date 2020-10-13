#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x, v[10], a[10], b[10], c[10], cont=0;

    for(i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    system("cls");
    printf("O vetor digitado foi: ");
    for(i=0;i<10;i++)
        printf(" %d", v[i]);

    printf("\n\nOs números múltiplos de 2 são: ");
    for(i=0;i<10;i++)
        if(v[i]%2==0){
            a[cont]=v[i];
            printf("\n%d", a[cont]);
            cont++;
        }

    cont=0;
    printf("\n\nOs números múltiplos de 5 são: ");
    for(i=0;i<10;i++)
        if(v[i]%5==0){
            b[cont]=v[i];
            printf("\n%d", b[cont]);
            cont++;
        }

    cont=0;
    printf("\n\nOs números múltiplos de 2 e 5 são: ");
    for(i=0;i<10;i++)
        if(v[i]%2==0 && v[i]%5==0){
            c[cont]=v[i];
            printf("\n%d", c[cont]);
            cont++;
        }

    return 0;
}
