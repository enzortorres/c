#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    char nome[100];
    char sexo;
    int idade;
};

typedef struct Cliente cliente;

void cadastrar_vendas();
void informacao_venda_especifica();
void informacao_vendas();

int main(void) {
    int opcao = -1;

    do{
        printf("---------- MENU ----------\n");
        printf("1- Cadastrar nova venda(s)\n");
        printf("2- Ver informacoes de uma venda especifica\n");
        printf("3- Ver informacoes de todas as vendas\n");
        printf("4- Encerrar program\n");
        printf("-> ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("\033[1;31mOpção invalida, tente novamente!\033[0;m\n\n"); 
            while(getchar() != '\n');
            continue;
        }

        switch(opcao) {
            case 1: 
                cadastrar_vendas();
                break;
            
            case 2: 
                // informacao_venda_especifica();
                break;
            
            case 3: 
                // informacao_vendas();
                break;
            
            case 4: 
                printf("Saindo do programa...\n");
                break;

            default:
                printf("\033[1;31mOpção invalida, tente novamente!\033[0;m\n");
        }
    } while (opcao != 4);

    return 0;
}

void cadastrar_vendas() {
    int qtdVendas = 0;
    FILE *file = fopen("registro.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo");
        return;
    }
    
    printf("Quantas vendas deseja cadastrar? ");
    scanf("%d", &qtdVendas);
    getchar();

    cliente *venda = (cliente*) malloc (qtdVendas * sizeof(cliente));
    if (venda == NULL) {
        printf("ERRO! Memoria insuficiente!\n");
        return;
    }

    for (int i = 0; i < qtdVendas; i++) {
        char nome[50];
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        fprintf(file, "%s", nome);
    }
}

void informacao_venda_especifica() {
    char nome[50];
    printf("Nome do cliente: ");
    fgets(nome,sizeof(nome),stdin);
    printf("Todas as vendas feitas por este cliente: ");
    printf("A hora da compra: ");
    printf("A quantidade de itens em cada compra: ");
}

void informacao_vendas() {
    
}