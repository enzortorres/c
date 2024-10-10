// #include <stdio.h> //! EXERCÍCIO 1
// #include <stdlib.h> //? MÉTODO 1 ( UTILIZANDO FUNCTIONS )

// int somaArray(int *array, int tamanho);

// int main(void) {
//     int tamanho = 0;
//     printf("Digite o tamanho da array: ");
//     scanf("%d", &tamanho);

//     int *array = (int *) malloc (tamanho * sizeof(int));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do valor: ",i+1);
//         scanf("%d", &array[i]);
//     }

//     int soma = somaArray(array, tamanho);
//     printf("A soma dos valores digitados eh: %d", soma);
//     free(array);

//     return 0;
// }

// int somaArray(int *array, int tamanho) {
//     int soma = 0;
//     for (int i = 0; i < tamanho; i++) {
//         soma += *(array + i);
//     }
//     return soma;
// }

// #include <stdio.h> //? MÉTODO 2 (NÃO UTILIZANDO FUNCTIONS)
// #include <stdlib.h>

// int main(void) { //
//     int tamanho = 0, soma = 0;
//     printf("Digite o tamanho da array: ");
//     scanf("%d", &tamanho);

//     int *array = (int *) malloc(tamanho * sizeof(int));
//     if(array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     } 
    
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do valor do array: ",i+1);
//         scanf("%d", &array[i]);
//         soma += array[i];
//     }

//     printf("A soma dos valores da array eh: %d", soma);
//     free(array);
//     return 0;
// }




// #include <stdio.h> //! EXERCÍCIO 2 
// #include <stdlib.h> //? MÉTODO 1 ( UTILIZANDO FUNCTIONS )

// int* copyArray(int *array, int *arrayCopy, int size);

// int main(void) {
//     int size = 0;
//     printf("Digite o tamanho da array: ");
//     scanf("%d", &size);

//     int *array = (int *) malloc (size * sizeof(int));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
    
//     }
//     int *arrayCopy = (int *) malloc (size * sizeof(int));
//     if (arrayCopy == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < size; i++) {
//         printf("Digite o %do valor da array: ",i+1);
//         scanf("%d", &array[i]);
//     }

//     copyArray(array, arrayCopy, size);
//     printf("\nArray principal:\n");
//     for(int i = 0; i < size; i++) {
//         printf("[%d]", array[i]);
//     }
//     printf("\n");
//     printf("Array copia:\n");
//     for(int i = 0; i < size; i++) {
//         printf("[%d]", arrayCopy[i]);
//     }
//     printf("\n");

//     free(array);
//     free(arrayCopy);
//     return 0;
// }

// int* copyArray(int *array, int *arrayCopy, int size) {
//     for (int i = 0; i < size; i++) {
//         *(arrayCopy + i) = *(array + i);
//     }
//     return arrayCopy;
// }

// #include <stdio.h> //? MÉTODO 2 ( NÃO UTILIZANDO FUNCTIONS )
// #include <stdlib.h> 

// int main(void) {
//     int size = 0;
//     printf("Digite o tamanho da array: ");
//     scanf("%d", &size);

//     int *array = (int *) malloc (size * sizeof(int));

//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     int *arrayCopy = (int *) malloc (size * sizeof(int));

//     if (arrayCopy == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < size; i++) {
//         printf("Digite o %do valor da array: ", i+1);
//         scanf("%d", &array[i]);
//         arrayCopy[i] = array[i];
//     }
//     printf("\n\nArray principal:\n");
//     for (int i = 0; i < size; i++) {
//         printf("[%d]", array[i]);
//     }
//     printf("\n");
//     printf("Array copia:\n");
//     for (int i = 0; i < size; i++) {
//         printf("[%d]", arrayCopy[i]);
//     }

//     printf("\n");
//     free(array);
//     free(arrayCopy);
//     return 0;
// }


// #include <stdio.h> //! EXERCÍCIO 3 
// #include <stdlib.h> //? MÉTODO 1 ( UTILIZANDO FUNCTIONS )

// void removerElemento(int *array, int *tamanho, int removedor);

// int main(void) {
//     int tamanho = 5, removedor = 0;
//     int *array = (int *) malloc (tamanho * sizeof(int));

//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do valor: ",i+1);
//         scanf("%d", &array[i]);
//     }

//     printf("Array original:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%d]", array[i]);
//     }

//     printf("\nDigite um valor para eliminar do array: ");
//     scanf("%d", &removedor);

//     removerElemento(array, &tamanho, removedor);
    
//     printf("Array pos remocao:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%d]", array[i]);
//     }
//     return 0;
// }

