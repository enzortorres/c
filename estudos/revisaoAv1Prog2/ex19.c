#include <stdio.h>

int verificar_pares(int *v);

int main(void) {
    // int v1[6], qtdPares = 0;

    // for (int i = 0; i < 6; i++) {
    //     printf("Digite um valor: ");
    //     scanf("%d", &v1[i]);
    // }

    // qtdPares = verificar_pares(v1);

    // printf("\nQtd pares: %d", qtdPares);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i > j) {
                printf("[ * ]");
            } else {
                printf("[   ]");
            }
        }
        printf("\n");
    }

    return 0;
}

int verificar_pares(int *v) {
    int qtdPares = 0;
    printf("Numeros pares: ");
    for (int i = 0; i < 6; i++) {
        if ((*v + i) % 2 == 0) {
            qtdPares++;
            printf("%d ", (*v + i));
        } 
    }
    return qtdPares;
}