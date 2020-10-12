/*----------------------------------------*/
/*Exercício 1040 do URI*/
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1040*/
/*----------------------------------------*/

#include <stdio.h>

int main() {

    float n1, n2, n3, n4, notaExame=-1, media, mediaFinal;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);

    if (media>=7) {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    } else if (media<5) {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    } else if (media>=5 && media<7) {
        scanf("%f", &notaExame);
    }
    
    if (media>=5 && media<7) {
        mediaFinal = (notaExame+media)/2;
        if (mediaFinal>=5) {
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", notaExame);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        } else if (mediaFinal<5) {
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", notaExame);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
    }

    return 0;
}