// void removerElemento(int *array, int *tamanho, int removedor) {
//     int pos = 0;

//     for (pos = 0; pos < *tamanho; pos++) {
//         if (*(array + pos) == removedor) {
//             break;
//         }
//     }
//     if (pos == *tamanho) {
//         printf("Numero nao encontrado!\n");
//     } else {
//         *tamanho -= 1;
//         for (int i = pos; i < *tamanho; i++) {
//             *(array + i) = *(array + i + 1);
//         }
//         array = (int *) realloc (array, *tamanho * sizeof(int));
//         if (array == NULL) {
//             printf("ERRO! Memoria insuficiente!\n");
//             return NULL;
//         }
//     }
// }

// #include <stdio.h> //! EXERCÍCIO 3 
// #include <stdlib.h> //? MÉTODO 2 ( NÃO UTILIZANDO FUNCTIONS )

// int main(void) {
//     int tamanho = 0, removedor = 0;

//     printf("Digite o tamanho da array: ");
//     scanf("%d", &tamanho);

//     int *array = (int *) malloc (tamanho * sizeof(int));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do valor: ", i+1);
//         scanf("%d", &array[i]);
//     }

//     printf("Array principal:\n");
//         for(int i = 0; i < tamanho; i++) {
//             printf("[%d]", array[i]);
//     }

//     printf("\nDigite um valor para remover da array: ");
//     scanf("%d", &removedor);

//     int pos = 0;

//     for (pos = 0; pos < tamanho; pos++) {
//         if (array[pos] == removedor) {
//             break;
//         };
//     }

//     for (int i = pos; i < tamanho; i++) {
//         array[i] = array[i+1];
//     }

//     tamanho--;

//     array = (int *) realloc (array, tamanho * sizeof(int));

//     printf("Array pos remocao:\n");
//     for(int i = 0; i < tamanho; i++) {
//         printf("[%d]", array[i]);
//     }
//     return 0;
// }




// #include <stdio.h> //! EXERCÍCIO 4
// #include <stdlib.h> //? MÉTODO 1 ( UTILIZANDO FUNCTION )

// void escalarMatriz(int **array, int escalar, int tamanho);

// int main(void) {
//     int tamanho = 0, escalar = 0;
//     printf("Digite o tamanho da matriz (linha e coluna): ");
//     scanf("%d", &tamanho);

//     int **matriz = (int **) malloc (tamanho * sizeof(int *));
//     if (matriz == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < tamanho; i++) {
//         matriz[i] = (int *) malloc (tamanho * sizeof(int));
//         if (matriz[i] == NULL) {
//             printf("ERRO! Memoria insuficiente!\n");
//             return 1;
//         }
//     }

//     for (int i = 0; i < tamanho; i++) {
//         for (int j = 0; j < tamanho; j++) {
//             printf("Digite o valor da %d coluna da linha %d: ",j+1, i+1);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     printf("Digite um valor para a escalar: ");
//     scanf("%d", &escalar);
//     escalarMatriz(matriz, escalar, tamanho);

//     for (int i = 0; i < tamanho; i++) {
//         for (int j = 0; j < tamanho; j++) {
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// void escalarMatriz(int **array, int escalar, int tamanho) {
//     for (int i = 0; i < tamanho; i++) {
//         for (int j = 0; j < tamanho; j++) {
//             *(*(array + i) + j) *= escalar;
//         }
//     }
// }


#include <stdio.h> //? MÉTODO 2 ( NÃO UTILIZANDO FUNCTION )
#include <stdlib.h> 

int main(void) {
    int tamanho = 0, escalar = 0;
    printf("Digite o tamanho da matriz (linha e coluna): ");
    scanf("%d", &tamanho);

    int **matriz = (int **) malloc (tamanho * sizeof(int *));
    if (matriz == NULL) {
        printf("ERRO! Memoria insuficiente!\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        matriz[i] = (int *) malloc (tamanho * sizeof(int));
        if (matriz[i] == NULL) {
            printf("ERRO! Memoria insuficiente!\n");
            return 1;
        }
    }

    int **matrizResultante = (int **) malloc (tamanho * sizeof(int *));
    if (matrizResultante == NULL) {
        printf("ERRO! Memoria insuficiente!\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        matrizResultante[i] = (int *) malloc (tamanho * sizeof(int));
        if (matrizResultante[i] == NULL) {
            printf("ERRO! Memoria insuficiente!\n");
            return 1;
        }
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite o valor da %d coluna da linha %d: ",j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor para a escalar: ");
    scanf("%d", &escalar);

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matrizResultante[i][j] = matriz[i][j] * escalar;
        }
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("[%d]", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
