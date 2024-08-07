#include <stdio.h>
#include <string.h>
// FUNÇõES DA BIBLIOTECA <string.h>
// strlen | string length = para ver o tamanho da string; Exemplo: strlen(STRING QUE DESEJA CONTAR OS CARACTERES), atribui o tamanho da string dentro de uma variavél (variavel inteira "tamanho");
// strcmp | string compare = para comparar strings; Exemplo: strcmp(PRIMEIRA COMPARAÇÃO, SEGUNDA COMPARAÇÃO) se for igual, retorna o valor 0, caso o contrario 1, atribui o valor numa variavel = compare = strcmp(primeira comparacao, segunda comparacao)
// strcpy | string copy = para copiar uma string; Exemplo: strcpy(PARA ONDE VAI SER COPIADO, OQUE VAI SER COPIADO)
// strcat | string concatenate = para contatenar uma string com outra; Exemplo: strcat(PRIMEIRA STRING, SEGUNDA STRING) = "PRIMEIRASTRINGSEGUNDASTRING"
int main(void) {
    char nomes[3][20], copia[20];
    int tam = 0, tamMaiorNome = 0;
    int teste = 0;
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
        teste = strcmp(nomes[i], "joel"); // strcasecmp() = para comparar com letras capitalizadas
        if (teste == 0) { 
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