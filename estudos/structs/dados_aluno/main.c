#include <stdio.h>

struct aluno {
    char nome[50];
    int id_aluno;
    float notas[3];
    float media;
};

typedef struct aluno aluno;

float media(float *notas);

int main(void) {
    aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Digite a id do %do aluno: ", i+1);
        scanf("%d", &alunos[i].id_aluno);

        // Para tirar o '\n' do fgets
        for (int j = 0; j < (int)sizeof(alunos[i].nome); j++) {
            if (alunos[i].nome[j] == '\n') {
                alunos[i].nome[j] = '\0';
            }
        }

        for (int j = 0; j < 3; j++) {
            printf("Digite a %da nota do %do aluno: ", j+1, i+1);
            scanf("%f", &alunos[i].notas[j]);
            getchar(); // Para limpar o buffer de entrada após o scanf que deixa um '\n' ao final
            if (j == 2) {
                alunos[i].media = media(alunos[i].notas);
            }
        }
    }
    for(int i = 0; i < 3; i++) {
        printf("Aluno: %s | ID: %d | Media: %.1f\n", alunos[i].nome, alunos[i].id_aluno, alunos[i].media);
    }
    return 0;
}

float media(float *notas) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += *(notas + i);
    }
    return soma / 3;
}
