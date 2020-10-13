#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*receber uma medida em pés e converter para metros*/

int main(){

    setlocale(LC_ALL,"");

    float mp, mm;

    printf("\nInsira uma medida em pés\n");
    scanf("%f", &mp);

    mm = mp/3.2808;

    printf("\nA medida em metros será de: %.4f", mm);

    return 0;
}