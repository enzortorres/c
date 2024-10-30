// #include <stdio.h> //! EXEMPLO EM AULA

// int main(void) {
//     FILE *arquivo;
//     char ch;
//     arquivo = fopen("bd.txt", "a");
//     if (arquivo == NULL) {
//         printf("Erro ao criar arquivo!\n");
//         return 1;
//     }

//     printf("Digite algo, ENTER para enviar!");
//     while (ch != '\n') {
//         ch = getchar();
//         putc(ch, arquivo);
//     }
//     printf("Fim!\n");

//     fclose(arquivo);

//     return 0;
// }


#include <stdio.h> //! exercício 1
#include <string.h>

int main(void) {
    FILE *file;
    int dia, mes, ano;
    // char nome[50];

    file = fopen("bd.txt", "r");
    if (file == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // printf("Digite o seu nome: ");
    // fgets(nome, sizeof(nome), stdin);
    // nome[strcspn(nome, "\n")] = '\0';

    // printf("Digite sua data de nascimento: ");
    // printf("Dia:");
    // scanf("%d", &dia);
    // printf("Mes:");
    // scanf("%d", &mes);
    // printf("Ano:");
    // scanf("%d", &ano);
    // fscanf(file, "%d/%d/%d", &dia, &mes, &ano);
    // printf("Dia: %d\n", dia);
    // printf("Mes: %d\n", mes);
    // printf("Ano: %d\n", ano);
    // char linha[30];

    // fscanf("%[^EOF]", texto);
    // printf("%s", texto);

    // char nomeLido[50];
    // fscanf(file, "%s", nomeLido);
    // printf("Foi lido: %s", nomeLido);

    fclose(file);

    return 0;
}