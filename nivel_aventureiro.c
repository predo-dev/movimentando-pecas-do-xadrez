#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // ===== MOVIMENTO DA TORRE ===== (for)
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ===== MOVIMENTO DO BISPO ===== (while)
    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // ===== MOVIMENTO DA RAINHA ===== (do-while)
    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    // ===== MOVIMENTO DO CAVALO ===== (for + while aninhados)
    printf("\n=== Movimento do Cavalo ===\n");

    int passosVerticais = 0;

    // Loop while controla as duas casas para baixo
    while (passosVerticais < casasBaixo) {
        for (int k = 0; k < 1; k++) { // pequeno loop for dentro
            printf("Casa %d: Baixo\n", passosVerticais + 1);
        }
        passosVerticais++;
    }

    // Depois das duas casas para baixo, move uma para a esquerda
    for (int l = 1; l <= casasEsquerda; l++) {
        printf("Casa %d: Esquerda\n", casasBaixo + l);
    }

    // Fim da simulação
    printf("\nSimulação concluída!\n");

    return 0;
}
