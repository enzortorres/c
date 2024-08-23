// #include <stdio.h> // -==X EXERCÍCIO 1 X==-

// int main(void) {
//     int matrizA[2][4];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//             matrizA[i][j] *= 2;
//         }
//     }

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("[ %d ]", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 2 X==-

// int main(void) {
//     int matrizA[3][3];
//     int matrizB[3][3];
//     int matrizResultante[3][3];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz A:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz B:", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             matrizResultante[i][j] = (3 * matrizA[i][j]) - matrizB[i][j];
//         }
//     }

//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 3 X==-

// int main(void) {
//     int matrizA[2][5];
//     int matrizResultante[5][2];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 5; j++) {
//             printf("Valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 2; j++) {
//             matrizResultante[i][j] = matrizA[j][i];
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("[ %d ]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 4 X==-

// int main(void) {
//     int matrizA[4][2], matrizB[2][4], matrizResultante[4][4] = {0};

//     for (int i = 0; i < 4; i++) { // Pega os valores da matriz A
//         for (int j = 0; j < 2; j++)  {
//             printf("Digite o valor da %d linha e %d coluna da matrizA: ", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++) { // Pega os valores da matriz B
//         for (int j = 0; j < 4; j++)  {
//             printf("Digite o valor da %d linha e %d coluna da matrizB: ", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++) { // Faz o produto da matriz A com a matriz B
//         for (int j = 0; j < 4; j++) {
//             for (int k = 0; k < 2; k++) {
//                 matrizResultante[i][j] += matrizA[i][k] * matrizB[k][j];
//             }
//         }
//     }

//     printf("Matriz A:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz A
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matriz B:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz B
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matriz Resultante:\n");
//     for (int i = 0; i < 2; i++) { // Exibe a matriz resultante
//         for (int j = 0; j < 4; j++)  {
//             printf("[ %d ]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 5 X==-

// int main(void) {
//     // [0,0] [0,1] [0,2]
//     // [1,0] [1,1] [1,2]
//     // [2,0] [2,1] [2,2]
//     // [*] [0,1] [0,2]
//     // [*] [*] [1,2]
//     // [*] [*] [*]

//     int matriz[3][3];

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i < j) {
//                 printf("[ %d ]", matriz[i][j]);
//             } else {
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 6 X==-

// int main(void) {
//     // [0,0] [0,1] [0,2] [0,3]
//     // [1,0] [1,1] [1,2] [1,3]
//     // [2,0] [2,1] [2,2] [2,3]
//     // [3,0] [3,1] [3,2] [3,3]

//     // [soma] [0,1] [0,2] [0,3]
//     // [soma] [soma] [1,2] [1,3]
//     // [soma] [soma] [soma] [2,3]
//     // [soma] [soma] [soma] [soma]

//     int matriz[4][4], soma = 0;

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < i+1; j++) {
//             soma += matriz[i][j];
//         }
//     }

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nTriangulo inferior da diagonal principal, incluindo a diagonal principal:\n\n");
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < i+1; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSoma do triangulo inferior da diagonal principal, incluindo a diagonal principal: %d", soma);

//     return 0;
// }

// #include <stdio.h> // -==X EXERCÍCIO 7 X==-
// // [0,0][0,1][0,2]
// // [1,0][1,1][1,2]
// // [2,0][2,1][2,2]
// int main(void) {
//     int matriz[3][3], maior = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i + j <= 1) {
//                 if (matriz[i][j] > maior) {
//                     maior = matriz[i][j];
//                 }
//             }   
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("O maior valor da diagonal secundaria foi: %d", maior);
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 8

// int main(void) {
//     // [0,0] [0,1] [0,2] [x]
//     // [1,0] [1,1] [x] [1,3]
//     // [2,0] [x] [2,2] [2,3]
//     // [x] [3,1] [3,2] [3,3]
//     int matriz[4][4], qtd = 0;
//     float media = 0, soma = 0;
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//             if (i + j > 3) {
//                 soma += matriz[i][j];
//                 qtd++;
//             }
//         }
//         printf("\n");
//     }


//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     media = soma / qtd;
//     printf("Media: %.2f", media);
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 9

// float soma(float n1, float n2) {
//     return n1 + n2;
// }

// float subtracao(float n1, float n2) {
//     return n1 - n2;
// }

// float multiplicacao(float n1, float n2) {
//     return n1 * n2;
// }

// float divisao(float n1, float n2) {
//     if (n1 == 0 || n2 == 0) {
//         printf("ERRO! Nao pode realizar divisao por zero!\n");
//         return 0;
//     } else {
//         return n1 / n2;
//     }
// }

// int main(void) {
//     float number1 = 0;
//     float number2 = 0;
//     int oper = 0;

//     printf("Digite o primeiro valor: ");
//     scanf("%f", &number1);
//     printf("Digite o segundo valor: ");
//     scanf("%f", &number2);
//     printf("\nQual operacao deseja realizar?\n1- Soma\n2- Subtracao\n3- Multiplicaco\n4- Divisao\n->");
//     scanf(" %d", &oper);
//     printf("\n");

//     switch (oper) {
//         case 1:
//             printf("Resultado: %.2f", soma(number1, number2));
//             break;
//         case 2:
//             printf("Resultado: %.2f", subtracao(number1, number2));
//             break;
//         case 3:
//             printf("Resultado: %.2f", multiplicacao(number1, number2));
//             break;
//         case 4:
//             printf("Resultado: %.2f", divisao(number1, number2));
//             break;
//         default:
//             printf("Operador invalido!");
//     }

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 10

// int tabuada(int number) {
//     for (int i = 1; i <= number; i++) {
//         if (number == 0) {
//             printf("ERRO! Valor digitado invalido!\n");
//         } else {
//             printf("7 x %d = %d\n", i, 7 * i);
//         }
//     }
//     return 0;
// }

// int main(void) {
//     int number = 0;
    
//     printf("Digite um numero: ");
//     scanf("%d", &number);

//     printf("\n");

//     tabuada(number);
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 11

// int maior(int array[3]) {
//     int maior = 0;
//     for (int i = 0; i < 3; i++) {
//         if (array[i] > maior) {
//             maior = array[i];
//         }
//     }

//     printf("\nO maior valor digitado foi: %d\n", maior);
//     return 0;
// }

// int main(void) {
//     int numbers[3];

//     for (int i = 0; i < 3; i++) {
//         printf("Digite o %d valor: ", i+1);
//         scanf("%d", &numbers[i]);
//     }
//     maior(numbers);

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 12

// float aumento(float salario, char nivelExp) {
//     float aumento = 0;

//     switch (nivelExp) {
//         case 's':
//             aumento = 0.05;
//             break;
//         case 'p':
//             aumento = 0.010;
//             break;
//         case 'j':
//             aumento = 0.15;
//             break;
//         default:
//             printf("ERRO! Nivel de experiencia inválido!");
//             return salario;
//     }

//     float valorAumento = salario * aumento;
//     return salario + valorAumento;
// }

// int main(void) {
//     float salario = 0;
//     char nivelExp;

//     printf("Digite o seu salario: ");
//     scanf("%f", &salario);
//     printf("Digite o seu nivel de experiencia: (s- senior, p- pleno, j- junior)\n->");
//     scanf(" %c", &nivelExp);

//     float novoSalario = aumento(salario, nivelExp);
//     printf("Novo salario: %.2f\n", novoSalario);

//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 13

// float soma(float n1,float n2,float n3) {
//     float soma = n1 + n2 + n3;
//     return soma;
// }

// float media(float n1, float n2, float n3) {
//     return soma(n1, n2, n3) / 3;
// }

// int main(void) {
//     int numbers[3];
//     for (int i = 0; i < 3; i++) {
//         printf("Digite o %d valor: ", i+1);
//         scanf("%d", &numbers[i]);
//     }
//     printf("A soma dos valores digitados: %.2f\n", soma(numbers[0], numbers[1], numbers[2]));
//     printf("Media dos valores digitados: %.2f\n", media(numbers[0], numbers[1], numbers[2]));
//     return 0;
// }

// #include <stdio.h> // EXERCÍCIO 14

// float mediaPontos(float pontos, int qtdJogos) {
//     return pontos / qtdJogos;
// }


// int main(void) {
//     int qtdVitorias = 0, qtdEmpates = 0, qtdDerrotas, qtdJogos = 0;
//     float pontos = 0;

//     printf("Digite a quantidade de vitorias do seu time:");
//     scanf("%d", &qtdVitorias);
//     pontos += qtdVitorias * 3;

//     printf("Digite a quantidade de empates do seu time:");
//     scanf("%d", &qtdEmpates);
//     pontos += qtdEmpates * 1;
     
//     printf("Digite a quantidade de derrotas do seu time:");
//     scanf("%d", &qtdDerrotas);
//     qtdJogos = qtdVitorias + qtdEmpates + qtdDerrotas;
    
//     printf("Media de pontos por jogos: %.2f\n", mediaPontos(pontos, qtdJogos));
//     return 0;
// }