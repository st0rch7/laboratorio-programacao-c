#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno1;

    printf("===== CADASTRO DE ALUNO (STRUCT) =====\n");
    printf("Digite o nome: ");
    scanf(" %49[^\n]", aluno1.nome); // Le nome completo com espacos

    printf("Digite a idade: ");
    scanf("%d", &aluno1.idade);

    printf("Digite a nota: ");
    scanf("%f", &aluno1.nota);

    printf("\n--- DADOS DO ALUNO ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}
