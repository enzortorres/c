// LER O NOME DE VÁRIAS PESSOAS, IDADE E SEXO. PEGAR A MEDIA DE IDADE, QUANTIDADE DO SEXO M, E O NOME DA MULHER COM A MAIOR IDADE

#include <stdio.h>

int main() {k
    char nome[20], sexo, nomeMaiorF[20], resp;
    float idade = 0, media = 0, idadeMaiorF = 0;
    int quantTot = 0, quantM = 0;
    
    do{ 
        printf("Digite o nome da pessoa: ");
        scanf("%s", &nome);
        printf("Digite a idade da pessoa cadastrada: ");
        scanf("%f", &idade);
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            if (idade > idadeMaiorF) {
                nomeMaiorF[20] = nome;
            }
        }
        else if (sexo = 'M' || sexo == 'm') {
            quantM++;
        }
        media += idade;
        quantTot++;
        printf("Deseja continuar? [ S / N ] ");
        scanf(" %c", &resp);
    } while (resp == 'S' || resp == 's');
    media = media / quantTot;
    printf("Media de idade das pessoas cadastrada: %.2f\n", media);
    printf("Quantidade de homens cadastrados: %i\n", quantM);
    printf("Nome da mulher com maior idade: %s\n", nome);

    return 0;
}