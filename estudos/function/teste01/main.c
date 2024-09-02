// #include <stdio.h> // EXERCÍCIO 1

// float produto(float n1, float n2) {
//     return printf("%.2f", n1 * n2);
// }

// int main(void) {
//     float n1 = 0, n2 = 0;

//     printf("Digite o primeiro valor:");
//     scanf("%f", &n1);
//     printf("Digite o segundo valor:");
//     scanf("%f", &n2);

//     produto(n1,n2);
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 2

// int urnaEletronica(idade) {
//     if (idade >= 18 && idade <= 70) {
//         return 1;
//     } else {
//         return 0;
//     }    
// }

// int main(void) {
//     int idade = 0;
//     printf("Digite a sua idade: ");
//     scanf("%d", &idade);
//     if (urnaEletronica(idade) == 1) {
//         printf("Pode votar!");
//     } else {
//         printf("Nao pode votar");
//     }
//     return 0;
// }

#include <stdio.h> // EXERCÍCIO 3

int days(int dd,int  mm,int yyyy) {
    yyyy = yyyy * 365;
    mm = mm * 30;
    int res = dd + mm + yyyy;
    return res;
}

int main(void) {
    int anos = 0;
    int meses = 0;
    int dias = 0;
    
    printf("Quantos anos de idade voce tem?");
    scanf("%d", &anos);
    printf("Quantos meses de idade voce tem?");
    scanf("%d", &meses);
    printf("Quantos dias de idade voce tem?");
    scanf("%d", &dias);

    printf("Voce tem ao todo %d dias de vida!", days(dias, meses, anos));
    return 0;
}