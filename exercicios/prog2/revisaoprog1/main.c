// EXERCÍCIO 1

// #include <stdio.h>
// int main (void) {
//     float alturas[5], soma = 0, media = 0;
//     int qtdMais = 0;

//     for (int i = 0; i < 5; i++) {
//         printf("Digite a altura da %d pessoa: ", i+1);
//         scanf("%f", &alturas[i]);
//         soma += alturas[i];
//         if (alturas[i] > 1.75) {
//             qtdMais++;
//         }
//     }
//     media = soma / 5;
//     printf("Soma das alturas: %.2f\nMedia das alturas: %.2f\nQuantidade de pessoas acima de 1.75m: %f", soma, media, qtdMais);
//     return 0; 
// }

// EXERCÍCIO 2

// #include <stdio.h>

// int main(void) {
//     int idades[4], qtd = 0, maiorIdade = 0, menorIdade = 0;
//     float pesos[4], pesoMaisNova = 0, menorPeso = 0;

//     for (int i = 0; i < 4; i++) {
//         printf("Digite a idade da %d pessoa: ", i+1);
//         scanf("%d", &idades[i]);
//         printf("Digite o peso da %d pessoa: ", i+1);
//         scanf("%f", &pesos[i]);
//         if (idades[i] > 20 && pesos[i] <70) {
//             qtd++;
//         }
//         if (idades[i] > maiorIdade) {
//             maiorIdade = idades[i];
//         }
//         if (idades[i] < menorIdade || menorIdade == 0) {
//             menorIdade = idades[i];
//             pesoMaisNova = pesos[i];
//         }
//         if (pesos[i] < menorPeso || menorPeso == 0) {
//             menorPeso = pesos[i];
//         }
//     }
//     printf("Quantidade de pessoas com mais de 20 anos e menos de 70kg: %d\n", qtd);
//     printf("Idade da pessoa mais velha: %d\n", maiorIdade);
//     printf("Peso da pessoa com menor peso: %.2f\n", menorPeso);
//     printf("Peso da pessoa mais nova: %.2f\n", pesoMaisNova);
//     return 0;
// }

// EXERCÍCIO 3

#include <stdio.h>

int main(void) {
    float salarios[2][3], soma = 0, media = 0;
    int qtdEntre = 0, qtdAbaixoMedia = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nSalario: ");
            scanf("%f", &salarios[i][j]);
            soma += salarios[i][j];
            if (salarios[i][j] > 1250 && salarios[i][j] < 1800) {
                qtdEntre++;
            }
        }
    }
    media = soma / 6;

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if (salarios[i][j] < media) {
                qtdAbaixoMedia++;
            }
        }
    }
    printf("Quantidade de salarios entre 1250 e 1800: %d\n", qtdEntre);
    printf("Media salarial: %.2f\n", media);
    printf("Quantidade de salarios abaixo da media: %d\n", qtdAbaixoMedia);
    return 0; 
}