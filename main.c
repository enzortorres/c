#include <stdio.h>
#include <string.h>

int main() {
    char st1[6], st2[6], st3[11]; // st3 deve ter tamanho suficiente para os caracteres de st1 e st2 e o terminador nulo
    int caract1 = 0, caract2 = 0;

    // Solicita a primeira palavra com 5 caracteres
    do {
        printf("Digite uma palavra com 5 caracteres: ");
        scanf("%5s", st1); // Limita a leitura a 5 caracteres para evitar overflow
        caract1 = strlen(st1);
        if (caract1 != 5) {
            printf("Essa palavra nao tem 5 caracteres, tente novamente!\n");
        }
    } while (caract1 != 5);

    // Solicita a segunda palavra com 5 caracteres
    do {
        printf("Digite outra palavra com 5 caracteres: ");
        scanf("%5s", st2); // Limita a leitura a 5 caracteres para evitar overflow
        caract2 = strlen(st2);
        if (caract2 != 5) {
            printf("Essa palavra nao tem 5 caracteres, tente novamente!\n");
        }
    } while (caract2 != 5);
    
    // Concatenação alternada das strings st1 e st2 em st3 com no máximo 5 caracteres
    strcpy(st3, ""); // Inicializa st3 vazia
    
    for (int i = 0; i < 5 && (st1[i] != '\0' || st2[i] != '\0'); i++) {
        if (st1[i] != '\0') {
            strncat(st3, &st1[i], 1); // Concatena o i-ésimo caractere de st1 em st3
        }
        if (st2[i] != '\0') {
            strncat(st3, &st2[i], 1); // Concatena o i-ésimo caractere de st2 em st3
        }
    }
    
    printf("String resultante: %s\n", st3);

    return 0;
}
