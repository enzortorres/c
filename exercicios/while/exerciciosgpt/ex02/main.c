#include <stdio.h> 

int main() {
    float soma = 0, media = 0, qtd = 0;
    int qtdValores = 0;
    
    printf("Quantos valores deseja digitar? ");
    scanf("%d", &qtdValores);

    float valores[qtdValores]; 

    for (int i = 0; i < qtdValores; i++) {
        if (i < (qtdValores - 1)) {
            printf("Digite o %d valor: ", i+1);
        }
        else if (i < qtdValores) {
            printf("Digite o ultimo valor: ");
        }
        scanf("%f", &valores[i]);
        soma += valores[i];
        qtd++;  
    }

    media = soma / qtd;
    printf("A media dos valores digitado foi: %.2f", media);

    return 0;
}