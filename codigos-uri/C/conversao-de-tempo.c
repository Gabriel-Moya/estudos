/*----------------------------------------*/
/*Exercício 1019 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1019*/
/*----------------------------------------*/

# include <stdio.h>

int main() {
    int inSeg, outHoras, outMin, outSeg;

    // Entrada dos dados
    scanf("%d", &inSeg);

    // Processamento dos dados
    // outHoras = primeira divisão transforma em minutos, e os minutos transforma em horas
    outHoras = (inSeg/60)/60;
    // outMin = primeira divisão transforma em minutos, e o resto da divisão tira as horas (Que já calculamos)
    outMin = (inSeg/60)%60;
    // outSeg = O resto da divisão dos próprios segundos, vai restar os segundos
    outSeg = inSeg%60;
    
    // Saída dos dados
    printf("%d:%d:%d\n", outHoras, outMin, outSeg);

    return 0;
}