#include <stdio.h>

// Struct usada novamente
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5]; // Array com 5 alunos

    // Coleta dos dados
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do aluno %d ---\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); // lê string com espaços

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    // Exibindo todos os alunos cadastrados
    printf("\n===== LISTA COMPLETA DE ALUNOS =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}
