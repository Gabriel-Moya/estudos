#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Leia um caractere do teclado e exiba para o usuário

int main (){

    setlocale(LC_ALL, "");

    char a;

    printf("Insira um caractere: ");
    scanf("%c", &a);

    fflush(stdin);

    printf("O caractere que você digitou é: %c\n", a);


    system("pause");

    return 0;

}
