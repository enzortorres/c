#include <stdio.h> 

int main() {
    int qtd = 0, numbers[qtd];

    for (int i = 0; i < qtd+1; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numbers[i]);
        if (numbers[i] == -1) {
            break;
        }
        qtd++;
    }
    printf("Numeros digitados: ");
    for(int i = 0; i < qtd; i++) {
        printf("%d", numbers[i]);
        if (i < qtd-1) {
            printf(", ");
        }
        else {
            printf(".\n");
        }
    }
    printf("Quantidade de numeros digitados: %d", qtd);
    return 0;
}