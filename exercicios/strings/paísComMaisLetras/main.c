#include <stdio.h>
#include <string.h>

int main(void) {
    char paises[3][20],maisLetrasPaises[20], paisMaisNovo[20];
    int tam = 0, maiorTam = 0, qtdBrasil = 0, comp = 0, idades[3], menorIdade = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do seu pais: ");
        scanf("%s", paises[i]);
        printf("Qual a idade do pais:");
        scanf("%d", &idades[i]);
        if (idades[i] < menorIdade || menorIdade == 0) {
            menorIdade = idades[i];
            strcpy(paisMaisNovo, paises[i]);
        }
        tam = strlen(paises[i]);
        if (tam > maiorTam) {
            maiorTam = tam;
            strcpy(maisLetrasPaises, paises[i]);
        }
        comp = strcmp(paises[i], "brasil");
        if (comp == 0) {
            qtdBrasil++;
        }
    }
    printf("Pais com mais caracteres: %s\nNumero de caracteres: %d", maisLetrasPaises, maiorTam);
    printf("Quantidade de brasileiros: %d\n", qtdBrasil);
    return 0;
}