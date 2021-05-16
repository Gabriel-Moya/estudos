#include <stdio.h>

void calc_soma(int *mat_A, int *mat_B, int *mat_C);

int main(){

    int mat_A[4][4], mat_B[4][4], mat_C[4][4];

    // Laço para encerrar quando valor digitado for negativo
    while(1){

        printf("Digite um valor negativo para encerrar a execução");

        // Captura matriz A
        printf("Preencha a matriz A\n");
        for (int i = 0; i < 4; i++){
            for (int j = 0; j<4; j++){
                printf("coluna %d linha %d: ", i, j);
                scanf("%d", &mat_A[i][j]);

                // Encerra em caso de valor negativo
                if(mat_A[i][j] < 0) {
                    printf("Execucao finalizada...");
                    return 0;
                }
            }
        }

        // Captura matriz B
        printf("Preencha a matriz B\n");
        for (int i = 0; i < 4; i++){
            for (int j = 0; j<4; j++){
                printf("coluna %d linha %d: ", i, j);
                scanf("%d", &mat_B[i][j]);

                // Encerra em caso de valor negativo
                if(mat_B[i][j] < 0) {
                    printf("Execucao finalizada...");
                    return 0;
                }
            }
        }

        // Exibe matriz A
        printf("MATRIZ A\n");
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                printf("%2d ", mat_A[i][j]);
            }
            printf("\n");
        }

        // Exibe matriz B
        printf("\nMATRIZ B\n");
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                printf("%2d ", mat_B[i][j]);
            }
            printf("\n");
        }

        // Chamada do procedimento para soma de matrizes
        calc_soma(&mat_A, &mat_B, &mat_C);

    }

    return 0;
}

// Procedimento para soma e exibição da matriz C
void calc_soma(int *mat_A, int *mat_B, int *mat_C){

    printf("\nMATRIZ C");
    for (int i = 0; i < 16; i++){
        mat_C[i] = mat_A[i] + mat_B[i];
        if(i % 4 == 0){
            printf("\n");
        }
        printf("%2d ", mat_C[i]);
    }

    return;
}