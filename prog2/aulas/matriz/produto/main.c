// #include <stdio.h> // PRODUTO ENTRE MATRIZES

// int main(void) {
//     int matrizA[3][2];
//     int matrizB[2][3];
//     int matrizC[3][3] = {0};

//     for(int i = 0; i < 3; i++) { // Pegar os valores da Matriz A
//         for(int j = 0; j < 2; j++) {
//             printf("Valor da %d linha e %d coluna da matriz A: ", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < 2; i++) { // Pegar os valores da Matriz B
//         for(int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz B: ", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++) { // Produto da matriz A com a matriz B
//         for(int j = 0; j < 3; j++) {
//             for(int k = 0; k < 2; k++) {
//                 matrizC[i][j] = matrizC[i][j] + matrizA[i][k] * matrizB[k][j];
//             }
//         }
//     }

//     for(int i = 0; i < 3; i++) { // Printar a matriz resultante do produto
//         for(int j = 0; j < 3; j++) {
//             printf("[ %d ]", matrizC[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// } 

#include <stdio.h>

int main(void) {
    int matriz[3][2];
    int matrizResultante[3][2];
    int escalar = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Valor da %d linha e %d coluna da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("Qual o valor do escalar? ");
    scanf("%d", &escalar);
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matrizResultante[i][j] = matriz[i][j] * escalar;
        }
    }
    printf("Matriz resultante:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[ %d ]", matrizResultante[i][j]);
        }
        printf("\n");
    }
    return 0;
}