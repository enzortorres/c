
#include <stdio.h>
// Faça um algoritmo que determine o maior entre N números. A condição de
// parada é a entrada de qualquer valor 0, ou seja, o algoritmo deve ficar
// calculando o maior até que a entrada seja igual a 0 (ZERO).

int main(void) {
    int number = 0, maior = 0, menor = 0;
    do{
        printf("Digite um numero: ");
        scanf("%i", &number);
        if (number != 0) { 
            if (number > maior) {
                maior = number;
            }
            if (number < menor || menor == 0) {
                menor = number;
            }
        }
    } while (number != 0);
    printf("Maior: %i\nMenor: %i", maior, menor);
}

