#include <stdio.h>

int main(void) {
    char nome[100];
    
    printf("Digite o seu nome completo:");
    fgets(nome, sizeof(nome), stdin);

    printf("Seu nome completo eh: %s\n", nome);
    return 0;
}