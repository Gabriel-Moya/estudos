#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char sexo, estado_civil;

    printf("Insira a letra inicial do estado civil: ");
    fflush(stdin);
    scanf("%c", &estado_civil);

    printf("Insira a letra inicial do sexo (m ou f): ");
    fflush(stdin);
    scanf("%c", &sexo);

    if (sexo=='m')
        switch(estado_civil){
            case 'c':printf("Casado\n");break;
            case 's':printf("Solteiro\n");break;
            case 'v':printf("Viúvo\n");break;
            case 'd':printf("Divorciado\n");break;
        }

    else
        switch(estado_civil){
            case 'c':printf("Casada\n");break;
            case 's':printf("Solteira\n");break;
            case 'v':printf("Viúva\n");break;
            case 'd':printf("Divorciada\n");break;
        }

    system ("pause");

    return 0;
}