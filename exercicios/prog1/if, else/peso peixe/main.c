#include <stdio.h>

int main(void) {
    
    float peso = 0;
    float multa = 0;

    printf("Qual o peso do peixe em kilos? ");
    scanf("%f", &peso);
    if (peso > 50) {
        printf("Peso excedido por %.2fKG!\n", peso - 50);
        multa = (peso - 50) * 4;
        printf("Foi gerado uma multa no valor de R$%.2f", multa);
    }
    else {
        printf("Peso nao excedido! KG: %.2f\n", peso);
        printf("Nao precisa pagar multa");
    }
    return 0;
}