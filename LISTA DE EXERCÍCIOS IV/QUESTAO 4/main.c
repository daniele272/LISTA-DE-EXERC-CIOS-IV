#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

// Função para exibir um aluno
void exibirAluno(struct Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}

// Função para criar um aluno (retorna a struct criada)
struct Aluno criarAluno() {
    struct Aluno a;

    printf("Nome: ");
    scanf(" %[^\n]", a.nome);

    printf("Idade: ");
    scanf("%d", &a.idade);

    printf("Nota: ");
    scanf("%f", &a.nota);

    return a;
}

// Função para remover aluno (substitui por valores padrão)
struct Aluno removerAluno() {
    struct Aluno vazio;

    strcpy(vazio.nome, "-");
    vazio.idade = 0;
    vazio.nota = 0.0;

    return vazio;
}

int main() {
    struct Aluno alunos[4];
    int total = 0;
    int opcao;

    // Inicializa todos como vazios
    for (int i = 0; i < 4; i++) {
        strcpy(alunos[i].nome, "-");
        alunos[i].idade = 0;
        alunos[i].nota = 0.0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Criar novo aluno\n");
        printf("2 - Exibir todos os alunos\n");
        printf("3 - Remover aluno\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total < 4) {
                    alunos[total] = criarAluno();
                    total++;
                } else {
                    printf("Limite máximo atingido!\n");
                }
                break;

            case 2:
                printf("\n=== LISTA DE ALUNOS ===\n");
                for (int i = 0; i < 4; i++) {
                    printf("\nAluno %d:\n", i);
                    exibirAluno(alunos[i]);
                }
                break;

            case 3:
                printf("Digite o índice do aluno para remover (0 a 3): ");
                int idx;
                scanf("%d", &idx);

                if (idx >= 0 && idx < 4) {
                    alunos[idx] = removerAluno();
                    printf("Aluno removido!\n");
                } else {
                    printf("Índice inválido!\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    return 0;
}
