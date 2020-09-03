# include <stdio.h>

int main () {

    int desloc, i=0;
    char palavra[30], encrypt;

    printf("Digite a quantidade de deslocamento:\n");
    scanf("%d", &desloc);

    system("cls");

    printf("Digite a palavra que quer criptografar (Limite de 30 caracteres):\n");
    scanf("%s", &palavra);

    for(i=0;i<strlen(palavra);i++) {
        int encrypt=(int)palavra[i]+desloc;
        if (encrypt>122)
            encrypt -= 26;
        printf("%c",(char)encrypt);
    }

    return 0;
}