// >  &ptr = endereço da variável "ptr"
// > ptr = endereço do conteúdo apontado
// > *ptr = conteúdo apontado

#include <stdio.h>

void trocarValor(int *ptr);

int main(void) {
    int a = 10;
    int *ptr = &a;

    printf("%p\n", ptr); // ? Endereço do valor apontado pelo ponteiro
    printf("%p\n", &ptr); // ? Endereço da variável "ptr"
    printf("%d\n", *ptr); // ? Conteúdo da variável apontada pelo ponteiro

    trocarValor(ptr);

    printf("%d\n", *ptr); // ? Conteúdo da variável apontada pelo ponteiro modificada pela função
    return 0;
}

void trocarValor(int *ptr) {
    *ptr = 15;
}