// #include <stdio.h>

// int main(void) {
//     int idade[5]; 
//     // idade = {0, 0, 0, 0, 0}
//     for (int i = 0; i < 5; i++) {
//         printf("Idade: ");
//         scanf("%d", &idade[i]);
//         printf("%d\n", i);
//     }

//     return 0; 
// }

// int main(void) {
//     float salarios[3][4];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Digite o valor:");
//             scanf("%d", &salarios[i][j])
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

// FUNÇõES DA BIBLIOTECA <string.h>
// strlen | string length = para ver o tamanho da string; Exemplo: strlen(STRING QUE DESEJA CONTAR OS CARACTERES)
// strcmp | string compare = para comparar strings; Exemplo: strcmp(PRIMEIRA COMPARAÇÃO, SEGUNDA COMPARAÇÃO) se for igual, retorna o valor 0, caso o contrario 1;
// strcpy | string copy = para copiar uma string; Exemplo: strcpy(PARA ONDE VAI SER COPIADO, OQUE VAI SER COPIADO) == "STRING1" = "STRING2" = "STRING2"
// strcat | string concatenate = para contatenar uma string com outra; Exemplo: strcat(PRIMEIRA STRING, SEGUNDA STRING) == "1STRING" + "STRING2" = "STRING1STRING2"

int main(void) {
    char nomes[5][30], nomeMaior[30];
    int qtd = 0, qtdMaior = 0, teste = 0, qtdEnzo = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nome da %d pessoa: ",  i+1); 
        scanf("%s", nomes[i]);
        qtd = strlen(nomes[i]);
        if (qtd > qtdMaior) {
            qtdMaior = qtd;
            strcpy(nomeMaior, nomes[i]);
        }
        teste = strcasecmp(nomes[i], "Enzo");
        if (teste == 0) {
            printf("Nome bonito!\n");
            qtdEnzo++;
        } else {
            printf("Nome feio!\n");
        }
    }
    printf("Quantidade de caracteres do maior nome: %d\n", qtdMaior);
    printf("Nome: %s\n", nomeMaior);
    printf("Quantidade de Enzos: %d", qtdEnzo);
    return 0;
}