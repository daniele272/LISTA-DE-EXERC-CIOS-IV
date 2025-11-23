#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];

    // Entrada de dados
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    // Escolher aluno para atualizar
    int indice;
    printf("\nDigite o índice do aluno que deseja atualizar a nota (0 a 4): ");
    scanf("%d", &indice);

    // Atualizar nota
    if (indice >= 0 && indice < 5) {
        printf("Nova nota para %s: ", alunos[indice].nome);
        scanf("%f", &alunos[indice].nota);

        printf("\n=== DADOS ATUALIZADOS ===\n");
        printf("Nome: %s\n", alunos[indice].nome);
        printf("Idade: %d\n", alunos[indice].idade);
        printf("Nota: %.2f\n", alunos[indice].nota);
    } else {
        printf("Índice inválido!\n");
    }

    return 0;
}
