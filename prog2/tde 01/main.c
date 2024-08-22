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

#include <stdio.h> // EXERCÍCIO 4

int main(void) {
    int matrizA[4][2], matrizB[2][4];
    return 0;
}