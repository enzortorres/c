// #include <stdio.h>

// int main(void) {
//     int NUM = 6;
//     float matriz[NUM][NUM], somaTrianguloInferior = 0;
//     float somaPrincipal = 0, mediaPrincipal = 0;

//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             // printf("Digite o valor da %d linha e %d coluna: ", i+1, j+1);
//             // scanf("%f", &matriz[i][j]);
//             matriz[i][j] = 8;
//         }
//         // printf("\n");
//     }

//     printf("\nMatriz original:\n");
//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             printf("[ %.0f ]", matriz[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("\nDiagonal principal: \n");
//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             if (i == j) {
//                 printf("[ %.0f ]", matriz[i][j]);
//                 somaPrincipal += matriz[i][j];
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }
//     mediaPrincipal = somaPrincipal / NUM;
//     printf("\nDiagonal secundária: \n");

//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             if (i + j == (NUM - 1)) {
//                 printf("[ %.0f ]", matriz[i][j]);
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     printf("\nTriangulo superior da diagonal principal: \n");
//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             if (j > i) {
//                 printf("[ %.0f ]", matriz[i][j]);
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     printf("\nTriangulo inferior da diagonal secundaria: \n");
//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             if (i + j >= NUM) {
//                 printf("[ %.0f ]", matriz[i][j]);
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < NUM; i++) {
//         for (int j = 0; j < NUM; j++) {
//             if (i + j >= NUM) {
//                 somaTrianguloInferior += matriz[i][j];
//             }
//         }
//     }


//     printf("\nMedia dos valores da diagonal principal: %.2f\n", mediaPrincipal);
//     printf("Soma dos elementos do triangulo inferior da diagonal secundaria: %.2f\n", somaTrianguloInferior);
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int matriz[2][4];
    int matrizTransposta[4][2];
    

    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da %d linha e %d coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            matrizTransposta[j][i] = matriz[i][j];
        }
        printf("\n");
    }
    printf("Matriz original:\n");
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[ %d ]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatriz transposta:\n");
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[ %d ]", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}