#include <stdio.h>

// ===================== TORRE (recursividade) =====================
// A torre se move em linha reta. Aqui vamos mover para a direita.
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// ===================== BISPO (recursividade + loops aninhados) =====================
// O bispo se move na diagonal: um passo vertical + um passo horizontal.
// Aqui implementamos a recursão e usamos loops para imprimir cada movimento.
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // loop mais externo: movimento vertical
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");
        // loop interno: movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // recursão para continuar o movimento
}

// ===================== RAINHA (recursividade) =====================
// A rainha combina os movimentos da torre e do bispo.
// Aqui vamos movê-la só para a esquerda.
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ===================== CAVALO (loops complexos) =====================
// O cavalo se move em "L": duas casas para cima e uma para a direita.
// Vamos usar loops aninhados + continue e break para controlar o fluxo.
void moverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        // movimento vertical (duas casas para cima)
        for (int i = 0; i < 2; i++) {
            if (i == 1) {
                printf("Cima\n");
                continue; // força a próxima iteração
            }
            printf("Cima\n");
        }

        // movimento horizontal (uma casa para a direita)
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Direita\n");
                break; // sai logo após imprimir
            }
        }
    }
}

// ===================== MAIN =====================
int main() {
    // Quantidade de casas (definidas no código)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // Torre
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    // Bispo
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    // Rainha
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    // Cavalo
    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo(movimentosCavalo);

    return 0;
}