#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maior(int, int);


int main()
{
    int a, b;
    setlocale(LC_ALL, "");
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    printf("\nO maior é %d.", maior(a,b));

    return 0;
}

int maior(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
