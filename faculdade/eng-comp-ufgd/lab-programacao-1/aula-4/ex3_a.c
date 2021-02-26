#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float M, N1, N2, N3;

    printf("Informe 3 valores reais");
    scanf("%f %f %f", &N1, &N2, &N3);

    M = (N1+N2+N3)/2;

    printf("A média é %.2f. ", M);

    system("pause");

    return 0;
}
