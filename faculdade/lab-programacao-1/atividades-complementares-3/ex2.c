#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main ()
{
    setlocale(LC_ALL, "");

    char x;

    printf("Digite um caractere: ");
    scanf("%c", &x);

    if(isdigit(x))
        printf("É um número.\n");

    else
        switch (x)
        {
        case 'a': printf("É uma vogal\n");break;
        case 'e': printf("É uma vogal\n");break;
        case 'i': printf("É uma vogal\n");break;
        case 'o': printf("É uma vogal\n");break;
        case 'u': printf("É uma vogal\n");break;
        default: printf("Outro valor.\n");
        }

    system ("pause");

    return 0;
}