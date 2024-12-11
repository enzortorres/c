// //! EXERCÍCIO 1

// // while((ch = fgetc(file)) != EOF) {
// //     printf("%c", ch);
// // }

// //* O fgetc(file) lê o conteúdo de um arquivo caractere por caractere porque, internamente,
// //* ele mantém um "ponteiro de leitura" que avança automaticamente para o próximo caractere a cada chamada.
// //* d)



// //! EXERCÍCIO 2
// #include <stdio.h>
// #include <string.h>

// struct Endereco {
//     char rua[100];
//     char bairro[50];
//     int numCasa;
// };

// typedef struct Endereco endereco;

// struct Funcionario {
//     char nome[50];
//     int idade;
//     endereco endereco;
// };

// typedef struct Funcionario funcionario;

// int main(void) {
//     funcionario func;
//     printf("Digite o nome do funcionario: ");
//     fgets(func.nome, sizeof(func.nome), stdin);
//     func.nome[strcspn(func.nome, "\n")] = '\0';

//     printf("Digite a idade do funcionario: ");
//     scanf("%d", &func.idade);
//     getchar();

//     printf("Digite a rua: ");
//     fgets(func.endereco.rua, sizeof(func.endereco.rua), stdin);
//     func.endereco.rua[strcspn(func.endereco.rua, "\n")] = '\0';

//     printf("Digite o bairro: ");
//     fgets(func.endereco.bairro, sizeof(func.endereco.bairro), stdin);
//     func.endereco.bairro[strcspn(func.endereco.bairro, "\n")] = '\0';

//     printf("Digite o numero da casa: ");
//     scanf("%d", &func.endereco.numCasa);
//     getchar();

//     printf("Funcionario: %s\n", func.nome);
//     printf("Idade: %d\n", func.idade);
//     printf("Rua: %s\n", func.endereco.rua);
//     printf("Bairro: %s\n", func.endereco.bairro);
//     printf("Numero da casa: %d\n", func.endereco.numCasa);
//     return 0;
// }


// #include <stdio.h>

// float menorNumero(float *numeros);

// int main() {
//     float numeros[3], menor = 0;
    
//     for (int i = 0; i < 3; i++) {
//         printf("Digite um numero: ");
//         scanf("%f", &numeros[i]);
//     }

//     menor = menorNumero(numeros);

//     printf("Menor numero: %.2f", menor);

//     return 0;   
// }

// float menorNumero(float *numeros) {
//     float menorNum = 0;
//     for (int i = 0; i < 3; i++) {
//         if (*(numeros + i) < menorNum || menorNum == 0) {
//             menorNum = *(numeros + i);
//         }
//     }
//     return menorNum;
// }



struct computador {
    char marca[50];
    int anoLancamento;
    float valor;
};

typedef struct computador computador;

#include <stdio.h>
#include <string.h>

int main() {
    computador pc;

    printf("Qual a marca do computador? ");
    fgets(pc.marca, sizeof(pc.marca), stdin);
    pc.marca[strcspn(pc.marca, "\n")] = '\0';

    printf("Ano de lancamento: ");
    scanf("%d", &pc.anoLancamento);

    printf("Valor? ");
    scanf("%f", &pc.valor);

    if (strcmp(pc.marca, "XP") == 0 || pc.anoLancamento > 2021) {
        pc.valor += 500;
    }

    printf("Marca: %s", pc.marca);
    printf("Ano de lancamento: %d\n", pc.anoLancamento);
    printf("Valor: R$%.2f\n", pc.valor);

    return 0;
}