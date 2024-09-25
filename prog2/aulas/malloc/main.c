#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int)); // mesma coisa que criar um array, int p[5]; malloc (5 * (4)) 4 porque int ocupa 4 bytes de memoria
    if (ptr == NULL) { // caso nao tenha memoria suficiente para alocar, ele da erro e retorna 1, que é mesma coisa que erro 
        printf("ERRO! Memoria insuficiente!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i+1;
    }
    for (int i = 0; i < 5; i++) {
        printf("[%d]", ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr, 3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        printf("[%d]", ptr[i]);
    }

    printf("\n");
    
    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("[%d]", ptr[i]);
    }
    free(ptr);
    printf("\n");
    return 0;
}
