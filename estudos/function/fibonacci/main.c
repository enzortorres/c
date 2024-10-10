#include <stdio.h>

int fibonacci(int n) { 
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    int numbers = 10;
    for (int i = 0; i < numbers; i++) {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}

