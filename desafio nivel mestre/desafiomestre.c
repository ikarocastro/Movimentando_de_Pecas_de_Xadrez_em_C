#include <stdio.h>

// ==================== FUNÇÕES RECURSIVAS ====================

// Movimento da Torre (recursivo)
void moverTorre(int casaAtual, int casasTotais) {
    if (casaAtual > casasTotais) return; // Condição de parada da recursão
    printf("Casa %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, casasTotais); // Chamada recursiva
}

// Movimento da Rainha (recursivo)
void moverRainha(int casaAtual, int casasTotais) {
    if (casaAtual > casasTotais) return; 
    printf("Casa %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, casasTotais);
}

// Movimento do Bispo (recursivo + loops aninhados)
void moverBispo(int linha, int limiteVertical, int limiteHorizontal) {
    if (linha > limiteVertical) return; // Parada recursiva (fim da subida)
    
    // Loop interno controla o movimento horizontal em cada "subida"
    for (int coluna = 1; coluna <= limiteHorizontal; coluna++) {
        printf("Linha %d, Casa %d: Cima, Direita\n", linha, coluna);
    }
    
    moverBispo(linha + 1, limiteVertical, limiteHorizontal); // Chamada recursiva
}

// ==================== MOVIMENTO COMPLEXO DO CAVALO ====================
void moverCavalo() {
    printf("\n==== Movimento do Cavalo ====\n");
    // O cavalo se move em "L": duas casas para cima e uma para a direita
    
    int movimentosCima = 2;
    int movimentosDireita = 1;

    // Loops aninhados controlam as duas direções
    for (int i = 1; i <= movimentosCima; i++) {
        for (int j = 1; j <= movimentosDireita; j++) {
            if (i == 2 && j == 1) {
                // Ponto final do movimento em L
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                printf("Cavalo completou o movimento em L!\n");
                break; // Sai do loop interno
            } else {
                printf("Cima\n");
                continue; // Continua subindo até atingir o formato do L
            }
        }
    }
}

// ==================== FUNÇÃO PRINCIPAL ====================
int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, 5); // 5 casas para a direita

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, 3, 3); // 3 linhas e 3 colunas simulando diagonal

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, 8); // 8 casas para a esquerda

    moverCavalo(); // Movimento em L (duas casas para cima e uma para a direita)

    printf("\nTodos os movimentos foram simulados com sucesso!\n");
    return 0;
}
