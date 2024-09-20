// #include <stdio.h> //! EXERCÍCIO EM AULA

// int duplicar(int *array);

// int main(void) {
//     int valores[5] = {1,2,3,4,5};
//     duplicar(valores);
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", valores[i]);
//     }
    
// }

// int duplicar(int *array) {
//     for (int i = 0; i < sizeof(array); i++) {
//         *(array + i) *= 2;
//     }
// }

// #include <stdio.h> //! EXERCÍCIO 1

// void menorMaiorValor(int array[], int *ptrMaior, int *ptrMenor);

// int main(void) {
//     int valores[4], maior = 0, menor = 0;

//     for (int i = 0; i < 4; i++) {
//         printf("Digite o %d valor:", i+1);
//         scanf("%d", &valores[i]);
//     }
//     menorMaiorValor(valores, &maior, &menor);
//     printf("\nMaior: %d\nMenor: %d\n", maior, menor);
//     return 0;
// }

// void menorMaiorValor(int valores[], int *ptrMaior, int *ptrMenor) {
//     for (int i = 0; i < 4   ; i++) {    
//         if (*(valores + i) > *ptrMaior) {
//             *ptrMaior = *(valores + i);
//         }
//         if (*(valores + i) < *ptrMenor || i == 0) {
//             *ptrMenor = *(valores + i);
//         }
//     }
// }

// #include <stdio.h> // EXERCÍCIO 2

// void calcularMedia(float valores[], float *ptrMedia);

// int main(void) {
//     float valores[5], media = 0;
//     for (int i = 0; i < 5; i++) {
//         printf("Digite o %d valor:", i+1);
//         scanf("%f", &valores[i]);
//     }
//     calcularMedia(valores, &media);
//     printf("A media dos valores digitados ficou em %.2f", media);
//     return 0;
// }

// void calcularMedia(float valores[], float *ptrMedia) {
//     float soma = 0;
//     for (int i = 0; i < 5; i++) {
//         soma += *(valores + i);
//     }
//     *ptrMedia = soma / 5;
// }

#include <stdio.h>
#include <string.h>

void contarCaracteres(char *str, int *numCaracteres);

int main(void) {
    char string[50];
    printf("Digite o seu nome:");
    fgets(string, sizeof(string), stdin);
    int tam = strlen(string);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            tam--;
        }
    }
    printf("%d\n", tam);
    return 0;
}

void contarCaracteres(char *str, int *numCaracteres) {
    
}