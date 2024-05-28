#include <stdio.h>
#include <string.h>
// FUNÇõES DA BIBLIOTECA <string.h>
// strlen | string length = para ver o tamanho da string; Exemplo: strlen(STRING QUE DESEJA CONTAR OS CARACTERES)
// strcmp | string compare = para comparar strings; Exemplo: strcmp(PRIMEIRA COMPARAÇÃO, SEGUNDA COMPARAÇÃO) se for igual, retorna o valor 0, caso o contrario 1;
// strcpy | string copy = para copiar uma string; Exemplo: strcpy(PARA ONDE VAI SER COPIADO, OQUE VAI SER COPIADO) == "STRING1" + "STRING2" = "STRING1STRING2"
// strcat | string concatenate = para contatenar uma string com outra; Exemplo: strcat(PRIMEIRA STRING, SEGUNDA STRING)
int main(void) {
    char nomes[3][20], copia[20];
    int tam = 0, tamMaiorNome = 0;
    int comp = 0;
    int njoels = 0;

    for (int i = 0; i < 3; i++) {
        printf("Qual o seu nome? ");
        scanf("%s", nomes[i]);
        tam = strlen(nomes[i]);
        printf("Tamanho nome: %d\n", tam);
        if (tam > tamMaiorNome) {
            tamMaiorNome = tam;
            strcpy(copia, nomes[i]); // para copiar a string nomes[i] na variavel copia
        }
        comp = strcmp(nomes[i], "joel"); // strcasecomp() = para comparar com letras capitalizadas
        if (comp == 0) {
            njoels++;
        }
        strcat(nomes[i],"br"); // para juntar a string nomes[i] com um "br" no final
    }
    printf("Quantidade de Joels: %d\n", njoels);
    printf("Maior quantidade de caracteres cadastrado: %d\n", tamMaiorNome);
    return 0;
}
// int main(void) {
//     char nomes[3][30];
//     for (int i = 0; i < 3; i++) {
//         printf("Qual o seu nome?");
//         scanf("%s", nomes[i]);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("Nome %d: %s\n", i+1, nomes[i]);
//     }
//     return 0;
// }