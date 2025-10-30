#include <stdio.h>

// ===== Função recursiva da Torre =====
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return; // condição de parada
    printf("Casa %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas); // chamada recursiva
}

// ===== Função recursiva do Bispo =====
void moverBispo(int linha, int totalCasas) {
    if (linha > totalCasas) return; // condição de parada

    // Loop aninhado: movimento diagonal (Cima e Direita)
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Casa %d: Cima, Direita\n", linha);
        }
    }

    moverBispo(linha + 1, totalCasas); // chamada recursiva
}

// ===== Função recursiva da Rainha =====
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Casa %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas);
}

// ===== Função do Cavalo (loops complexos) =====
void moverCavalo(int casasCima, int casasDireita) {
    printf("\n=== Movimento do Cavalo ===\n");

    int movimentos = 0;

    // Loop externo controla o movimento vertical (para cima)
    for (int i = 1; i <= casasCima; i++) {
        // Loop interno pode pular iterações usando continue
        for (int j = 0; j < 2; j++) {
            if (j == 1 && i == 1) {
                // pula a segunda iteração do primeiro movimento
                continue;
            }
            printf("Casa %d: Cima\n", ++movimentos);
            break; // garante apenas um movimento vertical por vez
        }
    }

    // Após mover para cima, move uma casa para a direita
    for (int k = 1; k <= casasDireita; k++) {
        printf("Casa %d: Direita\n", ++movimentos);
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloCima = 2;
    int casasCavaloDireita = 1;

    // ===== MOVIMENTO DA TORRE =====
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, casasTorre);

    // ===== MOVIMENTO DO BISPO =====
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, casasBispo);

    // ===== MOVIMENTO DA RAINHA =====
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, casasRainha);

    // ===== MOVIMENTO DO CAVALO =====
    moverCavalo(casasCavaloCima, casasCavaloDireita);

    printf("\nSimulação concluída!\n");
    return 0;
}
