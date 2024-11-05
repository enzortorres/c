#include <stdio.h>

int main(void) {
    int teste = 0;
    int valor = 0;

    printf("Digite um valor: ");
    teste = scanf("%d", &valor);
    
    printf("%d", teste);

    return 0;   
}