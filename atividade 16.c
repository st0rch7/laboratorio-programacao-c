#include <stdio.h>

int main() {
    char palavra[50];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra informada tem %d letras.\n", contador);

    return 0;
}
