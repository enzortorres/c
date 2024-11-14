#include <stdio.h>

void createEmployeer(char nome[30], int idade);

int main(void) {
    char nome[50];
    int idade = 0;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // createEmployeer(nome, idade);
    return 0;
}

void createEmployeer(char nome[30], int idade) {
    FILE *file;
    file = fopen("funcionario.txt", "w");
    fprintf(file, "%s - %d anos.", nome, idade);
    fclose(file);
}

void listEmployeer(char nome[30], int idade) {
    FILE *file;
    char nome[30];
    file = fopen("funcionario.txt", "r");
    
    fscanf(file, "%s - %d anos.", &nome, &idade);
    printf("%s - %d anos.", nome, idade);
    fclose(file);
}