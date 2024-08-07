#include <stdio.h>
#include <string.h>

int main(void) {
    char paises[7][30], meuPais[30];
    int comp = 0, qtdBrasil = 0, qtdNaoBrasil = 0, tam = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%s", paises[i]);
        strcpy(meuPais, paises[i]);
        printf("Meu pais eh: %s\n", meuPais);
        comp = strcmp(paises[i], "brasil");
        if (comp == 0) {
            qtdBrasil++;
            tam = strlen(paises[i]);
            strcat(paises[i], "-selecao");
            printf("%s\n", paises[i]);
        }
        else {
            qtdNaoBrasil++;
        }
    }
    printf("Quantidade brasileiros: %d\n", qtdBrasil);
    printf("Quantidade nao brasileiros: %d\n", qtdNaoBrasil);
    printf("Qtd caracteres brasil: %d\n", tam);
    return 0;
}