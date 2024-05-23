#include <stdio.h> // EXERCÍCIO 3
// IF VALOR > 50 - DESCONTO(15% PENSIONISTAS, 10% APOSENTADOS E 5% GESTANTES)
// IF VALOR <= 50 - DESCONTO(10% PENSIONISTAS, 5% APOSENTADOS E 0% GESTANTES)
int main(void) {
    float valor = 0, valorFinal = 0, desconto = 0;
    char situacao;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Voce se encaixa em alguma situacao?\nA) Pensionista\nB) Aposentado\nC) Gestante\nD) Nao me encaixo em nenhuma situacao citada\n->");
    scanf(" %c", &situacao);

    if (valor > 50) {
        switch (situacao) { 
            case 'A':
            case 'a':
                desconto = valor * 0.15;
                valorFinal = valor - desconto;
                printf("A partir de R$50,00 de compra, pensionistas recebem um desconto de 15%%\nDe R$%.2f passou a ser R$%.2f",valor, valorFinal);
                break;
            case 'B':
            case 'b':
                desconto = valor * 0.10;
                valorFinal = valor - desconto;
                printf("A partir de R$50,00 de compra, aposentados recebem um desconto de 10%%\nDe R$%.2f passou a ser R$%.2f", valor, valorFinal);
                break;
            case 'C':
            case 'c':
                desconto = valor * 0.05;
                valorFinal = valor - desconto;
                printf("A partir de R$50,00 de compra, gestantes recebem um desconto de 5%%\bDe R$%.2f passou a ser R$%.2f", valor, valorFinal);
                break;
            default:
                printf("Valor original, R$%.2f", valor);
        }
    } 
    else {
        switch (situacao) {
            case 'A':
            case 'a':
                desconto = valor * 0.10;
                valorFinal = valor - desconto;
                printf("Abaixo ou igual a R$50,00 de compra, pensionistas recebem um desconto de 15%%\nDe R$%.2f passou a ser R$%.2f",valor, valorFinal);
                break;
            case 'B':
            case 'b':
                desconto = valor * 0.05;
                valorFinal = valor - desconto;
                printf("Abaixo ou igual a R$50,00 de compra, aposentados recebem um desconto de 10%%\nDe R$%.2f passou a ser R$%.2f", valor, valorFinal);
                break;
            case 'C':
            case 'c':
                printf("Abaixo ou igual a R$50,00 de compra, gestantes nao recebem desconto\nValor final: R$%.2f", valor, valorFinal);
                break;
            default:
                printf("Valor original, R$%.2f", valor);
        }
    }
    return 0;
}

#include <stdio.h> // EXERCÍCIO 4
float valorBase = 30, valorAdd = 0;
int add = 0;
char resp;
int main(void) {
    printf("Seja bem-vindo a pizzaria Tutti Amici!\n");
    printf("Aqui voce monta usa propria pizza! Comecando pelo valor base de R$30,00!\n\n");
        printf("       Cardapio de adicionais:\n\nCodigo     Item          Preco extra\n\n1        Queijo           R$5,00\n2        Bacon            R$3,00\n3        Tomate           R$2,00\n4        Azeitona         R$2,50\n5        Calabresa        R$5,00\n6        Borda Recheada   R$4,00\n");
    do{
        add = 0;
        printf("Deseja adicionar algo (Codigo do item)? ");
        scanf("%i", &add);
        switch (add) {
            case 1:
                valorAdd += 5;
                printf("\nQueijo adicionado!\n");
                break;
            case 2:
                valorAdd += 3;
                printf("\nBacon adicionado!\n");
                break;
            case 3:
                valorAdd += 2;
                printf("\nTomate adicionado!\n");
                break;
            case 4:
                valorAdd += 2.5;
                printf("\nAzeitona adicionada!\n");
                break;
            case 5:
                valorAdd += 5;
                printf("\nCalabresa adicionada!\n");
                break;
            case 6:
                valorAdd += 4;
                printf("\nBorda recheada adicionada!\n");
                break;
            default:
                printf("Digite um codigo valido!\n");
                printf("       Cardapio de adicionais:\n\nCodigo     Item          Preco extra\n\n1        Queijo           R$5,00\n2        Bacon            R$3,00\n3        Tomate           R$2,00\n4        Azeitona         R$2,50\n5        Calabresa        R$5,00\n6        Borda Recheada   R$4,00\n");
        } 
        printf("\nDeseja continuar (S / N)? ");
        scanf(" %c", &resp);
    } while (resp == 'S' || resp == 's');
    printf("Custo de itens adicionais: R$%.2f\nValor Total: R$%.2f",valorAdd, valorBase + valorAdd);
    return 0;
}