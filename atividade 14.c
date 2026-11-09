#include <stdio.h>

int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};

    printf("--- Exercicio 1: Matriz 2x2 fixa ---\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    int matriz2[2][2];
    printf("\n--- Exercicio 2: Leitura de Matriz 2x2 ---\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    int matriz3[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int soma = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz3[i][j]; // Acumula o valor na variavel soma
        }
    }
    printf("\n--- Exercicio 3: Soma da Matriz 3x3 ---\n");
    printf("Soma total dos elementos: %d\n", soma);

    return 0;
}
