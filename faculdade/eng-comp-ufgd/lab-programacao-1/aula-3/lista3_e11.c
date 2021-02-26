#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    float n1, n2, n3, n4, n5, m, maior, menor;

    printf("Insira as 5 notas dos alunos\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    m=(n1+n2+n3+n4+n5)/5;

    if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
        maior=n1;
    else if (n2>n1 && n2>n3 && n2>n4 && n2>n5)
        maior=n2;
    else if (n3>n1 && n3>n2 && n3>n4 && n3>n5)
        maior=n3;
    else if (n4>n1 && n4>n2 && n4>n3 && n4>n5)
        maior=n4;
    else
        maior=n5;

    if(n1<n2 && n1<n3 && n1<n4 && n1<n5)
        menor=n1;
    else if (n2<n1 && n2<n3 && n2<n4 && n2<n5)
        menor=n2;
    else if (n3<n1 && n3<n2 && n3<n4 && n3<n5)
        menor=n3;
    else if (n4<n1 && n4<n2 && n4<n3 && n4<n5)
        menor=n4;
    else
        menor=n5;

    printf("A média entre os 5 é: %.2f\nA maior nota é: %.2f\nA menor nota é: %.2f", m, maior, menor);

    return 0;
}
