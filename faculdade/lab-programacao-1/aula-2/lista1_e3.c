#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Leia um caractere do teclado e exiba para o usu�rio

int main (){

    setlocale(LC_ALL, "");

    char a;

    printf("Insira um caractere: ");
    scanf("%c", &a);

    fflush(stdin);

    printf("O caractere que voc� digitou �: %c\n", a);


    system("pause");

    return 0;

}
