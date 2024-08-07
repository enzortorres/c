// #include <stdio.h> //EXERCÍCIO 01

// int main (void) {
//     int valor[5] = {1, 2, 3, 4, 5};

//     printf("Valores do vetor:");
//     for (int i =0; i < 5; i++) {
//         printf(" %d", valor[i]);
//     }

//     return 0;
// }

// #include <stdio.h> //EXERCÍCIO 02

// int main (void) {
//     int valor[5] = {}, soma = 0;

//     for (int i = 0; i < 5; i++) {
//         printf("Digite o %d^ valor: ", i+1);
//         scanf("%d", &valor[i]);
//         soma += valor[i];
//     }
//     printf("A soma dos valores do vetor foi: %d", soma);
//     return 0;
// }

// #include <stdio.h> //EXERCÍCIO 03

// int main (void) {

//     for (int i = 1; i <= 10; i++) {
//         printf("%d ", i);
//     } 
//     return 0;
// }

// #include <stdio.h> //EXERCÍCIO 04

// int main(void) {
//     int valor = 0;
//     printf("Digite um numero: ");
//     scanf("%d", &valor);
//     printf("Numeros pares de 1 ate %d: ", valor);
//     for (int i = 1; i <= valor; i++) {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
// #include <stdio.h> //EXERCÍCIO 05

// int main (void) {
//     int valor = 0;
//     printf("Digite um valor: ");
//     scanf("%d", &valor);

//     for (int i = valor-1; i>0; i--) {
//         valor *= i;
//     }
//     printf("O resultado do fatorial foi: %d", valor);
//     return 0;
// }

// #include <stdio.h> //EXERCÍCIO 06

// int main (void) {
//     int vetor[100];

//     for (int i = 1; i<=100; i++) {
//         vetor[i] = i;
//         printf("%d ", vetor[i]);
//     }
//     return 0;
// }