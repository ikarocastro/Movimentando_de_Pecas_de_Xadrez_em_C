#include <stdio.h>

int main() {
    
    // Movimentação da Torre - usando o laço FOR
    
    int i;
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");
    // A torre anda em linha reta (horizontal ou vertical)
    // Aqui, ela vai se mover 5 casas para a direita
    for (i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

   
    // Movimentação do Bispo - usando o laço WHILE

    int j = 1;
    int casasBispo = 5;

    printf("\n=== Movimento do Bispo ===\n");
    // O bispo se move na diagonal (aqui: Cima + Direita)
    while (j <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    
    // Movimentação da Rainha - usando o laço DO-WHILE
    
    int k = 1;
    int casasRainha = 8;

    printf("\n=== Movimento da Rainha ===\n");
    // A rainha se move em todas as direções
    // Aqui, o movimento será 8 casas para a esquerda
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

  
    // Finalização do programa
    
    printf("\nTodos os movimentos foram simulados com sucesso!\n");

    return 0;
}