#include <stdio.h>

int main(void) {
    int num = 10;
    int *p1;

    p1 = &num;


    printf("O valor de num: %d\n", num);
    printf("O endereco de num: %p\n", &num);
    printf("O valor de p1: %p\n", p1);
    printf("O endereco de p1: %p\n", &p1);
    printf("Valor apontado por p1: %d\n", *p1);
    printf("\n");
    char ch = 'L';
    char *p2;

    p2 = &ch;


    printf("O valor de ch: %c\n", ch);
    printf("O endereco de ch: %p\n", &ch);
    printf("O valor de p2: %p\n", p2);
    printf("O endereco de p2: %p\n", &p2);
    printf("Valor apontado por p2: %c\n", *p2);
    return 0;
}