#include <stdio.h>

int main(void) {
    int number = 0, cont = 0;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &number);
        if (number < 0) {
            printf("Nao aceitamos numeros negativos, digite novamente!\n");
        }
    } while (number < 0);

    do {
        if (cont % 2 == 0) {
            printf("%d ", cont);
        }
        cont++;
    } while (cont <= number);
    return 0;
}