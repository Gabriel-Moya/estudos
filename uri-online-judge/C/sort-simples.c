/*----------------------------------------*/
/*Exercício 1042 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1042*/
/*----------------------------------------*/

#include <stdio.h>

#define TAM 3

int main(void) {

  int a, b, c, i, j, aux;
  int vet[TAM];

  scanf("%d %d %d", &a, &b, &c);
  vet[0] = a;
  vet[1] = b;
  vet[2] = c;

  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      if (vet[i] < vet[j]) {
        aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }

  for (i = 0; i < TAM; i++) {
    printf("%d\n", vet[i]);
  }

  printf("\n");
  printf("%d\n%d\n%d\n", a, b, c);

  return 0;
}
