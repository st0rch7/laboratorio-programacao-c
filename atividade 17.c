#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n");
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%s", perfil);

    int tamanho = strlen(nome);

    strcpy(confirmacao, nome);

    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %d\n", tamanho);

    if(strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else {
        printf("Perfil: Comum\n");
    }

    printf("%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
