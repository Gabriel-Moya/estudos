/*----------------------------------------*/
/*Exercício 1059 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1059*/
/*----------------------------------------*/

#include <stdio.h>

int main () {

    int i=2;

    while(i<=100){
        if (i%2==0)
        {
            printf("%d\n", i);
            i+=2;
        }
    }

    return 0;
}