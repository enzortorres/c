#include <stdio.h>

int main(void) {
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;

    printf("Digite o primeiro lado: ");
    scanf("%f", &n1);

    printf("Digite o segundo lado: ");
    scanf("%f", &n2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &n3);

    if (n1 == n2 && n1 == n3) {
        printf("Este triangulo e um triangulo equilatero!");
    }
    else if (n1 != n2 && n1 != n2 && n1 != n3) {
        printf("Este triangulo e um triangulo escaleno!");
    }
    else {
        printf("Este triangulo e um triangulo isosceles!");
    }
    return 0;
}