// #include <stdio.h> //! EXEMPLO EM AULA

// struct Aluno {
//     char nome[40];
//     int matricula;
// };

// typedef struct Aluno aluno;

// int main(void) {
//     aluno alu;

//     printf("Matricula: ");
//     scanf("%d", &alu.matricula);
//     getchar(); 
//     printf("Nome: ");
//     fgets(alu.nome, sizeof(alu.nome), stdin);

//     printf("Nome: %s", alu.nome);
//     printf("Matricula: %d", alu.matricula);
// }


// #include <stdio.h> //! EXERCÍCIO 4

// struct Turma {
//     char nome[50];
//     float notas[3];
// };

// typedef struct Turma turma;

// float getMaiorNota(turma *aluno);

// int main(void) {
//     turma aluno;
//     float maiorNota = 0;

//     printf("Digite o nome do aluno: ");
//     fgets(aluno.nome, sizeof(aluno.nome), stdin);
//     for (int i = 0; i < 3; i++) {
//         printf("Digite a %da nota: ", i+1);
//         scanf("%f", &aluno.notas[i]);
//     }
    
//     maiorNota = getMaiorNota(&aluno);
//     printf("A maior nota desse aluno foi: %.1f\n", maiorNota);

//     return 0;   
// }

// float getMaiorNota(turma *aluno) {
//     float maior = 0;
//     for (int i = 0; i < 3; i++) {
//         if (*(aluno->notas + i) > maior) {
//             maior = *(aluno->notas + i);
//         }
//     }
//     return maior;
// }



#include <stdio.h> //! EXERCÍCIO 5
#include <stdlib.h>
#include <string.h>

struct Turma {
    char nome[50];
    float notas[3];
};

typedef struct Turma turma;

void alunoMaiorNota(turma *alunos);

int main(void) {
    turma* aluno = (turma *) malloc (3 * sizeof(turma));
    if (aluno == NULL) {
        printf("ERRO DE MEMORIA!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        for (int j = 0; j < 3; j++) {
            printf("Digite a %da nota: ", j+1);
            scanf("%f", &aluno[i].notas[j]);
        }
        getchar();
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 50; j++) {
            if (aluno[i].nome[j] == '\n') {
                aluno[i].nome[j] = '\0';
                break;
            }
        } 
    }

    alunoMaiorNota(aluno);

    free(aluno);
    return 0;   
}

void alunoMaiorNota(turma *alunos) {
    float maiorNota = -1;
    char nomeMaiorNota[50];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (alunos[i].notas[j] > maiorNota) {
                maiorNota = alunos[i].notas[j];
                strcpy(nomeMaiorNota, alunos[i].nome);
            }
        }
    }
    printf("O aluno com a maior nota foi o %s com a nota: %.2f\n", nomeMaiorNota, maiorNota);
}
