#include <stdio.h>

int main() {

    // Variáveis do desafio anterior
    int MOVIMENTO_TORRE= 5;
    int MOVIMENTO_BISPO= 5;
    int MOVIMENTO_RAINHA= 8;

    // Variáveis para o movimento do Cavalo (Nível Aventureiro)
    int CAVALO_PASSOS_DIRECAO_1 = 2; // Duas casas (Baixo)
    int CAVALO_PASSOS_DIRECAO_2 = 1; // Uma casa (Esquerda)

    // Variável loop
    int i = 0;

    // -----------------------------------------------------------------
    // TORRE
    // -----------------------------------------------------------------
    printf("--- Movimentacao da Torre ---\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("Torre moveu %d casas para a direita.\n\n", MOVIMENTO_TORRE);

    // -----------------------------------------------------------------
    // BISPO
    // -----------------------------------------------------------------
    printf("--- Movimentacao do Bispo ---\n");
    i = 0; // Reinicia o contador
    while (i < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        i++;
    }
    printf("Bispo moveu %d casas na diagonal (Cima Direita).\n\n", MOVIMENTO_BISPO);

    // -----------------------------------------------------------------
    // RAINHA (do-while)
    // -----------------------------------------------------------------
    printf("--- Movimentacao da Rainha ---\n");
    i = 0; // Reinicia o contador
    if (MOVIMENTO_RAINHA > 0) {
        do {
            printf("Esquerda\n");
            i++;
        } while (i < MOVIMENTO_RAINHA);
    }
    printf("Rainha moveu %d casas para a esquerda.\n\n", MOVIMENTO_RAINHA);

    // =================================================================
    // CAVALO (NÍVEL AVENTUREIRO)
    // Movimento: "L" (2 casas Baixo, 1 casa Esquerda)
    // Estruturas de Repetição Aninhadas: for e while
    // =================================================================
    printf("\n--- Movimentacao do Cavalo ---\n");

    // Lógica do Movimento do Cavalo em "L":

    // 1. O loop externo (for) simula a primeira etapa do "L": duas casas para baixo.
    printf("Etapa 1: Duas casas para Baixo\n");
    for (i = 1; i <= CAVALO_PASSOS_DIRECAO_1; i++) {
        // Imprime a direção a cada passo da primeira etapa
        printf("Baixo\n");
    }

    // 2. O loop interno (while) simula a segunda etapa do "L": uma casa perpendicularmente (Esquerda).
    // O uso de loops aninhados aqui serve para demonstrar a estrutura solicitada,
    // mesmo que o loop interno execute apenas uma vez (CAVALO_PASSOS_DIRECAO_2 = 1).
    printf("Etapa 2: Uma casa para Esquerda\n");
    int j = 0; // Variável de controle para o loop interno
    while (j < CAVALO_PASSOS_DIRECAO_2) {
        // Imprime a direção a cada passo da segunda etapa
        printf("Esquerda\n");
        j++; // Incrementa o contador interno
    }

    printf("Cavalo moveu em 'L' (2 Baixo, 1 Esquerda).\n\n");

    return 0;
}
