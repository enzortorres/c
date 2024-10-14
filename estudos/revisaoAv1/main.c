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


// #include <stdio.h> //? MÉTODO 2 ( NÃO UTILIZANDO FUNCTION )
// #include <stdlib.h> 

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

//     int **matrizResultante = (int **) malloc (tamanho * sizeof(int *));
//     if (matrizResultante == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < tamanho; i++) {
//         matrizResultante[i] = (int *) malloc (tamanho * sizeof(int));
//         if (matrizResultante[i] == NULL) {
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

//     for (int i = 0; i < tamanho; i++) {
//         for (int j = 0; j < tamanho; j++) {
//             matrizResultante[i][j] = matriz[i][j] * escalar;
//         }
//     }

//     for (int i = 0; i < tamanho; i++) {
//         for (int j = 0; j < tamanho; j++) {
//             printf("[%d]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h> //! QUESTÃO 1
// #include <stdlib.h>

// int main(void) {
//     int size = 3, qtd = 0;
//     float matriz[size][size], soma = 0, media = 0;

//     for(int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             printf("Digite o valor da %d coluna da %d linha: ", j+1, i+1);
//             scanf("%f", &matriz[i][j]);
//             if (i + j == size - 1) {
//                 soma += matriz[i][j];
//                 qtd++;
//             }
//         }
//         printf("\n");
//     }
//     media = soma / qtd;

//     for(int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if(i + j == size - 1) {
//                 printf("[%.2f]", matriz[i][j]);
//             } else {
//                 printf("[   ]");
//             }
//         }
//         printf("\n");
//     }
//     printf("A media dos valores da diagonal secundaria: %.2f", media);

//     return 0;
// }



// #include <stdio.h> //! QUESTÃO 2

// float maior_peso(float *pesos);

// int main(void) {
//     float pesos[4], maiorPeso = 0;
    
//     for (int i = 0; i < 4; i++) {
//         printf("Digite o %do peso:", i+1);
//         scanf("%f", &pesos[i]);
//     }

//     maiorPeso = maior_peso(pesos);

//     printf("O maior peso encontrado foi: %.2f", maiorPeso);

//     return 0;
// }

// float maior_peso(float *pesos) {
//     float maior = 0;
//     for (int i = 0; i < 4; i++) {
//         if(*(pesos + i) > maior) {
//             maior = (*(pesos + i));
//         }
//     }
//     return maior;
// }



// #include <stdio.h> //! EXERCÍCIO 3

// void contar_palavras(char *frase, int *numPalavras);

// int main(void) {
//     char frase[200];
//     int qtdPalavras = 0;
//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);

//     contar_palavras(frase, &qtdPalavras);

//     printf("Quantidade de palavras da frase: %d", qtdPalavras);
//     return 0;
// }

// void contar_palavras(char *frase, int *numPalavras) {
//     while (*frase != '\0') {
//         if(*frase == ' ' || *frase == '\n') {
//             (*numPalavras)++;
//         }
//         frase++;
//     }
// }



//! EXERCÍCIO 4 

// A memória alocada para um programa pode ser realizada de forma estática, dinâmica ou automática, reservando blocos de memória para armazenamento de dados. Com relação à alocação de memória, é correto afirmar:

// a) As memórias alocadas através da instrução malloc são liberadas automaticamente após o seu uso.
// b) A alocação dinâmica de memória é feita sob demanda do programa, através de instruções como malloc em C.
// c) A alocação dinâmica de memória é realizada em tempo de compilação.
// d) A alocação estática de memória permite uma reserva de memória sem tamanho pré-definido.
// e) A instrução free libera um espaço em memória para que seja possível encerrar o programa.

//* RESPOSTA: B)


//! EXERCÍCIO 1 ( PRODUTO DE MATRIZES )

// #include <stdio.h>

// int main(void) {
//     int matrizA[3][2];
//     int matrizB[2][3];
//     int matrizResultante[3][3] = {0}; // SEMPRE VAI SER //* matrizResultante[LINHA DA PRIMEIRA][LINHA DA SEGUNDA] // DECLARAR COMO = {0}, SENAO COMEÇA COM VALORES ALEATORIOS

//     printf("Preencha os valores da matriz A:\n\n");
//     for (int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("Digite o valor da %da coluna da %da linha: ", j+1, i+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Preencha os valores da matriz B:\n\n");
//     for (int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("Digite o valor da %da coluna da %da linha: ", j+1, i+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             for(int k = 0; k < 2; k++) {
//                 matrizResultante[i][j] += matrizA[i][k] * matrizB[k][j]; // o [k] sempre vai ser coluna da matrizA e linha da matrizB
//             }
//         }
//     }

//     printf("\nMatriz A:\n\n");
//     for (int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("[%d]", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nMatriz B:\n\n");
//     for (int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("[%d]", matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nMatriz Resultante:\n\n");
//     for (int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("[%d]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }
// }