#include <stdio.h>

char validarSituacao(float p1, float p2, float p3, float faltas, float aulas, float *media);
// ?  "testando som" = literal string | 'a' = character

int main(void) {
    float p1 = 0, p2 = 0, p3 = 0, media = 0, aulas = 0, faltas = 0;
    char situacao;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &p2);
    printf("Digite a terceira nota: ");
    scanf("%f", &p3);

    printf("Digite a quantidade de aulas: ");
    scanf("%f", &aulas);

    printf("Digite a quantidade de faltas: ");
    scanf("%f", &faltas);

    situacao = validarSituacao(p1, p2, p3, faltas, aulas, &media);

    printf("%.1f\n", media);

    switch (situacao) {
        case 'A':
            printf("Situacao do aluno: APROVADO!\n");
            break;
        case 'R':
            printf("Situacao do aluno: REPROVADO!\n");
            break;
        case 'F':
            printf("Situacao do aluno: REPROVADO POR FALTAS!\n");
            break;
        default:
            printf("Situacao invalida!");
    }

    return 0;
}

char validarSituacao(float p1, float p2, float p3, float faltas, float aulas, float *media) {
    float soma = p1 + p2 + p3;
    *media = soma / 3;
    float porcentagem = (faltas / aulas) * 100;
    printf("%.1f\n", porcentagem);
    
    if (porcentagem > 25) {
        return 'F';
    } else if (*media >= 6) {
        return 'A';
    } else {
        return 'R';
    }
}
