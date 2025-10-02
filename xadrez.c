#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===================== TORRE =====================
    // Movimenta-se em linha reta horizontal ou vertical
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===================== BISPO =====================
    // Movimenta-se na diagonal (cima e direita)
    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ===================== RAINHA =====================
    // Movimenta-se em todas as direções (simulação: 8 casas para a esquerda)
    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}