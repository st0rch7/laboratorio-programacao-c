#include <stdio.h>

int main() {
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 0, 0, 1},
        {0, 0, 1, 0}
    };

    int disponiveis = 0;
    int ocupados = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(assentos[i][j] == 0) {
                disponiveis++;
            } else {
                ocupados++;
            }
        }
    }

    printf("===== MAPA DO CINEMA =====\n");
    printf("Assentos disponiveis: %d\n", disponiveis);
    printf("Assentos ocupados: %d\n", ocupados);

    return 0;
}
