#include <stdio.h>

int main(void) {

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int maior = 0;
    int menor = 0;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &n3);
    
    if ( n1 > n2 && n1 > n3) {
        maior = n1;
    }
    else if(n2 > n1 && n2 > n3) {
        maior = n2;
    }
    else {
    maior = n3;
    }
    if (n1 < n2 && n1 < n3) {
        menor = n1;
    }
    else if (n2 < n1 && n2 < n3) {
        menor = n2;
    }
    else{
    menor = n3;
    }
    printf("O maior numero e o %i e o menor e o %i", maior, menor);
    return 0;
}