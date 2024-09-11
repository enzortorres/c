// #include <stdio.h> // EXERCÍCIO 1

// int multiplicacao(int x, int y);

// int main(void) {
//     int n1 = 0, n2 = 0, res = 0;

//     printf("Digite um valor: ");
//     scanf("%d", &n1);
//     printf("Digite outro valor: ");
//     scanf("%d", &n2);
//     res = multiplicacao(n1,n2);
//     printf("%d\n", res);
// }

// int multiplicacao(int n1, int n2) {
//     int total = n1 * n2;
//     return total;
// }




// #include <stdio.h> // EXERCICIO 2


// void verificarVotacao(int idade);

// int main(void) {
//     int idade = 0;
//     printf("Digite a sua idade: ");
//     scanf("%d", &idade);
//     verificarVotacao(idade);
//     return 0;
// }

// void verificarVotacao(int idade) {
//     if (idade >= 18 && idade <= 70) {
//         printf("Voce eh obrigado a votar!");
//     } else {
//         printf("Voce nao eh obrigado a votar");
//     }
// }

// #include <stdio.h> // EXERCÍCIO 3

// int diasDeVida(int year, int month, int days);

// int main(void) {
//     int year = 0, month = 0, day = 0;

//     printf("Digite quantos anos vc tem: ");
//     scanf("%d", &year);
//     printf("Digite quantos meses vc tem: ");
//     scanf("%d", &month);
//     printf("Digite quantos dias vc tem: ");
//     scanf("%d", &day);
//     printf("Voce tem %d dias de vida!", diasDeVida(year, month, day));
// }

// int diasDeVida(int years, int months, int days) {
//     int totalDias = (years * 365) + (months * 30) + days;
//     return totalDias;
// }




#include <stdio.h>

float precoCamisa(char tamanho, char sexo);

int main(void) {
    char sexo, tamanho;
    float total = 0;
    
    printf("Digite o seu sexo: ");
    scanf(" %c", &sexo);
    printf("Digite o tamanho da camisa desejada: ");
    scanf(" %c", &tamanho);
    total = precoCamisa(tamanho, sexo);
    if(total != 0) {
        printf("O preço da camisa %c para o sexo %c é R$%.2f\n", tamanho, sexo, total);
    } 

    return 0;
}

float precoCamisa(char tamanho, char sexo) {
    float valor = 0;
    if (sexo == 'M' || sexo == 'm') {
        switch(tamanho) {
            case 'p':
            case 'P':
                valor = 22.25;
                break;
            case 'm':
            case 'M':
                valor = 27.15;
                break;
            case 'g':
            case 'G':
                valor = 40;
                break;
            default:
                printf("Tamanho digitado invalido!\n");
        }
    } else if (sexo == 'F' || sexo == 'f') {
        switch(tamanho) {
            case 'p':
            case 'P':
                valor = 28.75;
                break;
            case 'm':
            case 'M':
                valor = 39.99;
                break;
            case 'g':
            case 'G':
                valor = 51;
                break;
            default:
                printf("Tamanho digitado invalido!\n");
        }
    } else {
        printf("Sexo digitado invalido!\n");
    }
    return valor;
}