//! EXERCÍCIO 1

// while((ch = fgetc(file)) != EOF) {
//     printf("%c", ch);
// }

//* O fgetc(file) lê o conteúdo de um arquivo caractere por caractere porque, internamente,
//* ele mantém um "ponteiro de leitura" que avança automaticamente para o próximo caractere a cada chamada.
//* d)



//! EXERCÍCIO 2
#include <stdio.h>
#include <string.h>

struct Endereco {
    char rua[100];
    char bairro[50];
    int numCasa;
};

typedef struct Endereco endereco;

struct Funcionario {
    char nome[50];
    int idade;
    endereco endereco;
};

typedef struct Funcionario funcionario;

int main(void) {
    funcionario func;
    printf("Digite o nome do funcionario: ");
    fgets(func.nome, sizeof(func.nome), stdin);
    func.nome[strcspn(func.nome, "\n")] = '\0';

    printf("Digite a idade do funcionario: ");
    scanf("%d", &func.idade);
    getchar();

    printf("Digite a rua: ");
    fgets(func.endereco.rua, sizeof(func.endereco.rua), stdin);
    func.endereco.rua[strcspn(func.endereco.rua, "\n")] = '\0';

    printf("Digite o bairro: ");
    fgets(func.endereco.bairro, sizeof(func.endereco.bairro), stdin);
    func.endereco.bairro[strcspn(func.endereco.bairro, "\n")] = '\0';

    printf("Digite o numero da casa: ");
    scanf("%d", &func.endereco.numCasa);
    getchar();

    printf("Funcionario: %s\n", func.nome);
    printf("Idade: %d\n", func.idade);
    printf("Rua: %s\n", func.endereco.rua);
    printf("Bairro: %s\n", func.endereco.bairro);
    printf("Numero da casa: %d\n", func.endereco.numCasa);
    return 0;
}