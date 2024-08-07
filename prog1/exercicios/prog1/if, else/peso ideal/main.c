#include <stdio.h>

int main(void){
    
    int sexo = 0;
    float h = 0;
    float pesoideal = 0;

    printf("Qual a sua altura em metros? ");
    scanf("%f", &h);

    printf("Qual o seu sexo? \n[ 1 = MASCULINO / 2 = FEMININO] ");
    scanf("%i", &sexo);

    if(sexo ==  1) {
        pesoideal = (72.7 * h) - 58;
        printf("Seu peso ideal e de %.2fKG", pesoideal);
    }   
    else if(sexo == 2) {
        pesoideal = (62.1 * h) - 44.7;
        printf("Seu peso ideal e de %.2fKG", pesoideal);
    }
    return 0;
}