#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int func_crivo(int n, int vetor[])
{
     int i,j;

    /* Inicializa o crivo                      */
      for (i = 2; i <= n; i++)
         vetor[i] = 1;

      i = 2;
      while (i * i <= n)
      {
        /* Marca os multiplos de i.                */
        for (j=i+1; j<=n; j++)
          if (vetor[j]!=0 && j % i ==0)
            vetor[j] = 0;

        /* Pula nao primos ate proximo primo.      */
        for (j = i + 1; vetor[j] == 0 && j <= n; j++);
        i = j;
      }
}


main ()
{
      int vetor[100000],i,j,n;

      printf("Digite o limite superior: ");
      scanf("%d", &n);

      func_crivo(n,vetor);

      /* Impressao dos primos. */
      for (i = 2; i <= n; i++)
        if (vetor[i] != 0)
          printf ("%d ", i);

      return 0;
}
