#include <stdio.h>

int main(void) {
    char sexo;

    do {
        printf("Sexo do cliente: ");
        scanf(" %c", &sexo);
        if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F' && sexo != 'n' && sexo != 'N') {
            printf("\033[31mDigite um valor valido.\033[m\n");
            while(getchar() != '\n');
        }
    } while (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F' && sexo != 'n' && sexo != 'N');
    printf("%c", sexo);
    return 0;
}