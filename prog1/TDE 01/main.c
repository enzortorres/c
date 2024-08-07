// LISTA 1 PROG 1  

#include <stdio.h> //EXERCÍCIO 1

int main(void){
    int v1 = 0;
    int v2 = 0;

    v1 = ++v2;
    printf("A primeira variavel recebeu o valor da segunda varivel(0) + 1. Passou a ser: %d\n", v1);
    v2 = ++v1;
    printf("A segunda variavel recebeu o valor da prmeira varivel(1) + 1. Passou a ser: %d\n", v1);

    return 0; 
}



#include <stdio.h> //EXERCÍCIO 2

int main(void) {
    int number = 0;

    printf("Digite um numero para ver o seu sucessor e seu antecessor: ");
    scanf("%d", &number);
    printf("Antecessor: %d\nNumero digitado: %d\nSucessor: %d", number-1, number, number+1);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 3

int main(void) {
    float valor = 0, taxaServico = 0, total = 0;

    printf("Digite o valor da conta: R$");
    scanf("%f", &valor);
    taxaServico = (valor * 0.10);
    total = (valor + taxaServico);

    printf("Valor da conta: R$%.2f\nTaxa de servico: R$%.2f\nValor total: R$%.2f", valor, taxaServico, total);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 4
#define pi 3.14

int main(void) {    
    float raio = 0, perimetro = 0, area = 0;
    printf("Digite o raio do circulo em centimetros: ");
    scanf("%f", &raio);

    perimetro = (2 * pi * raio);
    area = (pi * raio * raio);

    printf("Raio do circulo: %.2fcm\nPerimetro do circulo: %.2fcm\nArea do circulo: %.2fcm", raio, perimetro, area);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 5

int main(void) {
    float tempC = 0, tempF = 0;

    printf("Digite uma temperatura em CELSIUS: ");
    scanf("%f", &tempC);
    tempF = (9*tempC+160) / 5;

    printf("A temperatura em CELSIUS (%.2f) convertida para FAHRENHEIT fica %.2f", tempC, tempF);

    return 0;
}



#include <stdio.h> //EXERCÍCIO 6

int main(void) {
    int cod = 0;
    float precoKw = 0;
    float quantKw = 0;
    float total = 0;

    printf("Qual o codigo de consumidor? ");
    scanf("%d", &cod);
    printf("Qual o preco do KW? ");
    scanf("%f", &precoKw);
    printf("Qual a quantidade de KW consumida? ");
    scanf("%f", &quantKw);
    total = (precoKw * quantKw);

    if (total <= 21.23) {
        total = 21.23;
        printf("Consumidor: %d\nA quantidade consumida nao atingiu o minimo.\nTotal a pagar: R$%.2f", cod, total);
    }
    else{
        printf("Consumidor: %d\nTotal a pagar: R$%.2f", cod, total);
    }
    return 0;
}



#include <stdio.h> //EXERCÍCIO 7

int main(void) {
    int num1 = 0, num2 =0, maior = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Os numeros digitados sao iguais!");
    } else if (num1 > num2) {
        maior = num1;
        printf("O maior numero e o %d", maior);
    } else {
        maior = num2;
        printf("O maior numero e o %d", maior);
    }
    return 0;
}



#include <stdio.h> //EXERCÍCIO 8

int main(void) {
    float av1=0, av2=0, media=0;

    printf("Digite a nota da AV1 do aluno: ");    
    scanf("%f", &av1);
    printf("Digite a nota da AV2 do aluno: ");    
    scanf("%f", &av2);
    media = (av1 + av2) / 2;

    printf("\nAV1: %.2f\nAV2: %.2f\nMEDIA: %.2f\n", av1, av2, media);

    if (media >= 6) {
        printf("APROVADO!");
    } else if (media > 5 && media < 6) {
        printf("NECESSIDADE DA AV3!");
    } else {
        printf("REPROVADO!");
    }
    return 0;
}



#include <stdio.h> //EXERCÍCIO 9 ( PERGUNTAR SE TEM UMA FORMA MAIS OTIMIZADA )

int main(void) {
    float num1=0, num2=0, num3=0, maior=0, meio=0, menor=0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);
    // MAIOR
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else if (num3 > num1 && num3 > num2) {
        maior = num3;
    }
    // MEIO
    if (num1 < num2 && num1 > num3 || num1 > num2 && num1 < num3) {
        meio = num1;
    } else if (num2 < num1 && num2 > num3 || num2 > num1 && num2 < num3) {
        meio = num2;
    } else if (num3 < num1 && num3 > num2 || num3 > num1 && num3 < num2) {
        meio = num3;
    }
    // MENOR
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else if (num3 < num1 && num3 < num2) {
        menor = num3;
    }
    printf("Ordem crescente dos numeros:\n%.2f ~ %.2f ~ %.2f", maior, meio, menor);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 10

int main(void) {
    float n1=0, n2=0, res=0;
    char oper;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Deseja realizar qual operacao ( +, -, *, / )? ");
    scanf(" %c", &oper);
    switch (oper) {
        case '+':
            res = n1 + n2;
            printf("O resultado de %.2f %c %.2f = %.2f", n1, oper, n2, res);
        break;

        case '-':
            res = n1 - n2;
            printf("O resultado de %.2f %c %.2f = %.2f", n1, oper, n2, res);
        break;

        case '*':
            res = n1 * n2;
            printf("O resultado de %.2f %c %.2f = %.2f", n1, oper, n2, res);
        break;

        case '/':
            if ( n1 == 0 || n2 == 0) {
            printf("Nao pode realizar divisao com 0");
            } else {
                res = n1 / n2;
                printf("O resultado de %.2f %c %.2f = %.2f", n1, oper, n2, res);
            }
        break;

        default:
        break;
    }
    return 0;
}



#include <stdio.h> //EXERCÍCIO 11

int main(void) {
    float valorConta = 0, valorAgua = 0, aguaConsumo = 0;
    char tipoConsumidor;
    int conta = 0;

    printf("Calculadora de conta de agua\n\n");

    printf("Digite o numero da conta: ");
    scanf("%d", &conta);

    printf("Digite o consumo de agua por metros cubicos (m3): ");
    scanf("%f", &aguaConsumo);

    printf("Digite o tipo de consumo: \n\n1) Residencial\n2) Comercial\n3) Industrial\n\n-> ");
    scanf(" %c", &tipoConsumidor);

    switch (tipoConsumidor) {
        case '1':
            valorAgua = 0.05;
            valorConta = 5 + (aguaConsumo * valorAgua);
        break;

        case '2':
            if (aguaConsumo > 80) {
                valorAgua = 0.25;
                valorConta = 500 + ((aguaConsumo - 80) * valorAgua);
            } else {
                valorAgua = 6.25;
                valorConta = aguaConsumo * valorAgua; // OU valorConta = 500; CASO SEJA 500 o mínimo
            }
        break;

        case '3':
            if (aguaConsumo > 100) {
                valorAgua = 0.04;
                valorConta = 800 + ((aguaConsumo - 100) * valorAgua);
            } else {
                valorAgua = 8;
                valorConta = aguaConsumo * valorAgua; // OU valorConta = 800; CASO SEJA 800 O MINIMO
            }
        break;

        default:
        break;
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CONTA:   %d\nCONSUMO: %.2fm3\nTOTAL:   R$%.2f\n", conta, aguaConsumo, valorConta); 
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    return 0;
}



#include <stdio.h> //EXERCÍCIO 12

int main(void) {
    float preco = 0, precoFinal = 0;
    char diaSemana = ' ', catFilm = ' ';

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("< Calculadora preco alocadora >\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n"); 

    printf("Preco: R$");
    scanf("%f", &preco);

    printf("Categoria filme:\n\n1) Comum\n2) Lancamento\n\n=> ");
    scanf(" %c", &catFilm);

    printf("Dia da semana alocado:\n\n2) Segunda\n3) Terca\n4) Quarta\n5) Quinta\n6) Sexta\n7) Sabado\n1) Domingo\n\n=> ");
    scanf(" %c", &diaSemana);

    switch (catFilm) {
        case '1':
            preco = preco;
        break;

        case '2':
            preco += (preco * 0.15);
        break;

        default:
        break;
    }
    switch (diaSemana) {
        case '2':
            precoFinal = preco - (preco * 0.40);
        break;

        case '3':
            precoFinal = preco - (preco * 0.40);
        break;

        case '4':
            precoFinal = preco;
        break;

        case '5':
            precoFinal = preco - (preco * 0.40);
        break;

        case '6':
            precoFinal = preco;
        break;

        case '7':
            precoFinal = preco;
        break;

        case '1':
            precoFinal = preco;
        break;

        default:
        break;
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("         TOTAL: R$%.2f\n", precoFinal);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}



#include <stdio.h> //EXERCÍCIO 13

int main(void) {
    int i = 0;
    float a = 0, b = 0, c = 0, maior = 0, meio = 0, menor = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    printf("Deseja ver os numeros de forma crescente (1), decrescente (2) ou que o maior numero fique no meio (3)? ");
    scanf("%d", &i);

    // MAIOR 
    if (a > b && a > c) {
        maior = a;
    } else if (b > a && b > c) {
        maior = b;
    } else if (c > a && c > b) {
        maior = c;
    }
    // MEIO 
    if ((a < b && a > c) || (a > b && a < c)) {
        meio = a;
    } else if ((b < a && b > c) || (b > a && b < c)) {
        meio = b;
    } else if ((c < a && c > b) || (c > a && c < b)) {
        meio = c;
    }
    // MENOR 
    if (a < b && a < c) {
        menor = a;
    } else if (b < a && b < c) {
        menor = b;
    } else if (c < a && c < b) {
        menor = c;
    }

    switch(i) {
        case 1:
            printf("Ordem crescente: %.2f, %.2f, %.2f", menor, meio, maior);
            break;
        case 2:
            printf("Ordem decrescente: %.2f, %.2f, %.2f", maior, meio, menor);
            break;
        case 3:
            printf("O maior numero no meio: %.2f, %.2f, %.2f", menor, maior, meio);
            break;
        default:
            printf("Digite uma opcao correta!");
    }

    return 0;
}



#include <stdio.h> //EXERCÍCIO 14

int main(void) {
    char respUm, respDois, respTres, respQuatro;
    float valorCarro = 0, valorFinalCarro = 0, valorCostum = 0;

    printf("Digite o valor do carro: ");
    scanf("%f", &valorCarro);

    printf("Deseja ter ar condicionado? R$1750,00 [S / N]\n->");
    scanf(" %c", &respUm);
    if (respUm == 'S' || respUm == 's') {
        valorCostum += 1750;
    }
    printf("Deseja pintura metalica? R$800,00 [S / N]\n->");
    scanf(" %c", &respDois);
    if (respDois == 'S' || respDois == 's') {
        valorCostum += 800;
    }
    printf("Deseja ter vidro eletrico? R$1200,00 [S / N]\n->");
    scanf(" %c", &respTres);
    if (respTres == 'S' || respTres == 's') {
        valorCostum += 1200;
    }
    printf("Deseja ter direcao hidraulica? R$2000,00 [S / N]\n->");
    scanf(" %c", &respQuatro);
    if ( respQuatro == 'S' || respQuatro == 's') {
        valorCostum += 2000;
    }
    valorFinalCarro = valorCarro + valorCostum;
    printf("VALOR CARRO: %.2f\nVALOR COSTUMIZACAO: %.2f\nVALOR TOTAL: %.2f", valorCarro, valorCostum, valorFinalCarro);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 15
float number = 0, total = 0;
int quantNum = 0;

int main(void) {
    do {
        printf("Digite um numero ( 0 para encerrar ): ");
        scanf("%f", &number);
        if (number != 0) {
        total += number;
        quantNum++;
        }
    } while (number != 0);
    printf("Voce digitou %d numeros, a soma entre eles e %.2f", quantNum, total);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 16

int main (void) {
    float number = 0, quantNum = 0, media = 0;

    do { 
        printf("Digite um numero ( 0 para encerrar ): ");
        scanf("%f", &number);
        if (number != 0) {
            quantNum++;
            media += number;
        }
    } while (number != 0);
    media = media / quantNum;
    printf("Voce digitou %.0f numeros, e a media desses numeros e %.2f", quantNum, media);
    return 0;
}



#include <stdio.h> //EXERCÍCIO 17

int main(void){
    float idade = 0, quantIdade = 0, quantMaiorIdade = 0, mediaIdadeMaior = 0, somaMaiorIdade = 0;
    int index = 0;
    do { 
        index++;
        printf("Digite a idade da %d pessoa ( 0 para encerrar ): ", index);
        scanf("%f", &idade);
        if (idade != 0) {
            if (idade >= 18) {
                quantMaiorIdade++;
                somaMaiorIdade += idade;
            }
        quantIdade++;
        }
    } while ( idade != 0);
    mediaIdadeMaior = somaMaiorIdade / quantMaiorIdade;
    printf("Voce digitou a idade de %.0f pessoas, sendo %.0f delas, maiores de idade.\nA soma das idades das pessos maiores de idade: %.0f\nA media de idade das pessoas maiores de idade: %.2f", quantIdade, quantMaiorIdade, somaMaiorIdade, mediaIdadeMaior);
    return 0;
}




#include <stdio.h> // EXERCÍCIO 18

int main(void) {
    float numeroConsumidor = 0,quantGeralKwhMes = 0, totalGeralValor = 0, maiorQuantKw = 0, menorQuantKw = 0, maiorValorPago = 0, menorValorPago = 0, mediaGeralConsumo = 0, mediaGeralValor = 0, quantConsumidor = 0;

    do {
        float precoKwh = 0, quantKwhMes = 0, totalPessoalValor = 0;
        printf("Digite o numero do consumidor ( 0 para encerrar ): ");
        scanf("%f", &numeroConsumidor);
        if (numeroConsumidor != 0) {
            printf("Digite o preco do kWh: ");
            scanf("%f", &precoKwh);
            if (precoKwh != 0 && precoKwh > 0){
                printf("Digite a quantidade de kW consumido no mes: ");
                scanf("%f", &quantKwhMes);
                if ( quantKwhMes != 0 && quantKwhMes > 0) {
                    totalPessoalValor = precoKwh * quantKwhMes;
                    if ( quantKwhMes > maiorQuantKw) {
                        maiorQuantKw = quantKwhMes;
                        maiorValorPago = totalPessoalValor;
                    }
                    if ( quantKwhMes < menorQuantKw || menorQuantKw == 0) {
                        menorQuantKw = quantKwhMes;
                        menorValorPago = totalPessoalValor;
                    }
                }
            }
        quantGeralKwhMes += quantKwhMes;
        totalGeralValor += totalPessoalValor;
        printf("Total a pagar: R$%.2f\n", totalPessoalValor);
        quantConsumidor++;
        }
    } while (numeroConsumidor != 0);
    mediaGeralValor =  totalGeralValor / quantConsumidor;
    mediaGeralConsumo = quantGeralKwhMes / quantConsumidor;
    printf("Maior consumo verificado: %.2fKw | R$%.2f\nMenor consumo verificado: %.2fKw | R$%.2f\nMedia geral de consumo: %.2fKw | R$%.2f", maiorQuantKw, maiorValorPago, menorQuantKw, menorValorPago, mediaGeralConsumo, mediaGeralValor);
    return 0;
}



#include <stdio.h> // EXERCÍCIO 19

int main(void) {
    int num = 0, mult = 0, result = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    do {
        mult++;
        result = num * mult;
        printf("%d x %d = %d\n", num, mult, result);
    } while (mult != 10);
    return 0;
}


#include <stdio.h> // EXERCÍCIO 20
#include <time.h>

int main(void) {
    int choice = 0;
    do {
        printf("X-==| MENU |==-X\n");
        printf("Escolha uma opcao:\n0) Opcao 0\n1) Opcao 1\n2) Encerrar programa\n->");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Opcao 0 escolhida\n");
                sleep(1);
                break;
            case 1: 
                printf("Opcao 1 escolhida\n");
                sleep(1);
                break;
            default:
                printf("Fim da execucao!\n");
                sleep(1);
        }
    } while (choice == 0 || choice == 1);

    return 0;
}