#include <stdio.h>

int main(void) {
    char resposta, sexo;
    int quantSim = 0, quantNao = 0, quantSimF = 0, quantNaoM = 0, quantidade = 0;
    float porcFemininoSim = 0, porcMasculinoNao = 0;
    
    for (int i = 0; i < 10;i++) {
        printf("Gostou do nosso produto? [ S / N ] ");
        scanf(" %c", &resposta);
        printf("Qual o seu sexo? [ M / F ] ");
        scanf(" %c", &sexo);
        if (resposta == 's' || resposta == 'S') {
            quantSim++;
            if (sexo == 'f' || sexo == 'F') {
                quantSimF++;
            }
        } else{
            quantNao++;
            if (sexo == 'm' || sexo == 'M') {
                quantNaoM++;
            }
        }
    }
    porcFemininoSim = (quantSimF * 100) / 10;
    porcMasculinoNao = (quantNaoM * 100) / 10;
    printf("Quantidade de pessoas que responderam sim: %d\nQuantidade de pessoas que responderam nao: %d\nPorcentagem de pessoas do sexo feminino que responderam sim: %.2f%%\nPorcentagem de pessoas do sexo masculino que responderam nao: %.2f%%", quantSim, quantNao, porcFemininoSim, porcMasculinoNao);
    return 0;
}
