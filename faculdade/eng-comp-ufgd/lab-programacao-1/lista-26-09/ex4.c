#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Protótipo
int tabuada(int);

int main ()
{
    setlocale(LC_ALL, "");
    int x;
    printf("Insira um valor entre 1 e 9: ");
    scanf("%d", &x);

    tabuada(x);

    return 0;
}

int tabuada(int y)
{
    int i;
    printf("A tabuada de %d é:\n", y);
    for(i=1;i<10;i++){
        printf("\n%d X %d = %d", y, i, y*i);
    }
}
