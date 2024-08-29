#include <stdio.h>

int main(void) {
    int NUM = 100;

    for (int i = 0; i < NUM; i++) {
        for (int j = 0; j < NUM; j++) {
            if (i + j >= (NUM - 1)) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}