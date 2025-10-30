#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===== MOVIMENTO DA TORRE =====
    printf("=== Movimento da Torre ===\n");
    // Torre se move em linha reta — usaremos o FOR
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ===== MOVIMENTO DO BISPO =====
    printf("\n=== Movimento do Bispo ===\n");
    // Bispo se move na diagonal — usaremos o WHILE
    int i = 1;
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // ===== MOVIMENTO DA RAINHA =====
    printf("\n=== Movimento da Rainha ===\n");
    // Rainha pode se mover em todas as direções — usaremos o DO-WHILE
    int j = 1;
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    // Fim do programa
    printf("\nSimulação concluída!\n");

    return 0;
}
