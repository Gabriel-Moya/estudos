#include <stdio.h>
/*
 primos de 1 ate n
*/

int main(){
	int n, i, j, cont;
	printf("\n Numero inteiro ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
        cont = 0;
        for(j=1; j<=i; j++)
            if(i%j == 0)
                cont++;
            if(cont == 2 || i == 1)//deve ser multiplo de 1 e dele mesmo
                printf(" %d", i);
	}
	return 0;
}
