#include <stdio.h>

int main(void) {
    FILE *file;

    file = fopen("bd.txt", "r");

    if (file == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }
    // feof(file) - End of File
    char linha[30];
    while (fgets(linha, 30, file) != NULL) {
        printf("%s", linha);
    }
}