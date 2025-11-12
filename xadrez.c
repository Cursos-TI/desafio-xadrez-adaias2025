#include <stdio.h>

// ===================== TORRE (recursividade) =====================
// A torre se move em linha reta. Exemplo: para a direita.
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// ===================== BISPO (recursividade + loops aninhados) =====================
// O bispo se move na diagonal: um passo vertical + um passo horizontal.
// Aqui usamos loops aninhados e recursão para repetir o padrão.
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // loop externo: movimento vertical
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // loop interno: movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    // chamada recursiva para continuar o movimento
    moverBispo(casas - 1);
}

// ===================== RAINHA (recursividade) =====================
// A rainha combina torre e bispo. Aqui ela se move para a esquerda.
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ===================== CAVALO (loops complexos) =====================
// O cavalo se move em "L": duas casas para cima e uma para a direita.
// Loops aninhados + continue e break controlam o fluxo.
void moverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {

        // Movimento vertical (duas casas para cima)
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
            if (i == 0) continue; // apenas demonstra o uso de continue
        }

        // Movimento horizontal (uma casa para a direita)
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Direita\n");
                break; // sai após mover uma casa
            }
        }
    }
}

// ===================== FUNÇÃO PRINCIPAL =====================
int main() {
    // Quantidade de casas/movimentos definidos diretamente
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // Torre
    printf("=== Movimento da TORRE ===\n");
    moverTorre(casasTorre);

    // Bispo
    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(casasBispo);

    // Rainha
    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(casasRainha);

    // Cavalo
    printf("\n=== Movimento do CAVALO ===\n");
    moverCavalo(movimentosCavalo);

    return 0;
}