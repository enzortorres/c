#include <stdio.h>
#include <time.h>

int main(void) {
    char resp, sexo, sexoMenorSalario;
    float salario = 0, media = 0, menorSalario = 0;
    int maiorIdade = 0, menorIdade = 0, idadeMenorSalario = 0, idade = 0, quant = 0, quantF = 0; 
    do {
        printf("\nIdade: ");
        scanf("%d", &idade);
        if (idade != 0) {
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
            if (idade < menorIdade || menorIdade == 0) {
                menorIdade = idade;
            }
            printf("Sexo [M/F] ");
            scanf(" %c", &sexo);
            if (sexo == 'F' || sexo == 'f') {
                quantF++;
            }
            printf("Salario: ");
            scanf("%f", &salario);
            media += salario;
            if (salario < menorSalario || menorSalario == 0) {
                menorSalario = salario;
                idadeMenorSalario = idade;
                sexoMenorSalario = sexo;
            }
        }
        quant++;
        printf("\nDeseja continuar ? [ S / N ] ");
        scanf(" %c", &resp);
    } while (resp == 's' || resp == 'S');
    media = media / quant;
    printf("ENCERRANDO O SISTEMA EM\n");
    printf("3...\n");
    sleep(1);
    printf("2...\n");
    sleep(1);
    printf("1...\n");
    sleep(1);
    printf("\na) MEDIA DOS SALARIOS: R$%.2f\nb) MENOR E MAIOR IDADE: %d | %d\nc) QUANTIDADE MULHERES: %d\nd) IDADE E SEXO DA PESSOA COM MENOR SALARIO: %d | %c\n", media, menorIdade, maiorIdade, quantF, idadeMenorSalario, sexoMenorSalario);
    return 0;
}