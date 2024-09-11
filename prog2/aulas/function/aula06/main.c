#include <stdio.h>

float multiplicar(float x, float y);

int main(void) {
    float n1 = 0, n2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Resultado %.2f\n", multiplicar(n1,n2));
    return 0;
}

float multiplicar(float x, float y) {
    return x * y;
}

