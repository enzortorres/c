// #include <stdio.h> //! EXERCÍCIO 1

// void incrementar5(int *valor);

// int main(void) {
//     int valor = 0;
//     printf("Digite um valor: ");
//     scanf("%d", &valor);

//     printf("O valor %d incrementado em 5 ficou em: ", valor);
//     incrementar5(&valor);
//     printf("%d", valor);

//     return 0;
// }

// void incrementar5(int *valor) {
//     *valor += 5;
// }



// int qtdImpares(int *array); //! EXERCÍCIO 2

// #include <stdio.h>

// int main(void) {
//     int numbers[4], qtdImpar = 0;
//     for (int i = 0; i < 4; i++) {
//         printf("Digite o %do valor: ", i+1);
//         scanf("%d", &numbers[i]);
//     }

//     qtdImpar = qtdImpares(numbers);
//     printf("Na lista de numeros digitados foram encontrados %d impares!", qtdImpar);
//     return 0;
// }

// int qtdImpares(int *array) {
//     int qtd = 0;
//     for (int i = 0; i < 4; i++) {
//         if (*(array + i) % 2 != 0) {
//             qtd++;
//         }
//     }   
//     return qtd;
// }





// #include <stdio.h> //! EXERCÍCIO 3

// void qtdEqual(int *array, int *qtd, int checkNumber); 

// int main(void) {
//     int numbers[4], qtd = 0, checkNumber = 0;
//     for (int i = 0; i < 4; i++) {
//         printf("Digite o %do valor: ", i+1);
//         scanf("%d", &numbers[i]);
//     }

//     printf("Digite um numero para checar quantas vezes foi digitado: ");
//     scanf("%d", &checkNumber);

//     qtdEqual(numbers, &qtd, checkNumber);
//     printf("O numero %d foi encontrado %d vezes!", checkNumber, qtd);
//     return 0;
// }

// void qtdEqual(int *array, int *qtd, int checkNumber) {
//     for (int i = 0; i < 4; i++) {
//         if (*(array + i) == checkNumber) {
//             (*qtd)++;
//         }
//     }
// }




// #include <stdio.h> //! EXERCÍCIO 4

// void calcMedia(float valor1, float valor2, float *media);

// int main(void) {
//     float valor1 = 0, valor2 = 0, media = 0;

//     printf("Digite um valor: ");
//     scanf("%f", &valor1);
//     printf("Digite outro valor: ");
//     scanf("%f", &valor2);    

//     calcMedia(valor1, valor2, &media);
//     printf("Media: %.2f", media);
//     return 0;
// }

// void calcMedia(float valor1, float valor2, float *media) {
//     float soma = valor1 + valor2;
//     *media = soma / 2;
// }



// #include <stdio.h> //! EXERCÍCIO 5

// void tradeValue(int *value1, int *value2);

// int main(void) {
//     int valor1 = 0, valor2 = 0;

//     printf("Digite o primeiro valor: ");
//     scanf("%d", &valor1);
//     printf("Digite o segundo valor: ");
//     scanf("%d", &valor2);

//     tradeValue(&valor1, &valor2);
//     printf("Os valores foram mudados e ficaram: %d e %d", valor1, valor2);
//     return 0;
// }

// void tradeValue(int *value1, int *value2) {
//     *value1 *= 2;
//     (*value2)--;
// }