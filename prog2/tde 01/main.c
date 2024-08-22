// #include <stdio.h> // EXERCÍCIO 1

// int main(void) {
//     int matrizA[2][4];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//             matrizA[i][j] *= 2;
//         }
//     }

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("[ %d ]", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 2

// int main(void) {
//     int matrizA[3][3];
//     int matrizB[3][3];
//     int matrizResultante[3][3];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz A:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz B:", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             matrizResultante[i][j] = (3 * matrizA[i][j]) - matrizB[i][j];
//         }
//     }

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 3

// int main(void) {
//     int matrizA[2][5];
//     int matrizResultante[5][2];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 5; j++) {
//             printf("Valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 2; j++) {
//             matrizResultante[i][j] = matrizA[j][i];
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("[ %d ]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 4

// int main(void) {
//     int matrizA[4][2], matrizB[2][4], matrizResultante[4][4] = {0};
    
//     for (int i = 0; i < 4; i++) { // Pega os valores da matriz A
//         for (int j = 0; j < 2; j++)  {
//             printf("Digite o valor da %d linha e %d coluna da matrizA: ", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++) { // Pega os valores da matriz B
//         for (int j = 0; j < 4; j++)  {
//             printf("Digite o valor da %d linha e %d coluna da matrizB: ", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++) { // Faz o produto da matriz A com a matriz B
//         for (int j = 0; j < 4; j++) {
//             for (int k = 0; k < 2; k++) {
//                 matrizResultante[i][j] += matrizA[i][k] * matrizB[k][j];
//             }
//         }
//     }

//     printf("Matriz A:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz A
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matriz B:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz B
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matriz Resultante:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz resultante
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 5

// int main(void) {
//     // [0,0] [0,1] [0,2]
//     // [1,0] [1,1] [1,2]
//     // [2,0] [2,1] [2,2]
//     // [*] [0,1] [0,2]
//     // [*] [*] [1,2]
//     // [*] [*] [*]
    
//     int matriz[3][3];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i == 0 && j > 0) {
//                 printf("[ %d ]", matriz[i][j]);
//             } else if (i == 1 && j == 2) {
//                 printf("[ %d ]", matriz[i][j]);
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     return 0;  
// }

// #include <stdio.h> // EXERCÍCIO 6

// int main(void) {
//     // [0,0] [0,1] [0,2] [0,3]
//     // [1,0] [1,1] [1,2] [1,3]
//     // [2,0] [2,1] [2,2] [2,3]
//     // [3,0] [3,1] [3,2] [3,3]

//     // [soma] [0,1] [0,2] [0,3]
//     // [soma] [soma] [1,2] [1,3]
//     // [soma] [soma] [soma] [2,3]
//     // [soma] [soma] [soma] [soma]

//     int matriz[4][4], soma = 0;

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < i+1; j++) {
//             soma += matriz[i][j];
//         }
//     }

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nTriangulo inferior da diagonal principal, incluindo a diagonal principal:\n\n");
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < i+1; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSoma do triangulo inferior da diagonal principal, incluindo a diagonal principal: %d", soma);

    
//     return 0;
// }

#include <stdio.h>