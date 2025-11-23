#include <stdio.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // Inicializando diretamente no código
    struct Aluno aluno1 = {"Maria Silva", 20, 8.7};

    // Exibindo os dados
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
