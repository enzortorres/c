// #include <stdio.h> //! -==X EXERCÍCIO 1 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 2 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 3 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 4 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 5 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 6 X==-

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




// #include <stdio.h> //! -==X EXERCÍCIO 7 X==-
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




// #include <stdio.h> //! EXERCÍCIO 8

// int main(void) {
//     // [0,0] [0,1] [0,2] [0,3]
//     // [1,0] [1,1] [1,2] [1,3]
//     // [2,0] [2,1] [2,2] [2,3]
//     // [3,0] [3,1] [3,2] [3,3]

//     // [0,0] [0,1] [0,2] [0,3] [0,4]
//     // [1,0] [1,1] [1,2] [1,3] [1,4]
//     // [2,0] [2,1] [2,2] [2,3] [2,4]
//     // [3,0] [3,1] [3,2] [3,3] [3,4]
//     // [4,0] [4,1] [4,2] [4,3] [4,4]

//     int matriz[4][4], qtd = 0;
//     float media = 0, soma = 0;
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("Digite o valor da %d linha e %d coluna:", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//             if (i + j >= 4) {
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




// #include <stdio.h> //! EXERCÍCIO 9

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




// #include <stdio.h> //! EXERCÍCIO 10

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




// #include <stdio.h> //! EXERCÍCIO 11

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




// #include <stdio.h> //! EXERCÍCIO 12

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




// #include <stdio.h> //! EXERCÍCIO 13

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




// #include <stdio.h> //! EXERCÍCIO 14

// float mediaPontos(float pontos, int qtdJogos) {
//     return pontos / qtdJogos;
// }

// int main(void) {
//     int qtdVitorias = 0, qtdEmpates = 0, qtdDerrotas, qtdJogos = 0;
//     int pontos = 0;

//     printf("Digite a quantidade de vitorias do seu time:");
//     scanf("%d", &qtdVitorias);
//     pontos += qtdVitorias * 3;

//     printf("Digite a quantidade de empates do seu time:");
//     scanf("%d", &qtdEmpates);
//     pontos += qtdEmpates * 1;

//     printf("Digite a quantidade de derrotas do seu time:");
//     scanf("%d", &qtdDerrotas);
//     qtdJogos = qtdVitorias + qtdEmpates + qtdDerrotas;

//     printf("Pontos totais: %d\n", pontos);
//     printf("Media de pontos por jogos: %.2f\n", mediaPontos(pontos, qtdJogos));

//     return 0;
// }




// #include <stdio.h> //! EXERCÍCIO 15

// // a) 25 (ENDEREÇO DA VARIÁVEL A) (ENDEREÇO DA VARIÁVEL A) 25 50 (ENDEREÇO DA VARIÁVEL B)
// // b) "a" = VARIÁVEL DE TIPO INTEIRO, "pa" = O ENDEREÇO DA VARIÁVEL APONTADA (a), "&a" = ENDEREÇO DA VARIÁVEL "a", "*pa" = CONTEÚDO QUE O PONTEIRO APONTA (a), "b" = VARIÁVEL QUE ARMAZENA O CONTEÚDO DA VARIÁVEL APONTADA(a) MAIS O VALOR DE "a"

// int main(void) {
//     int a = 25;
//     int *pa = &a;
//     int b = *pa + a;
//     printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 16

// void contar_vogais(char *str, int *numCaracteres);

// int main(void) {
//     char frase[100];
//     int qtdCaracter = 0;

//     printf("Digite uma frase aleatoria: ");
//     fgets(frase, sizeof(frase), stdin);

//     contar_vogais(frase, &qtdCaracter);
//     printf("Quantidade de vogais minusculas digitadas: %d", qtdCaracter);

//     return 0;
// }

// void contar_vogais(char *str, int *numCaracteres) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             (*numCaracteres)++;
//         }
//     }
// }



// #include <stdio.h> //! EXERCÍCIO 17
// #include <math.h>

// //? Cálculo da área de um hexágono: A = 3 * lado² * raiz(3)
// //? Cálculo do perímetro de um hexágono: P = 6 * lado

// void calcular_hexagono(float lado, float *area, float *perimetro);
// int main(void) {
//     float lado = 0, area = 0, perimetro = 0;

//     printf("Digite o lado do hexagono: ");
//     scanf("%f", &lado);
//     calcular_hexagono(lado, &area, &perimetro);
//     printf("Lado do hexagono: %.2f\nArea do hexagono: %.2f\nPerimetro do hexagono: %.2f", lado, area, perimetro);
//     return 0;
// }

// void calcular_hexagono(float lado, float *area, float *perimetro) {
//     *area = 3 * pow(lado, 2) * sqrt(3) / 2;
//     *perimetro = 6 * lado;
// }



// #include <stdio.h> //! EXERCÍCIO 18

// char validarSituacao(float nota1, float nota2, float nota3, int faltas, int aulas, float *media);

// int main(void) {
//     float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
//     int faltas = 0, aulas = 0;
//     char situacao;

//     printf("Digite a primeira nota:");
//     scanf("%f", &nota1);
//     printf("Digite a segunda nota:");
//     scanf("%f", &nota2);
//     printf("Digite a terceira nota:");
//     scanf("%f", &nota3);
//     printf("Digite a quantidade de aulas: ");
//     scanf("%d", &aulas);
//     printf("Digite a quantidade de faltas: ");
//     scanf("%d", &faltas);

//     situacao = validarSituacao(nota1, nota2, nota3, faltas, aulas, &media);

//     switch(situacao) {
//         case 'A':
//             printf("Aprovado\n!");
//             break;
//         case 'R':
//             printf("Reprovado\n!");
//             break;
//         case 'F':
//             printf("Reprovado por falta!\n");
//             break;
//         default:
//             printf("Erro!\n");
//     }

//     return 0;
// }

// char validarSituacao(float nota1, float nota2, float nota3, int faltas, int aulas, float *media) {
//     float soma = nota1 + nota2 + nota3;
//     *media = soma / 3;
//     if (faltas <= (aulas * 0.25)) {
//         if (*media >= 6) {
//             return 'A';
//         } else {
//             return 'R';
//         }
//     } else {
//         return 'F';
//     }
// }



// #include <stdio.h> //! EXERCÍCIO 19

// int verificar_pares(int *array, int num_elementos);

// int main(void) {
//     int numbers[6], pares = 0;
//     int tamanho = sizeof(numbers) / sizeof(numbers[0]);

//     for(int i = 0; i < 6; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &numbers[i]);
//     }

//     pares = verificar_pares(numbers, tamanho);
//     printf("Quantidade de numeros pares na array: %d", pares);

//     return 0;
// }

// int verificar_pares(int *array, int num_elementos) {
//     int qtdPares = 0;
//     for (int i = 0; i < num_elementos; i++) {
//         if (*(array + i) % 2 == 0) {
//             qtdPares++;
//         }
//     }
//     return qtdPares;
// }



// #include <stdio.h> //! EXERCÍCIO 20

// int inverter_vetor(int *array1, int *array2, int tamanho);

// int main(void) {
//     int tamanho = 0;

//     printf("Digite o tamanho dos arrays: ");
//     scanf("%d", &tamanho);

//     int numbers1[tamanho], numbers2[tamanho];

//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &numbers1[i]);
//     }

//     inverter_vetor(numbers1, numbers2, tamanho);

//     printf("Vetor 1:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%d]", numbers1[i]);
//     }

//     printf("\n\nVetor 2:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%d]", numbers2[i]);
//     }

//     printf("\nMaior valor encontrado: %d\n", inverter_vetor(numbers1, numbers2, tamanho));

//     return 0;
// }

// int inverter_vetor(int *array1, int *array2, int tamanho) {
//     int maior = 0;

//     for (int i = 0; i < tamanho; i++) {
//         *(array2 + i) = *(array1 + (tamanho - 1 - i));

//         if (*(array1 + i) > maior) {
//             maior = *(array1 + i);
//         }
//     }

//     return maior;
// }



// #include <stdio.h> //! EXERCÍCIO 21

// void multiplicar_escalar(int *array1, int *array2, int escalar, int tamanho);

// int main(void) {
//     int tamanho = 0, escalar = 0;

//     printf("Digite o tamanho das arrays: ");
//     scanf("%d", &tamanho);

//     int numbers1[tamanho], numbers2[tamanho];

//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &numbers1[i]);
//     }

//     printf("Digite o valor do escalar: ");
//     scanf("%d", &escalar);

//     multiplicar_escalar(numbers1, numbers2, escalar, tamanho);

//     printf("Array resultante:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("[%d]", numbers2[i]);
//     }

//     return 0;
// }

// void multiplicar_escalar(int *array1, int *array2, int escalar, int tamanho) {
//     for (int i = 0; i < tamanho; i++) {
//         *(array2 + i) = *(array1 + i) * escalar;
//     }
// }

// #include <stdio.h> //! EXERCÍCIO 22
// #include <stdlib.h> 

// int main(void) {
//     int qtd = 0, soma = 0;
//     printf("Digite a quantidade de elementos do array: ");
//     scanf("%d", &qtd);

//     int *array = (int *) malloc(qtd * sizeof(int));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < qtd; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &array[i]);
//         soma += array[i];
//     }

//     printf("Array formado:\n");
//     for (int i = 0; i < qtd; i++) {
//         printf("[%d]", array[i]);
//     }
//     printf("\nSoma de todos os valores: %d\n", soma);

//     free(array);

//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 23
// #include <stdlib.h>

// int main(void) {
//     int qtdElementos = 0;
//     printf("Digite a quantidade de elementos do array: ");
//     scanf("%d", &qtdElementos);

//     int *array = (int *) malloc(qtdElementos * sizeof(int));
//     int *arrayCopia = (int *) malloc(qtdElementos * sizeof(int));

//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < qtdElementos; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &array[i]);
//     }

//     for (int i = 0; i < qtdElementos; i++) {
//         *(arrayCopia + i) = *(array + i);
//     }
//     printf("Array formada:\n");
//     for (int i = 0; i < qtdElementos; i++) {
//         printf("[%d]", *(array + i));
//     }

//     printf("\nArray copiada:\n");
//     for (int i = 0; i < qtdElementos; i++) {
//         printf("[%d]", *(arrayCopia + i));
//     }
//     free(array);
//     free(arrayCopia);
//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 24
// #include <stdlib.h>

// int main(void) {
//     int tamanho = 0, removedor = 0;
//     printf("Digite o tamanho do array: ");
//     scanf("%d", &tamanho);

//     int *array = (int*) malloc(5 * sizeof(int));
//     if (array == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("Digite o %do numero: ", i+1);
//         scanf("%d", &array[i]);
//     }

//     printf("Digite o elemento que deseja remover do array:");
//     scanf("%d", &removedor);

//     int pos;

//     for(pos = 0; pos < tamanho; pos++) {
//         if (array[pos] == removedor) {
//             break;
//         }
//     }
//     if (pos == tamanho) {
//         printf("Numero nao encontrado!\n");
//     } else {
//         tamanho--;
//         for (int i = pos; i < tamanho; i++) {
//             *(array + i) = *(array + i + 1);
//         }
//         array = (int*) realloc(array, tamanho * sizeof(int));
//         if (array == NULL) {
//             printf("ERRO! Memoria insuficiente!\n");
//             return 1;
//         }
//     }

//     for(int  i= 0; i < tamanho; i++) {
//         printf("[%d]", *(array + i));
//     }

//     free(array);
//     return 0;
// }



// #include <stdio.h> //! EXERCÍCIO 25
// #include <stdlib.h>

// int main(void) {
//     int linha = 3, coluna = 3, escalar = 0;

//     int **matriz = (int**) malloc(linha * sizeof(int*));
//     if (matriz == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for(int i = 0; i < linha; i++) {
//         matriz[i] = (int *) malloc(coluna * sizeof(int));
//         if (matriz[i] == NULL) {
//             printf("ERRO! Memoria insuficiente!\n");
//             return 1;
//         }
//     }

//     int **matrizResultante = (int**) malloc(linha * sizeof(int*));
//     if (matrizResultante == NULL) {
//         printf("ERRO! Memoria insuficiente!\n");
//         return 1;
//     }

//     for(int i = 0; i < linha; i++) {
//         matrizResultante[i] = (int *) malloc(coluna * sizeof(int));
//         if (matrizResultante[i] == NULL) {
//             printf("ERRO! Memoria insuficiente!\n");
//             return 1;
//         }
//     }

//     for (int i = 0; i < linha; i++) {
//         for (int j = 0; j < coluna; j++) {
//             printf("Digite o valor da %d coluna da %d linha: ", j+1, i+1);
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Digite um valor para o escalar: ");
//     scanf("%d", &escalar);

//     printf("Matriz antiga:\n");
//     for (int i = 0; i < linha; i++) {
//         for (int j = 0; j < coluna; j++) {
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nMatriz resultante:\n");
//     for (int i = 0; i < linha; i++) {
//         for (int j = 0; j < coluna; j++) {
//             matrizResultante[i][j] = matriz[i][j] * escalar;
//         }
//     }

//     for (int i = 0; i < linha; i++) {
//         for (int j = 0; j < coluna; j++) {
//             printf("[%d]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < linha; i++) {
//         free(matriz[i]);
//         free(matrizResultante[i]);
//     }
//     free(matriz);
//     free(matrizResultante);

//     return 0;
// }