// #include <stdio.h>

// int main(void) {
//     char nomes[4][30];

//     for (int i = 0; i < 4; i++) {
//         printf("Nome da %d pessoa: ", i+1);
//         scanf("%s", nomes[i]);
//     }
//     for (int i = 0; i < 4; i++) {
//         printf("Nome %d: %s\n", i+1,  nomes[i]);
//     }
// }

// #include <stdio.h>

// int main(void) {
//     int idades[3][2], qtdMaior = 0;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("Idade da %d linha e %d coluna: ", i+1, j+1);
//             scanf("%d", &idades[i][j]);
//             if(idades[i][j] >= 18) {
//                 qtdMaior++;
//             }
//         }
//     }
//     printf("Quantidade de maiores de idade: %d\n", qtdMaior);
//     printf("Idades menores do que 18: ");
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             if (idades[i][j] < 18) {
//             printf("%d ", idades[i][j]);
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char nomes[3][30], menorNome[30];
//     int maiorQtdChar = 0, menorQtdChar = 0, comp = 0, tam = 0, teste = 0;
//     for (int i = 0; i < 3; i++) {
//         printf("Nome da %d pessoa: ", i+1);
//         scanf("%s", nomes[i]);
//         tam = strlen(nomes[i]);
//         if(tam > maiorQtdChar) {
//             maiorQtdChar = tam;
//         } 
//         if (tam < menorQtdChar || menorQtdChar == 0) {
//             menorQtdChar = tam;
//             strcpy(menorNome, nomes[i]);
//         }
//         comp = strcasecmp(nomes[i], "Ana");
//         if (comp == 0) {
//             teste = 1;
//         }
//     }   
//     printf("Maior quantidade de caracteres: %d\n", maiorQtdChar);
//     printf("Menor nome: %s\n", menorNome);
//     if (teste == 1) {
//         printf("Ana foi digitado.\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[4][30], maisVelha[30], nomeFormal[30];
    int idades[4], maiorIdade = 0, media = 0, soma = 0, qtdPar = 0;
    for (int i = 0; i < 4; i++) {
        printf("Nome da %d pessoa: ", i+1);
        scanf("%s", nomes[i]);
        printf("Idade da %d pessoa: ", i+1);
        scanf("%d", &idades[i]);
        if (idades[i] % 2 == 0) {
            qtdPar++;
        }
        soma += idades[i];
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            strcpy(maisVelha, nomes[i]);
        }
    } 
    media = soma / 4;  
    strcpy(nomeFormal, "Sr(a) ");
    strcat(nomeFormal, maisVelha);

    printf("Media das idades: %d\n", media);
    printf("Nome da pessoa mais velha: %s\n", maisVelha);
    printf("Nome da pessoa mais velha formalizado: %s\n", nomeFormal);
    printf("Quantidade de pessoas com idade par: %d\n", qtdPar);
    return 0;
}