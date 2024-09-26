// #include <stdio.h> //! EXERCÍCIO 1
// #include <stdlib.h>

// int main(void) {
//     int tamanho = 0; 
//     float soma = 0, media = 0;
//     float *array;

//     printf("Digite o tamanho do array: ");
//     scanf("%d", &tamanho);

//     array = (float *) malloc(tamanho * sizeof(float));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%f", &array[i]);
//         soma += array[i];
//     }

//     media = soma / tamanho;
//     printf("Array:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%.1f]", array[i]);
//     }
//     printf("\nMedia: %.2f", media);

//     free(array);
//     printf("\n");
//     return 0;
// }



#include <stdio.h> //! EXERCÍCIO 2
#include <stdlib.h>

int main(void) {
    int linha = 3, coluna = 2;
    int maior = 0, menor = 0;
    int **matriz = (int **) malloc(linha * sizeof(int *));
    if (matriz == NULL) {
        printf("ERRO! Memoria insuficiente!\n");
        return 1;
    }

    for (int i = 0; i < linha; i++) {
        matriz[i] = (int *) malloc(coluna * sizeof(int));
        if (matriz[i] == NULL) {
            printf("ERRO! Memoria insuficiente!\n");
            return 1;
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0 ; j < coluna; j++) {
            printf("Digite o valor da %d coluna da %d linha: ", j+1, i+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor || (i == 0 && j == 0)) {
                menor = matriz[i][j];
            }
        }
        printf("\n");
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}



// #include <stdio.h> //! EXERCÍCIO 3
// #include <stdlib.h>

// char* preencheAlfabeto(int tamanho);

// int main(void) {
//     int tamanho = 10;
//     char *letras;

//     letras = preencheAlfabeto(tamanho);
//     if (letras == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for(int i = 0; i < tamanho; i++) {
//         printf("[%c]", letras[i]);
//     }

//     free(letras);
//     printf("\n");
//     return 0;
// }

// char* preencheAlfabeto(int tamanho) {
//     char *vetor = (char *) malloc(tamanho);
//     if (vetor == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return NULL;
//     }
//     for (int i = 1; i < tamanho; i++) {
//         *(vetor + i) = 'a' + i;
//     }

//     return vetor;
// }