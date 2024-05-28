#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[3][20], sobrenome[3][30], nomeCompleto[3][50];
    for (int i = 0; i < 3; i++) {
        printf("Digite o seu nome: ");
        scanf("%s", nome[i]);
        printf("Digite o seu sobrenome: ");
        scanf("%s", sobrenome[i]);

        strcpy(nomeCompleto, nome[i]);
        strcat(nomeCompleto, "-");
        strcat(nomeCompleto, sobrenome[i]);

        printf("Nome completo: %s\n", nomeCompleto);
    }
    return 0;

}