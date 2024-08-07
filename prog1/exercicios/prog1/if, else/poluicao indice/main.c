#include <stdio.h>

int main(void) {
    float indice = 0;

    printf("Como esta o indice de poluicao atualmente? ");
    scanf("%f", &indice);
    if (indice < 0.30) {
        printf("Indice de poluicao aceitavel!");
    }
    else if (indice >= 0.30 && indice < 0.40) {
        printf("Suspender as atividades das industrias do grupo 1!");
    }
    else if (indice >= 0.40 && indice < 0.50) {
        printf("Suspender as atividades das industrias do grupo 1 e 2!");
    }
    else {
        printf("PERIGO! Suspender as atividades de todas as industrias!");
    }
    return 0;
}