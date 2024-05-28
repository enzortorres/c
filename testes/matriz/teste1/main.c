// // #include <stdio.h> 

// // int main (void) {
// //   int numbers[3][3];
// //   for (int i = 3; i > 0; i--) {
// //     for (int j = 3; j > 0; j--) {
// //       printf("Digite o valor da %d linha e %d coluna: ", i+1, j+1);
// //       scanf("%d", &numbers[i][j]);
// //     }
// //   }
// //   printf("\n\n");
// //   for (int i = 0; i < 3; i++) {
// //     for (int j = 0; j < 3; j++) {
// //       printf("[%d]", numbers[i][j]);
// //     }
// //     printf("\n");
// //   }
// //   return 0;
// // }

// #include <stdio.h>

// int main (void) {
//   float media = 0, matriz[2][5];
//   int qtd = 0;

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 5; j++) {
//       printf("Digite o valor da %d linha e da %d: ", i+1, j+1);
//       scanf("%f", &matriz[i][j]);
//       media += matriz[i][j];
//       qtd++;
//     }
//   }
//   media = media / qtd;
//   printf("Valores acima da media: ");
//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 5; j++) {
//       if (matriz[i][j] > media) {
//         printf("%.2f ", matriz[i][j]);  
//       }
//     }
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(void) {
//   int matrizA[3][3], matrizB[3][3], matrizC[3][3];
//   for (int i = 0; i < 3; i++) {
//     printf("\nLinha %d da matriz A\n\n", i+1);
//     for (int j = 0; j < 3; j++) {
//       printf("Digite o numero da %d linha e da %d coluna da matriz A: ", i+1, j+1);
//       scanf("%d", &matrizA[i][j]);
//     }
//   }
//   printf("\n");
//   for (int i = 0; i < 3; i++) {
//     printf("\nLinha %d da matriz B\n\n", i+1);
//     for (int j = 0; j < 3; j++) {
//       printf("Digite o numero da %d linha e da %d coluna da matriz B: ", i+1, j+1);
//       scanf("%d", &matrizB[i][j]);
//     }
//   }
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
//     }
//   }
//   printf("\n");
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       printf("[%d]", matrizA[i][j]);
//     }
//     printf("\n");
//   }
//   printf("    +\n");
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       printf("[%d]", matrizB[i][j]);
//     }
//     printf("\n");
//   }
//   printf("    =\n");
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       printf("[%d]", matrizC[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
#include <stdio.h> 

int main (void) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i < 2) {
                printf("_");
            } else {
                printf(" ");
            }
            if ((j % 2 == 0 || j != 0) && j < 2) {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}