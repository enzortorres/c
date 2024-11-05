#include <stdio.h>

int main(void) {
    int x = 0;
    float a = 0, b = 0, c = 0;

    printf("Digite um valor inteiro para X: ");
    scanf("%d", &x);
    printf("Digite o numero para A: ");
    scanf("%f", &a);
    printf("Digite o numero para B: ");
    scanf("%f", &b);
    printf("Digite o numero para C: ");
    scanf("%f", &c);

    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    switch (x) {
        case 1:
            printf("%.2f %.2f %.2f", a, b ,c);
            break;
        case 2:
            printf("%.2f %.2f %.2f", c, b ,a);
            break;
        case 3:
            printf("%.2f %.2f %.2f", b, c ,a);
            break;
        default:
            printf("Valor inteiro digitado invalido!\n");
    }

    return 0;
}