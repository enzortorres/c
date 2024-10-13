#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tamanho = 1;
    float soma = 0, media = 0;


    float *valores = (float *) malloc (tamanho * sizeof(float));
    if(valores == NULL) {
        printf("ERRO! Memoria insuficiente!\n");
        return 1;
    }

    char resp;
    int i = 0;
    do {
        printf("Digite o valor da venda: ");
        scanf("%f", &valores[i]);
        soma += valores[i];

        printf("Deseja digitar outro valor? ");
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S') {
            tamanho++;
            i++;
            valores = (float *) realloc (valores, tamanho * sizeof(float));
            if(valores == NULL) {
                printf("ERRO! Memoria insuficiente!\n");
                return 1;
            }
        }
    } while (resp == 's' || resp == 'S');
    media = soma / tamanho;

    printf("Tabela de valores:\n");
    for (int j = 0; j < tamanho; j++) {
        printf("%d venda: R$%.2f\n", j+1, valores[j]);
    }
    printf("Soma total das vendas: R$%.2f\n", soma);
    printf("Media das vendas: R$%.2f\n", media);


    free(valores);
    return 0;
}
