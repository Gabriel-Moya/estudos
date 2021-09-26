#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("%s\n", setlocale(LC_ALL, ""));
    printf("Acentuação\n");

    return 0;
}