#include <stdio.h>

int main(void){
    int num = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);
    if (num % 2 == 0) {
        printf("Este numero e um numero par!");
    }
    else {
        printf("Este numero e um numero impar!");
    }
    return 0;
}