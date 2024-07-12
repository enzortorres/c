#include <stdio.h>

int main() {
    int valores[3][3], soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da %d coluna da %d linha: ", j+1, i+1);
            scanf("%d", &valores[i][j]);
            if (i == j) {
                soma += valores[i][j];
            }
        }
    }
    printf("A matriz ficou assim: \n");
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", valores[i][j]);
        }
        printf("|\n");
    }
    printf("A soma da diagonal principal da matriz foi: %d", soma);

    return 0;
}