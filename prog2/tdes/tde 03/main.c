// #include <stdio.h> //! EXERCÍCIO 1
// #include <string.h>

// struct Livro {
//     char titulo[30];
//     char autor[30];
//     int numPaginas;
// };

// typedef struct Livro livro;

// void infoLivro(livro livro);

// int main(void) {
//     livro livro1;

//     printf("Digite o titulo do livro: ");
//     fgets(livro1.titulo, sizeof(livro1.titulo), stdin);
//     livro1.titulo[strcspn(livro1.titulo, "\n")] = '\0';

//     printf("Digite o autor do livro: ");
//     fgets(livro1.autor, sizeof(livro1.autor), stdin);
//     livro1.autor[strcspn(livro1.autor, "\n")] = '\0';

//     printf("Digite a quantidade de paginas do livro: ");
//     scanf("%d", &livro1.numPaginas);

//     infoLivro(livro1);
//     return 0;
// }

// void infoLivro(livro livro) {
//     printf("\nTitulo: %s\n", livro.titulo);
//     printf("Autor: %s\n", livro.autor);
//     printf("Paginas: %d\n", livro.numPaginas);
// }



// #include <stdio.h> //! EXERCÍCIO 2
// #include <string.h>

// struct Aluno {
//     char nome[30];
//     int numMatricula;
//     float notas[3];
// };

// typedef struct Aluno Aluno;

// float mediaAluno(Aluno aluno);

// int main(void) {
//     Aluno aluno;
//     float media = 0;

//     printf("Digite o nome do aluno: ");
//     fgets(aluno.nome, sizeof(aluno.nome), stdin);
//     aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

//     printf("Digite a matricula: ");
//     scanf("%d", &aluno.numMatricula);
//     getchar();

//     for (int i = 0; i < 3; i++) {
//         printf("Digite a %da nota: ", i+1);
//         scanf("%f", &aluno.notas[i]);
//         getchar();
//     }

//     media = mediaAluno(aluno);

//     printf("Media do aluno (%s): %.1f", aluno.nome, media);
//     return 0;
// }

// float mediaAluno(Aluno aluno) {
//     float media = 0, soma = 0;

//     for (int i = 0; i < 3; i++) {
//         soma += aluno.notas[i];
//     }
//     media = soma / 3;
//     return media;
// }



// #include <stdio.h> //! EXERCÍCIO 3
// #include <string.h> 

// struct Data {
//     int dia;
//     int mes;
//     int ano;
// };

// typedef struct Data data;

// struct Alunos {
//     char nome[30];
//     int matricula;
//     data datanasc;
// };

// typedef struct Alunos alunos;

// void infoAluno(alunos aluno);

// int main(void) {
//     alunos aluno;

//     printf("Digite o nome do aluno: ");
//     fgets(aluno.nome, sizeof(aluno.nome), stdin);
//     aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

//     printf("Digite a matricula: ");
//     scanf("%d", &aluno.matricula);

//     printf("Digite a data de nascimento do aluno (dd/mm/yyyy): ");
//     scanf("%d/%d/%d", &aluno.datanasc.dia, &aluno.datanasc.mes, &aluno.datanasc.ano);

//     infoAluno(aluno);
//     return 0;
// }

// void infoAluno(alunos aluno) {
//     char meses[12][20] = {
//         "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
//         "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
//     };

//     printf("\nNome do aluno: %s\n", aluno.nome);
//     printf("Matricula: %d\n", aluno.matricula);
//     printf("Nascimento: %d de %s de %d\n", aluno.datanasc.dia, meses[aluno.datanasc.mes - 1], aluno.datanasc.ano);
// }



// #include <stdio.h> //! EXERCÍCIO 4

// struct Tempo {
//     int hora;
//     int minuto;
//     int segundo;
// };

// typedef struct Tempo tempo;

// struct DataTempo {
//     int dia;
//     int mes;
//     int ano;
//     tempo horario;
// };

// typedef struct DataTempo datatempo;

// void showTime(datatempo momento);
// void showData(datatempo momento);

// int main(void) {
//     datatempo momento;

//     // Horario
//     printf("Digite o horario atual (hh:mm:ss): ");
//     scanf("%d:%d:%d", &momento.horario.hora, &momento.horario.minuto, &momento.horario.segundo);

//     // Data
//     printf("Digite a data atual (dd/mm/yyyy): ");
//     scanf("%d/%d/%d", &momento.dia, &momento.mes, &momento.ano);

//     showData(momento);
//     showTime(momento);

//     return 0;
// }

// void showTime(datatempo momento) {
//     printf("Horario atual: ");
//     printf("%d:%d:%d\n", momento.horario.hora, momento.horario.minuto, momento.horario.segundo);
// }

// void showData(datatempo momento) {
//     char meses[12][20] = {
//         "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
//         "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
//     };

//     printf("Data atual: ");
//     printf("%d de %s de %d\n", momento.dia, meses[momento.mes - 1], momento.ano);
// }



// #include <stdio.h> //! EXERCÍCIO 5
// #include <string.h>

// struct ContaBancaria {
//     int numConta;
//     char nomeTitular[30];
//     float saldo;
// }; 

// typedef struct ContaBancaria banco;

// void sacar(float valor, banco *conta);
// void depositar(float valor, banco *conta);

// int main(void) {
//     int opcao;
//     float valor;
//     banco conta;

//     printf("Digite o numero da conta: ");
//     scanf("%d", &conta.numConta);
//     getchar();
//     strcpy(conta.nomeTitular, "Enzo Ribas");
//     conta.saldo = 1000;

    

//     do {
//         printf("\nOque deseja realizar?\n");
//         printf("1- Sacar\n");
//         printf("2- Depositar\n");
//         printf("3- Checar saldo\n");
//         printf("4- Sair\n");
//         printf("\033[30m->\033[m ");
//         scanf("%d", &opcao);
//         if(opcao == 1) {
//             printf("Quanto deseja sacar? ");
//             scanf("%f", &valor);
//             sacar(valor, &conta);
//         } else if (opcao == 2) {
//             printf("Quanto deseja depositar? ");
//             scanf("%f", &valor);
//             depositar(valor, &conta);
//         } else if (opcao == 3) {
//             printf("\033[33mSaldo: R$ %.2f\n\033[m", conta.saldo);
//         } else if (opcao == 4) {
//             printf("Encerrando programa...\n");
//             break;
//         } else {
//             printf("\033[31mDigite um valor valido!\033[m\n");
//         }
//     } while (opcao != 4);

//     return 0;
// }

// void sacar(float valor, banco *conta) {
//     if (valor > conta->saldo) {
//         printf("\033[31mSaldo insuficiente.\033[m\n");
//     } else if (valor == 0) {
//         printf("\033[31mValor invalido.\033[m\n");
//     } else {
//         conta->saldo -= valor;
//         printf("\033[32mSaque realizado com sucesso. \033[33mSaldo atual: R$ %.2f\033[m\n", conta->saldo);
//     }
// }

// void depositar(float valor, banco *conta) {
//     if (valor <= 0) {
//         printf("\033[31mValor invalido.\033[m\n");
//     } else {
//         conta->saldo += valor;
//         printf("\033[32mDeposito realizado com sucesso. \033[33mSaldo atual: R$ %.2f\033[m\n", conta->saldo);
//     }
// }



#include <stdio.h> //! EXERCÍCIO 6
#include <string.h>

