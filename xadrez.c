#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===================== TORRE =====================
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===================== BISPO =====================
    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ===================== RAINHA =====================
    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    // ===================== CAVALO =====================
    printf("\n=== Movimento do Cavalo ===\n");
    
    int movimentosVerticais = 2;   // duas casas para baixo
    int movimentosHorizontais = 1; // uma casa para esquerda

    // Loop externo (for) controla os tipos de movimento: 0 = vertical, 1 = horizontal
    for (int etapa = 0; etapa < 2; etapa++) {
        int k = 0;

        if (etapa == 0) {
            // Primeira parte: dois movimentos para baixo
            while (k < movimentosVerticais) {
                printf("Baixo\n");
                k++;
            }
        } else {
            // Segunda parte: um movimento para a esquerda
            while (k < movimentosHorizontais) {
                printf("Esquerda\n");
                k++;
            }
        }
    }

    return 0;
}