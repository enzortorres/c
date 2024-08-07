#include <stdio.h>

int main(void) {
    int number = 0;

    printf("Digite um numero de 1 a 20: ");
    scanf("%i", &number);

    switch(number) {
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        case 10:
            printf("Dez");
            break;
        case 11:
            printf("Onze");
            break;
        case 12:
            printf("Doze");
            break;
        case 13:
            printf("Treze");
            break;
        case 14:
            printf("Quatorze");
            break;
        case 15:
            printf("Quinze");
            break;
        case 16:
            printf("Dezesseis");
            break;
        case 17:
            printf("Dezessete");
            break;
        case 18:
            printf("Dezoito");
            break;
        case 19:
            printf("Dezenove");
            break;
        case 20:
            printf("Vinte");
            break;
        default:
            printf("Numero invalido!");
    }
    return 0;
}