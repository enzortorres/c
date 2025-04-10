#include <stdio.h>

int main(void) {
    int size = 4;
    float matriz[size][size], soma = 0, media = 0;
    int qtd = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matriz[i][j] = 0;
            if (i > j) {
                soma += matriz[i][j];
                qtd++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("[ %.2f ] ", matriz[i][j]);
        }
        printf("\n");
    }

    media = soma / qtd;
    printf("Media dos valores do triangulo inferior: %.1f", media);


    return 0;
}