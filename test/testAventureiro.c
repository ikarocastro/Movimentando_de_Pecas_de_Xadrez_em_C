#include <stdio.h>

int main() {
    // Movimento do Cavalo: 2 casas para baixo, 1 para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("\n--- Movimento do Cavalo ---\n\n");

    // Primeiro loop (for): controla o movimento para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop (while): controla o movimento para a esquerda
    int j = 1;
    while (j <= movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    /*
     * Explicação:
     * O primeiro loop (for) percorre duas vezes — cada repetição representa
     * o cavalo descendo uma casa no tabuleiro.
     * Depois disso, o loop while move o cavalo uma casa para a esquerda,
     * completando o movimento em "L".
     */

    printf("\nMovimento completo do Cavalo finalizado!\n");

    return 0;
}
