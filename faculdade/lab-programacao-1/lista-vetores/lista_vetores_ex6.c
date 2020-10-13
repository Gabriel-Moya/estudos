#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x, a[10], achei=0;

    for(i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &a[i]);
    }

    printf("Digite um valor para X: ");
    scanf("\n%d", &x);

    system("cls");
    for(i=0;i<10;i++)
        if(a[i]==x){
            achei=1;
            printf("\nAchei. %d", a[i]);
            break;
        }

     if(achei==0)
        printf("\nNão achei.");

    return 0;
}
