#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//calcule a quantidade de ferraduras necess�rias para todos os cavalos de um haras

int main (){

    setlocale(LC_ALL, "");

    int cvls, total;

    printf("Insira quantos cavalos foram comprados: ");
    scanf("%d", &cvls);

    total = cvls*4;

    printf("\nSer� necess�rio %d ferraduras\n", total);

    system("pause");

    return 0;
}
