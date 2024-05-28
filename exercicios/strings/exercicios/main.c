#include <stdio.h>
#include <string.h>

// int main(void) { // EXERCÍCIO 1
//     char nome[20];
//     printf("Digite o seu nome: ");
//     scanf("%s", nome);
//     for (int i = 0; i < 4; i++) {
//         printf("%c", nome[i]);
//     }
//     return 0;
// }
// int main(void) { // EXERCÍCIO 2
//     char nome[20];
//     int tam = 0;

//     printf("Digite o seu nome: ");
//     scanf("%s", nome);
//     tam = strlen(nome);
//     printf("Seu nome: %s\nQuantidade de letras: %d", nome, tam);

//     return 0;
// }
// int main(void) { // EXERCÍCIO 3
//         char pais[20];
//         int comp = 0;
//         while (1 != 0) {
//             printf("Digite o seu pais:");
//             scanf("%s", pais);
//             comp = strcasecmp(pais, "brasil");
//             if (comp == 0) {
//                 printf("Voce eh brasileiro!\n");
//             } else {
//                 printf("Voce nao eh brasileiro!\n");
//             }
//         }
//     return 0;
// }
// int main(void) { // EXERCÍCIO 4+
//     float altura[3], maiorAltura = 0;
//     char nomes[3][20], nomeMaiorAltura[20];
//     // Leia a altura e o nome de 3 pessoas e escreva o nome da pessoa mais alta.
//     for (int i = 0; i < 3; i++) {
//         printf("Digite o nome da %d: ", i+1);
//         scanf("%s", nomes[i]);
//         printf("Digite a altura da %d pessoa: ", i+1);
//         scanf("%f", &altura[i]);
//         if (altura[i] > maiorAltura) {
//             maiorAltura = altura[i];
//             strcpy(nomeMaiorAltura, nomes[i]);
//         }
//     }
//     printf("Nome da pessoa mais alta: %s\n", nomeMaiorAltura);
//     return 0;
// }