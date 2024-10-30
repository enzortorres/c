// #include <stdio.h> //! EXERCÍCIO 1

// struct aluno {
//     char nome[50];
//     float nota[3];
//     float media;
// };

// typedef struct aluno aluno;

// int main(void) {
//     aluno aluno1;
//     float soma = 0;
//     int tamanho = sizeof(aluno1.nome);

//     printf("Digite o nome do aluno: ");
//     fgets(aluno1.nome, sizeof(aluno1.nome), stdin);

//     for (int i = 0; i < tamanho; i++) {
//         if (aluno1.nome[i] == '\n') {
//             aluno1.nome[i] = '\0';
//         }
//     }
    
//     for(int i = 0; i < 3; i++) {
//         printf("Digite a %da nota do aluno (%s): ", i+1, aluno1.nome);
//         scanf("%f", &aluno1.nota[i]);
//         soma += aluno1.nota[i];
//     }
//     aluno1.media = soma / 3;

//     printf("\nAluno: %s\n", aluno1.nome);
//     for(int i = 0; i < 3; i++) {
//         printf("Nota %d: %.2f\n", i+1, aluno1.nota[i]);
//     }
//     printf("Media: %.2f\n", aluno1.media);
    

//     return 0;
// }

// #include <stdio.h> //! EXERCÍCIO 2

// struct tempo {
//     int hora;
//     int minuto;
// };
// typedef struct tempo tempo;

// tempo calcularHora(int minutos);

// int main(void) {
//     int totalMinutos;
//     tempo registro1;
//     printf("Digite a quantidade de minutos: ");
//     scanf("%d", &totalMinutos);
    
//     registro1 = calcularHora(totalMinutos);
//     printf("%d minutos equivalem a %d horas e %d minutos.", totalMinutos, registro1.hora, registro1.minuto);

//     return 0;
// }

// tempo calcularHora(int minutos) {
//     tempo tmp;
//     tmp.hora = minutos / 60;
//     tmp.minuto = minutos % 60;

//     return tmp;
// }



#include <stdio.h> //! EXERCÍCIO 3

struct endereco {
    char rua[100];
    char cidade[30];
    char estado[30];
    char complemento[20];
};
typedef struct endereco endereco;
struct pessoa {
    char nome[50];
    endereco address;
};
typedef struct pessoa pessoa;

void infoPessoa(pessoa person);

int main(void) {
    pessoa person;
    printf("Digite o seu nome: ");
    fgets(person.nome, sizeof(person.nome), stdin);

    printf("Digite a sua rua: ");
    fgets(person.address.rua, sizeof(person.address.rua), stdin);
    printf("Digite o numero da sua casa ou complemento: ");
    fgets(person.address.complemento, sizeof(person.address.complemento), stdin);
    printf("Digite a sua cidade: ");
    fgets(person.address.cidade, sizeof(person.address.cidade), stdin);
    printf("Digite a sua estado: ");
    fgets(person.address.estado, sizeof(person.address.estado), stdin);
    
    for(int i = 0; i <= 50; i++) {
        if (person.nome[i] == '\n') {
            person.nome[i] = '\0';
        }
        if (person.address.rua[i] == '\n') {
            person.address.rua[i] = '\0';
        }
        if (person.address.cidade[i] == '\n') {
            person.address.cidade[i] = '\0';
        }
        if (person.address.estado[i] == '\n') {
            person.address.estado[i] = '\0';
        }
        if (person.address.complemento[i] == '\n') {
            person.address.complemento[i] = '\0';
        }
    }

    infoPessoa(person);
    return 0;
}

void infoPessoa(pessoa person) {
    printf("\nNome: %s\nEndereco: %s, %s, %s - %s", person.nome, person.address.rua, person.address.complemento, person.address.cidade, person.address.estado);
}