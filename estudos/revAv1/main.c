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
//         printf("[%d]", array[i]);
//     }

//     printf("\n");
//     return 0;
// }
