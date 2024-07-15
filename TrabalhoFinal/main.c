#include <stdio.h>

int main(void) {
    float valorTotalVenda[5], valorTotal = 0, valorTotalCamisaP = 0, mediaTotal = 0, abaixoDe = 0;
    char tamanhoCamisa[5], voltarMenu = 'S';
    int qtdCamisa[5], codVenda[5], digitado = 0, teste, tipoVenda[5], menuCodigo = 0, menu = 0;
    int qtdAbaixoDe = 0, qtdAcima100 = 0, qtdCamisaP = 0, qtdCamisaM = 0, qtdCamisaG = 0;
    int qtdCamisaTotal = 0, qtdTipoVendaImpar = 0, maiorQtdTipoVenda = 0;
    int qtdTipo[5] = {0}, maiorQtdTipoVendaTeste = 0;

    for (int i = 0; i < 5; i++) {
        do {
            teste = 0;
            printf("Digite o codigo da %da venda (1 a 5): ", i + 1);
            scanf("%d", &digitado);
            if (digitado < 1 || digitado > 5) {
                printf("Codigo invalido!\n");
                teste = 1;
            }
            for (int j = 0; j < i; j++) {
                if (digitado == codVenda[j]) {
                    printf("Codigo ja cadastrado!\n");
                    teste = 1;
                    break;
                }
            }
        } while (teste == 1);
        codVenda[i] = digitado;

        do {
            teste = 0;
            printf("Tamanho da camisa (P / M / G): ");
            scanf(" %c", &tamanhoCamisa[i]);
            switch (tamanhoCamisa[i]) {
                case 'p':
                case 'P':
                    printf("Quantidade de camisas P: ");
                    scanf("%d", &qtdCamisa[i]);
                    qtdCamisaP++;
                    break;
                case 'm':
                case 'M':
                    printf("Quantidade de camisas M: ");
                    scanf("%d", &qtdCamisa[i]);
                    qtdCamisaM++;
                    break;
                case 'g':
                case 'G':
                    printf("Quantidade de camisas G: ");
                    scanf("%d", &qtdCamisa[i]);
                    qtdCamisaG++;
                    break;
                default:
                    printf("Tamanho de camisa invalido.\n");
                    teste = 1;
            }
        } while (teste == 1);
        printf("Valor total da venda: R$");
        scanf("%f", &valorTotalVenda[i]);
        do {
            printf("\nTipo de venda\n1- A vista\n2- Parcelado\n3- Delivery a vista\n4- Delivery parcelado\n5- Venda online\n-> ");
            scanf("%d", &tipoVenda[i]);
            if (tipoVenda[i] < 1 || tipoVenda[i] > 5) {
                printf("Tipo de venda invalido!\n");
            }
        } while (tipoVenda[i] < 1 || tipoVenda[i] > 5);

        printf("Venda %d cadastrada com sucesso!\n\n", i + 1);
    }
    for (int i = 0; i < 5; i++) {
        qtdTipo[tipoVenda[i] - 1]++;
        if (qtdTipo[tipoVenda[i] - 1] > maiorQtdTipoVendaTeste) {
            maiorQtdTipoVendaTeste = qtdTipo[tipoVenda[i] - 1];
            maiorQtdTipoVenda = tipoVenda[i];
        }
    }
    do {
        printf("\n-=x MENU x=-\n");
        printf("1- Ver informacoes de todas vendas\n2- Ver informacoes de uma venda especifica\n-> ");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                for (int i = 0; i < 5; i++) {
                    printf("\n-=x %d VENDA x=-\n", i + 1);
                    printf("Codigo de venda: %d\n", codVenda[i]);
                    printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
                    printf("Quantidade de camisas: %d\n", qtdCamisa[i]);
                    printf("Valor total venda: R$%.2f\n", valorTotalVenda[i]);
                    switch (tipoVenda[i]) {
                        case 1:
                            printf("Tipo de venda: A vista");
                            break;
                        case 2:
                            printf("Tipo de venda: Parcelado");
                            break;
                        case 3:
                            printf("Tipo de venda: Delivery a vista");
                            break;
                        case 4:
                            printf("Tipo de venda: Delivery parcelado");
                            break;
                        case 5:
                            printf("Tipo de venda: Venda online");
                            break;
                    }
                    printf("\n-=x FIM x=-\n");
                }
                break;
            case 2:
                printf("Digite o codigo unico do produto que deseja ver: ");
                scanf("%d", &menuCodigo);
                if (menuCodigo < 1 || menuCodigo > 5) {
                    printf("Codigo unico nao cadastrado!\n");
                    printf("Deseja voltar para o menu [S / N]? ");
                    scanf(" %c", &voltarMenu);
                    if (voltarMenu == 's' || voltarMenu == 'S') {
                        teste = 1;
                        break;
                    } else if (voltarMenu == 'n' || voltarMenu == 'N') {
                        teste = 0;
                        break;
                    }
                }
                teste = 0;
                for (int i = 0; i < 5; i++) {
                    if (menuCodigo == codVenda[i]) {
                        printf("\n-=x %d VENDA x=-\n", i + 1);
                        printf("Codigo de venda: %d\n", codVenda[i]);
                        printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
                        printf("Quantidade de camisas: %d\n", qtdCamisa[i]);
                        printf("Valor total venda: R$%.2f\n", valorTotalVenda[i]);
                        switch (tipoVenda[i]) {
                            case 1:
                                printf("Tipo de venda: A vista");
                                break;
                            case 2:
                                printf("Tipo de venda: Parcelado");
                                break;
                            case 3:
                                printf("Tipo de venda: Delivery a vista");
                                break;
                            case 4:
                                printf("Tipo de venda: Delivery parcelado");
                                break;
                            case 5:
                                printf("Tipo de venda: Venda online");
                                break;
                        }
                        printf("\n-=x FIM x=-\n");
                    }
                }
                break;
            default:
                teste = 0;
                break;
        }
        printf("\nDeseja voltar ao menu [S / N]? ");
        scanf(" %c", &voltarMenu);
        if (voltarMenu == 's' || voltarMenu == 'S') {
            teste = 1;
        } else if (voltarMenu == 'n' || voltarMenu == 'N') {
            teste = 0;
        }
        if (teste == 0) {
            printf("\nDigite um valor para saber a quantidade de vendas abaixo do preco digitado: ");
            scanf("%f", &abaixoDe);
            for (int i = 0; i < 5; i++) {
                if (valorTotalVenda[i] > 100) {
                    qtdAcima100++;
                }
                if (valorTotalVenda[i] < abaixoDe) {
                    qtdAbaixoDe++;
                }
                if (tamanhoCamisa[i] == 'p' || tamanhoCamisa[i] == 'P') {
                    valorTotalCamisaP += valorTotalVenda[i];
                }
                valorTotal += valorTotalVenda[i];
                qtdCamisaTotal += qtdCamisa[i];
                if (tipoVenda[i] % 2 != 0) {
                    qtdTipoVendaImpar++;
                }
            }
            mediaTotal = valorTotal / 5;
            printf("\nQuantidades de vendas abaixo de R$%.2f: %d\n", abaixoDe, qtdAbaixoDe);
            printf("Quantidades de vendas a cima de R$100.00: %d\n", qtdAcima100);
            printf("Quantidades vendidas de camisas G: %d\n", qtdCamisaG);
            printf("Valor total das vendas de camisa de tamanho P: R$%.2f\n", valorTotalCamisaP);
            printf("Media total das vendas: R$%.2f\n", mediaTotal);
            printf("Quantidade total de camisas vendidas: %d\n", qtdCamisaTotal);
            printf("Quantidade de vendas com tipo de venda impar: %d\n", qtdTipoVendaImpar);
            switch (maiorQtdTipoVenda) {
                case 1:
                    printf("Tipo de venda mais vendido foi: A vista");
                    break;
                case 2:
                    printf("Tipo de venda mais vendido foi: Parcelado");
                    break;
                case 3:
                    printf("Tipo de venda mais vendido foi: Delivery a vista");
                    break;
                case 4:
                    printf("Tipo de venda mais vendido foi: Delivery parcelado");
                    break;
                case 5:
                    printf("Tipo de venda mais vendido foi: Venda online");
                    break;
            }
        }
    } while (teste == 1);

    printf("\n\nEncerrando programa...");
    return 0;
}
