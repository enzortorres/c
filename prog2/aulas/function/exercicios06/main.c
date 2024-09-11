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

// int idade = 0;

// void obrigadoAVotar(int idade);

// int main(void) {
//     printf("Digite a sua idade: ");
//     scanf("%d", &idade);
//     obrigadoAVotar(idade);
//     return 0;
// }

// void obrigadoAVotar(int idade) {
//     if (idade >= 18 && idade <= 70) {
//         printf("Voce eh obrigado a votar!");
//     } else {
//         printf("Voce nao eh obrigado a votar");
//     }
// }



#include <stdio.h> // EXERCÍCIO 3

int diasDeVida(int year, int month, int days);

int main(void) {
    int year = 0, month = 0, day = 0;

    printf("Digite quantos anos vc tem: ");
    scanf("%d", &year);
    printf("Digite quantos meses vc tem: ");
    scanf("%d", &month);
    printf("Digite quantos dias vc tem: ");
    scanf("%d", &day);
    printf("Voce tem %d dias de vida!", diasDeVida(year, month, day));
}

int diasDeVida(int years, int months, int days) {
    int totalDias = (years * 365) + (months * 30) + days;
    return totalDias;
}

