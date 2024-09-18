#include <stdio.h>

int main(void) {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Voce digitou: %s", frase);
}