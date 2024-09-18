#include <stdio.h>


void trocar(int *pa, int *pb);

int main(void) {
    int a = 10, b = 20;
    trocar(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void trocar(int *pa, int *pb) {
    int tmp = *pb;
    *pb = *pa;
    *pa = tmp;
}