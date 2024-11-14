#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Cliente {
    char nome[30];
    int idade;
    char sexo;
};

typedef struct Cliente cadastrar;

void buscar();

int main(void) {
    int qtdCadastro = 0, erro = 0, tam = 0;

    printf("Quantos convidados deseja cadastrar? ");
    scanf("%d", &qtdCadastro);
    getchar();

    cadastrar cliente[qtdCadastro];

    for (int i = 0; i < qtdCadastro; i++) {
        FILE *file = fopen("registro.txt", "a");
        if (file == NULL) {
            printf("\033[1;31mERRO CRIAR ARQUIVO!\033[0m\n");
            return 1;
        }

        do {
            printf("Digite o nome do %do convidado: ", i+1);
            fgets(cliente[i].nome, sizeof(cliente->nome), stdin);
            cliente[i].nome[strcspn(cliente[i].nome, "\n")] = '\0';
            tam = strlen(cliente[i].nome);
            if (tam < 3) {
                printf("\n\033[1;31mERRO! Nao sera aceito nomes menores que 3 letras!\033[0m\n\n");
            }
        } while (tam < 3);

        do {
            erro = 0;
            printf("Digite a idade do convidado: ");
            if (scanf("%d", &cliente[i].idade) != 1) {
                printf("\n\033[1;31mERRO! So pode digitar numeros!\033[0m\n\n");
                erro = 1;
                while (getchar() != '\n');
            }
        } while (erro == 1);

        do {
            erro = 0;

            printf("Digite o sexo do convidado (m/f): ");
            scanf(" %c", &cliente[i].sexo);
            cliente[i].sexo = tolower(cliente[i].sexo);

            if (!isalpha(cliente[i].sexo) || (cliente[i].sexo != 'm' && cliente[i].sexo != 'f')) {
                printf("\n\033[1;31mERRO! Valor invalido! Somente (m/f).\033[0m\n\n");
                erro = 1;
                while (getchar() != '\n');
            }
        } while (erro == 1);
        getchar();

        fprintf(file, "%s|%d|%c\n", cliente[i].nome, cliente[i].idade, cliente[i].sexo);
        fclose(file);
    }

    buscar();
    free(cliente);
}

void buscar() {
    char nomeBusca[30], nome[30], linha[200], sexo;
    int idade = 0, encontrou = 0;

    FILE *file = fopen("registro.txt", "r");
    if (file == NULL) {
        printf("\033[1;31mERRO AO BUSCAR ARQUIVO!\033[0m\n");
        return;
    }

    printf("Digite o nome que deseja buscar: ");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    while(fgets(linha, sizeof(linha), file)) {
        if (strstr(linha, nomeBusca)) {
            encontrou = 1;
            sscanf(linha, "%[^|]|%d|%c", nome, &idade, &sexo);
            printf("\033[1;36m---------------------------------\033[0m\n");
            printf("Nome: %s\n", nome);
            printf("Idade: %d\n", idade);
            printf("Sexo: %c\n", sexo);
        }
    }
    printf("\033[1;36m---------------------------------\033[0m\n");

    if (!encontrou) {
        printf("\n\033[1;31mNome nao encontrado!\033[0m\n");
    }
}