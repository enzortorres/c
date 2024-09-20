// #include <stdio.h> //! EXERCÍCIO 1

// int main(void) {
//     int i = 50; 
//     while (i <= 60) {
//         printf("%d ", i);
//         i++;
//     }



//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 2

// int main(void) {
//     int num = 0;
//     int soma = 0;
//     while (num >= 0) {
//         printf("Digite um numero: ");
//         scanf("%d", &num);
//         soma += num;
//     }

//     printf("O resultado da soma de todos os numeros foi: %d", soma);
//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 3

// int main(void) {
//     int i = 0; 
//     while (i <= 30) {
//         if (i % 3 == 0) {
//             printf("%d ", i);
//         }
//         i++;
//     }

//     return 0;
// }



#include <stdio.h> //! EXERCÍCIO 4

int main(void) {
    int menor = 0;
    int number = 1;

    while (number != 0) {
        printf("Digite um valor: ");
        scanf("%d", &number);
        if (number < menor || number == 0) {
            menor = number;
        }
    }
    printf("O menor numero digitado foi: %d", menor);
    return 0;
}